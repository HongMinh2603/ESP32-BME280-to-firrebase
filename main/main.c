#include <stdio.h>
#include <string.h>
#include "esp_log.h"
#include "bme280.h"
#include "firebase.h"
#include "esp_http_client.h"
#include "json.h"
#include "esp_wifi.h"
#include "nvs_flash.h"
#include "time.h"

#define I2C_FD 1

void wifi_init(void) {
    esp_err_t ret = nvs_flash_init();
    if (ret == ESP_ERR_NVS_NO_FREE_PAGES || ret == ESP_ERR_NVS_NEW_VERSION_FOUND) {
        ESP_ERROR_CHECK(nvs_flash_erase());
        ret = nvs_flash_init();
    }
    ESP_ERROR_CHECK(ret);

    wifi_init_config_t cfg = WIFI_INIT_CONFIG_DEFAULT();
    ESP_ERROR_CHECK(esp_wifi_init(&cfg));

    wifi_config_t wifi_config = {
        .sta = {
            .ssid = "TP-Link_C250",     // Thay đổi thành SSID của bạn
            .password = "32146271", // Thay đổi thành mật khẩu Wi-Fi của bạn
        },
    };
    ESP_ERROR_CHECK(esp_wifi_set_mode(WIFI_MODE_STA));
    ESP_ERROR_CHECK(esp_wifi_set_config(ESP_IF_WIFI_STA, &wifi_config));
    ESP_ERROR_CHECK(esp_wifi_start());
    ESP_ERROR_CHECK(esp_wifi_connect());

    ESP_LOGI("WiFi", "Connecting to %s...", wifi_config.sta.ssid);
}

void app_main(void) {
    wifi_init();  
    ESP_LOGI("WiFi", "Connecting to WiFi...");

    vTaskDelay(pdMS_TO_TICKS(2000));

    firebase_config_t config;  
    config.url = FIREBASE_URL;  
    config.auth = FIREBASE_AUTH; 

    if (firebase_init(&config) < 0) {
        ESP_LOGE("Firebase", "Initialization failed!");
        return;
    }

    if (bme280_init(I2C_FD) < 0) {
        ESP_LOGE("BME280", "Initialization failed!");
        return;
    }

    float temperature, humidity, pressure;

    while (1) {
        if (bme280_read_temperature(&temperature) < 0) {
            ESP_LOGE("BME280", "Failed to read temperature!");
            vTaskDelay(pdMS_TO_TICKS(1000));  
            continue;
        }

        if (bme280_read_humidity(&humidity) < 0) {
            ESP_LOGE("BME280", "Failed to read humidity!");
            vTaskDelay(pdMS_TO_TICKS(1000));  
            continue;
        }

        if (bme280_read_pressure(&pressure) < 0) {
            ESP_LOGE("BME280", "Failed to read pressure!");
            vTaskDelay(pdMS_TO_TICKS(1000));  
            continue;
        }

        time_t now;
        struct tm timeinfo;
        time(&now);
        localtime_r(&now, &timeinfo);

        char timestamp[64];
        strftime(timestamp, sizeof(timestamp), "%Y-%m-%dT%H:%M:%SZ", &timeinfo);

        char json_data[256];
        snprintf(json_data, sizeof(json_data),
                 "{\"temperature\": %.2f, \"humidity\": %.2f, \"pressure\": %.2f}",
                 temperature, humidity, pressure);

        if (firebase_send_data(timestamp, json_data) < 0) {
            ESP_LOGE("Firebase", "Failed to send data!");
        } else {
            ESP_LOGI("Firebase", "Data sent: %s", json_data);
        }

        vTaskDelay(pdMS_TO_TICKS(10000)); 
    }
}
