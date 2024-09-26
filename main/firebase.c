#include "firebase.h"
#include <stdio.h>
#include <string.h>
#include <curl/curl.h>

firebase_config_t config;
// Hàm khởi tạo kết nối tới Firebase
int firebase_init(void) {
    // Khởi tạo thư viện CURL
    curl_global_init(CURL_GLOBAL_ALL);
    return 0;
}


if (firebase_init(&config) < 0) {
    ESP_LOGE("Firebase", "Initialization failed!");
    return;
}

// Hàm gửi dữ liệu lên Firebase
int firebase_send_data(const char *path, const char *data) {
    CURL *curl;
    CURLcode res;

    char url[256];
    snprintf(url, sizeof(url), "%s%s.json?auth=%s", FIREBASE_URL, path, FIREBASE_AUTH);

    curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url);
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data);

        // Gửi yêu cầu
        res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
            curl_easy_cleanup(curl);
            return -1;
        }

        curl_easy_cleanup(curl);
    }
    return 0;
}

// Hàm nhận dữ liệu từ Firebase
int firebase_get_data(const char *path, char *buffer, size_t buffer_size) {
    CURL *curl;
    CURLcode res;

    char url[256];
    snprintf(url, sizeof(url), "%s%s.json?auth=%s", FIREBASE_URL, path, FIREBASE_AUTH);

    curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, NULL);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, buffer);

        // Gửi yêu cầu
        res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
            curl_easy_cleanup(curl);
            return -1;
        }

        curl_easy_cleanup(curl);
    }
    return 0;
}
