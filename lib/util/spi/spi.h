#pragma once
#include <stdio.h>
#include <string.h>
#include <driver/gpio.h>
#include <driver/spi_master.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <driver/spi_common.h>

#include <Arduino.h>
#include <SPI.h>

void init_spi3();
void init_spi2();
void init_spi_device(spi_host_device_t host_id, const spi_device_interface_config_t *dev_config, spi_device_handle_t *handle);
void spi_read(spi_device_handle_t device_handle, uint8_t address, uint8_t read_length, uint8_t* buffer);
void spi_write(spi_device_handle_t device_handle, uint8_t address, uint8_t value);