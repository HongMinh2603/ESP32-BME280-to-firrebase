#include "bme280.h"
#include "driver/i2c.h"
#include "esp_log.h"

static int i2c_fd;

static esp_err_t bme280_read_byte(uint8_t reg, uint8_t *data) {
    esp_err_t ret;
    i2c_cmd_handle_t cmd = i2c_cmd_link_create();
    i2c_master_start(cmd);
    i2c_master_write_byte(cmd, (BME280_I2C_ADDRESS << 1) | I2C_MASTER_WRITE, true);
    i2c_master_write_byte(cmd, reg, true);
    i2c_master_stop(cmd);
    ret = i2c_master_cmd_begin(I2C_NUM_0, cmd, 1000 / portTICK_PERIOD_MS);
    i2c_cmd_link_delete(cmd);

    if (ret != ESP_OK) {
        return ret;
    }

    cmd = i2c_cmd_link_create();
    i2c_master_start(cmd);
    i2c_master_write_byte(cmd, (BME280_I2C_ADDRESS << 1) | I2C_MASTER_READ, true);
    i2c_master_read_byte(cmd, data, I2C_MASTER_NACK);
    i2c_master_stop(cmd);
    ret = i2c_master_cmd_begin(I2C_NUM_0, cmd, 1000 / portTICK_PERIOD_MS);
    i2c_cmd_link_delete(cmd);

    return ret;
}

static esp_err_t bme280_read_data(uint8_t reg, uint8_t *data, size_t length) {
    esp_err_t ret;
    i2c_cmd_handle_t cmd = i2c_cmd_link_create();
    i2c_master_start(cmd);
    i2c_master_write_byte(cmd, (BME280_I2C_ADDRESS << 1) | I2C_MASTER_WRITE, true);
    i2c_master_write_byte(cmd, reg, true);
    i2c_master_stop(cmd);
    ret = i2c_master_cmd_begin(I2C_NUM_0, cmd, 1000 / portTICK_PERIOD_MS);
    i2c_cmd_link_delete(cmd);

    if (ret != ESP_OK) {
        return ret;
    }

    cmd = i2c_cmd_link_create();
    i2c_master_start(cmd);
    i2c_master_write_byte(cmd, (BME280_I2C_ADDRESS << 1) | I2C_MASTER_READ, true);
    i2c_master_read(cmd, data, length, I2C_MASTER_LAST_NACK);
    i2c_master_stop(cmd);
    ret = i2c_master_cmd_begin(I2C_NUM_0, cmd, 1000 / portTICK_PERIOD_MS);
    i2c_cmd_link_delete(cmd);

    return ret;
}

static esp_err_t bme280_write_byte(uint8_t reg, uint8_t data) {
    i2c_cmd_handle_t cmd = i2c_cmd_link_create();
    i2c_master_start(cmd);
    i2c_master_write_byte(cmd, (BME280_I2C_ADDRESS << 1) | I2C_MASTER_WRITE, true);
    i2c_master_write_byte(cmd, reg, true);
    i2c_master_write_byte(cmd, data, true);
    i2c_master_stop(cmd);
    esp_err_t ret = i2c_master_cmd_begin(I2C_NUM_0, cmd, 1000 / portTICK_PERIOD_MS);
    i2c_cmd_link_delete(cmd);
    return ret;
}

int bme280_init(i2c_port_t i2c_num) {
    uint8_t chip_id;
    i2c_fd = i2c_num; // Lưu lại cổng I2C

    if (bme280_read_byte(BME280_REGISTER_CHIPID, &chip_id) != ESP_OK) {
        return -1;
    }
    if (chip_id != 0x60) {
        return -1; 
    }

    uint8_t config = 0xB7; 
    uint8_t ctrl_meas = 0x27; 
    uint8_t ctrl_hum = 0x01; 

    if (bme280_write_byte(BME280_REGISTER_CONFIG, config) != ESP_OK ||
        bme280_write_byte(BME280_REGISTER_CONTROL, ctrl_meas) != ESP_OK ||
        bme280_write_byte(BME280_REGISTER_CONTROLHUMID, ctrl_hum) != ESP_OK) {
        return -1;
    }
    
    return 0;
}

int bme280_read_temperature(float *temperature) {
    uint8_t data[3];
    if (bme280_read_data(BME280_REGISTER_TEMPDATA, data, 3) != ESP_OK) {
        return -1;
    }
    
    int32_t adc_T = ((int32_t)data[0] << 12) | ((int32_t)data[1] << 4) | ((int32_t)data[2] >> 4);
    *temperature = (adc_T / 16.0) - 273.15;  

    return 0;
}

int bme280_read_humidity(float *humidity) {
    uint8_t data[2];
    if (bme280_read_data(BME280_REGISTER_HUMIDDATA, data, 2) != ESP_OK) {
        return -1;
    }

    int32_t adc_H = ((int32_t)data[0] << 8) | (int32_t)data[1];
    *humidity = adc_H / 256.0;  

    return 0;
}

int bme280_read_pressure(float *pressure) {
    uint8_t data[3];
    if (bme280_read_data(BME280_REGISTER_PRESSUREDATA, data, 3) != ESP_OK) {
        return -1;
    }
    
    int32_t adc_P = ((int32_t)data[0] << 12) | ((int32_t)data[1] << 4) | ((int32_t)data[2] >> 4);
    *pressure = adc_P / 256.0;  

    return 0;
}
