/**
   MappyDot Firmware - mappydot_reg.h

   Copyright (C) 2017 SensorDots.org

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.

   More information about each register here - https://sensordots.org/mappydotreg

*/


#ifndef MAPPYDOT_REG_H_
#define MAPPYDOT_REG_H_

/* Basics */
#define READ_DISTANCE                               (0x72)
#define PERFORM_SINGLE_RANGE                        (0x53)
#define READ_ACCURACY                               (0x52)
#define READ_ERROR_CODE                             (0x45)
#define RANGING_MEASUREMENT_MODE                    (0x6d)
#define SET_CONTINUOUS_RANGING_MODE                 (0x63)
#define SET_SINGLE_RANGING_MODE                     (0x73)

/* Configuration */
#define FILTERING_ENABLE                            (0x46)
#define FILTERING_DISABLE                           (0x66)
#define AVERAGING_ENABLE                            (0x56)
#define AVERAGING_DISABLE                           (0x76)
#define AVERAGING_SAMPLES                           (0x69)
#define SET_LED_MODE                                (0x6c)
#define SET_LED_THRESHOLD_DISTANCE_IN_MM            (0x65)
#define SET_GPIO_MODE                               (0x67)
#define SET_GPIO_THRESHOLD_DISTANCE_IN_MM           (0x6f)
#define CALIBRATE_DISTANCE_OFFSET                   (0x61)
#define CALIBRATE_CROSSTALK                         (0x78)
#define CALIBRATE_SPAD                              (0x75)
#define TEMPERATURE_CALIBRATION                     (0x55)
#define INTERSENSOR_CROSSTALK_REDUCTION_ENABLE      (0x54)
#define INTERSENSOR_CROSSTALK_REDUCTION_DISABLE     (0x74)
#define INTERSENSOR_CROSSTALK_TIMEOUT               (0x71)
#define INTERSENSOR_CROSSTALK_MEASUREMENT_DELAY     (0x51)

/* Settings */
#define FIRMWARE_VERSION                            (0x4e)
#define NAME_DEVICE                                 (0x6e)
#define DEVICE_NAME                                 (0x64)
#define READ_CURRENT_SETTINGS                       (0x62)
#define RESTORE_FACTORY_DEFAULTS                    (0x7a)
#define WRITE_CURRENT_SETTINGS_AS_START_UP_DEFAULT  (0x77)

/* Advanced */
#define RESET_VL53L0X_RANGING                       (0x58)
#define VL53L0X_NOT_SHUTDOWN                        (0x48)
#define VL53L0X_SHUTDOWN                            (0x68)
#define READ_NONFILTERED_VALUE                      (0x6a)
#define VL53L0X_PASSTHROUGH                         (0x70)

/* Super Advanced */
#define ENTER_FACTORY_MODE                          (0x23) //"#"//"!#!#!#"

/* Ranging Modes */
#define HIGHLY_ACCURATE                             (0x68)
#define LONG_RANGE                                  (0x6c)
#define HIGH_SPEED                                  (0x73)
#define VL53L0X_DEFAULT                             (0x64)
#define MAPPYDOT_MODE                               (0x6d)

/* LED Modes */
#define LED_ON                                      (0x6f)
#define LED_OFF                                     (0x66)
#define LED_THRESHOLD_ENABLED                       (0x74)
#define LED_PWM_ENABLED                             (0x70)
#define LED_MEASUREMENT_OUTPUT                      (0x6d)

/* GPIO Modes */
#define GPIO_HIGH                                   (0x6f)
#define GPIO_LOW                                    (0x66)
#define GPIO_THRESHOLD_ENABLED                      (0x74)
#define GPIO_PWM_ENABLED                            (0x70)
#define GPIO_MEASUREMENT_INTERRUPT                  (0x6d)

/* I2C Bootloader */
#define REBOOT_TO_BOOTLOADER                        (0x01)

uint8_t check_command_size(uint8_t command);

uint8_t is_read_command(uint8_t command);

uint16_t bytes_to_mm(uint8_t *bytes);

void mm_to_bytes(uint8_t *bytes, uint16_t mm);

#endif /* MAPPYDOT_REG_H_ */