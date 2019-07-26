#ifndef RT_CONFIG_H__
#define RT_CONFIG_H__

/* Automatically generated file; DO NOT EDIT. */
/* RootMenu */

/* Hardware Drivers Config */

#define SOC_STM32L452RETx

/* Onboard Peripheral Drivers */

#define BSP_USING_STLINK_TO_USART
#define BSP_USING_SDCARD

/* On-chip Peripheral Drivers */

#define BSP_USING_GPIO
#define BSP_USING_UART
#define BSP_USING_UART2
#define BSP_USING_ON_CHIP_FLASH
#define BSP_USING_SPI
#define BSP_USING_SPI1
#define BSP_USING_I2C1
#define BSP_I2C1_SCL_PIN 15
#define BSP_I2C1_SDA_PIN 16
#define BSP_USING_I2C2
#define BSP_I2C2_SCL_PIN (GET_PIN(B, 10))
#define BSP_I2C2_SDA_PIN (GET_PIN(B, 11))
#define BSP_USING_I2C4
#define BSP_I2C4_SCL_PIN 8
#define BSP_I2C4_SDA_PIN 9
#define BSP_USING_TIM
#define BSP_USING_ADC
#define BSP_USING_ADC1
#define BSP_USING_ONCHIP_RTC
#define BSP_USING_WDT

/* Board extended module Drivers */


#endif
