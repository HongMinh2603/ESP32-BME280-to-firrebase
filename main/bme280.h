#ifndef BME280_H
#define BME280_H

#include <stdint.h>
#include "driver/i2c.h"

// Địa chỉ I2C của BME280
#define BME280_I2C_ADDRESS 0x76

// Các thông số của BME280
#define BME280_REGISTER_CHIPID      0xD0
#define BME280_REGISTER_CONTROLHUMID 0xF2
#define BME280_REGISTER_CONTROL      0xF4
#define BME280_REGISTER_CONFIG       0xF5
#define BME280_REGISTER_PRESSUREDATA 0xF7
#define BME280_REGISTER_TEMPDATA     0xFA
#define BME280_REGISTER_HUMIDDATA     0xFD

// Các hàm cho driver BME280
int bme280_init(i2c_port_t i2c_num);
int bme280_read_temperature(float *temperature);
int bme280_read_humidity(float *humidity);
int bme280_read_pressure(float *pressure);

#endif // BME280_H
