// Copyright 2020-2021 Beken
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <driver/hal/hal_gpio_types.h>
#include <soc/soc.h>
#include "sdkconfig.h"

#define GPIO_DEV_MAP  \
{\
	{GPIO_0, {GPIO_DEV_UART2_TXD, GPIO_DEV_I2C1_SCL, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_ADC12, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_1, {GPIO_DEV_UART2_RXD, GPIO_DEV_I2C1_SDA, GPIO_DEV_JTAG_TMS, GPIO_DEV_INVALID, GPIO_DEV_ADC13, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_2, {GPIO_DEV_SPI1_SCK, GPIO_DEV_SDIO_HOST_CLK, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_DEBUG0, GPIO_DEV_QSPI1_CLK, GPIO_DEV_INVALID}},\
	{GPIO_3, {GPIO_DEV_SPI1_CSN, GPIO_DEV_SDIO_HOST_CMD, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_DEBUG1, GPIO_DEV_QSPI1_CSN, GPIO_DEV_INVALID}},\
	{GPIO_4, {GPIO_DEV_SPI1_MOSI, GPIO_DEV_SDIO_HOST_DATA0, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_DEBUG2, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_5, {GPIO_DEV_SPI1_MISO, GPIO_DEV_SDIO_HOST_DATA1, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_DEBUG3, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_6, {GPIO_DEV_CLK13M, GPIO_DEV_PWM0, GPIO_DEV_I2S1_CLK, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_DEBUG4, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_7, {GPIO_DEV_WIFI_ACTIVE, GPIO_DEV_PWM1, GPIO_DEV_I2S1_SYNC, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_DEBUG5, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_8, {GPIO_DEV_BT_ACTIVE, GPIO_DEV_PWM2, GPIO_DEV_I2S1_DIN, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_DEBUG6, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_9, {GPIO_DEV_BT_PRIORITY, GPIO_DEV_PWM3, GPIO_DEV_I2S1_DOUT, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_DEBUG7, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_10,{GPIO_DEV_UART1_RXD, GPIO_DEV_SDIO_HOST_DATA2, GPIO_DEV_CLK_AUXS, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_11, {GPIO_DEV_UART1_TXD, GPIO_DEV_SDIO_HOST_DATA3, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_12, {GPIO_DEV_UART1_CTS, GPIO_DEV_USB0_DP, GPIO_DEV_INVALID, GPIO_DEV_TOUCH0, GPIO_DEV_ADC14, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_13, {GPIO_DEV_UART1_RTS, GPIO_DEV_USB0_DN, GPIO_DEV_INVALID, GPIO_DEV_TOUCH1, GPIO_DEV_ADC15, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_14, {GPIO_DEV_SDIO_HOST_CLK, GPIO_DEV_SPI0_SCK, GPIO_DEV_BT_ANT0, GPIO_DEV_INVALID, GPIO_DEV_LCD_RGB20, GPIO_DEV_DEBUG8, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_15, {GPIO_DEV_SDIO_HOST_CMD, GPIO_DEV_SPI0_CSN, GPIO_DEV_BT_ANT1, GPIO_DEV_INVALID, GPIO_DEV_LCD_RGB19, GPIO_DEV_DEBUG9, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_16, {GPIO_DEV_SDIO_HOST_DATA0, GPIO_DEV_SPI0_MOSI, GPIO_DEV_BT_ANT2, GPIO_DEV_INVALID, GPIO_DEV_LCD_RGB18, GPIO_DEV_DEBUG10, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_17, {GPIO_DEV_SDIO_HOST_DATA1, GPIO_DEV_SPI0_MISO, GPIO_DEV_BT_ANT3, GPIO_DEV_INVALID, GPIO_DEV_LCD_RGB17, GPIO_DEV_DEBUG11, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_18, {GPIO_DEV_SDIO_HOST_DATA2, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_LCD_RGB16, GPIO_DEV_DEBUG12, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_19, {GPIO_DEV_SDIO_HOST_DATA3, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_LCD_RGB15, GPIO_DEV_DEBUG13, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_20, {GPIO_DEV_I2C0_SCL, GPIO_DEV_JTAG_TCK, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_LCD_RGB14, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_21, {GPIO_DEV_I2C0_SDA, GPIO_DEV_JTAG_TMS, GPIO_DEV_ADC6,  GPIO_DEV_INVALID, GPIO_DEV_LCD_RGB13, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_22, {GPIO_DEV_CLK26M, GPIO_DEV_JTAG_TDI, GPIO_DEV_ADC5, GPIO_DEV_QSPI_CLK, GPIO_DEV_LCD_RGB12, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_23, {GPIO_DEV_INVALID, GPIO_DEV_JTAG_TDO, GPIO_DEV_ADC3, GPIO_DEV_QSPI_CSN, GPIO_DEV_LCD_RGB11, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_24, {GPIO_DEV_LPO_CLK, GPIO_DEV_PWM4, GPIO_DEV_ADC2,  GPIO_DEV_QSPI_IO0, GPIO_DEV_LCD_RGB10, GPIO_DEV_DEBUG14, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_25, {GPIO_DEV_IRDA, GPIO_DEV_PWM5, GPIO_DEV_ADC1, GPIO_DEV_QSPI_IO1, GPIO_DEV_LCD_RGB9, GPIO_DEV_DEBUG15, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_26, {GPIO_DEV_TXEN, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_QSPI_IO2, GPIO_DEV_LCD_RGB8, GPIO_DEV_DEBUG16, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_27, {GPIO_DEV_JPEG_MCLK, GPIO_DEV_CLK_AUXS, GPIO_DEV_INVALID, GPIO_DEV_QSPI_IO3, GPIO_DEV_INVALID, GPIO_DEV_DEBUG17, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_28, {GPIO_DEV_RXEN, GPIO_DEV_I2S1_MCLK,  GPIO_DEV_ADC4, GPIO_DEV_TOUCH2, GPIO_DEV_INVALID, GPIO_DEV_DEBUG18, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_29, {GPIO_DEV_JPEG_PCLK, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_TOUCH3, GPIO_DEV_INVALID, GPIO_DEV_DEBUG19, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_30, {GPIO_DEV_JPEG_HSYNC, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_TOUCH4, GPIO_DEV_INVALID, GPIO_DEV_DEBUG20, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_31, {GPIO_DEV_JPEG_VSYNC, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_TOUCH5, GPIO_DEV_INVALID, GPIO_DEV_DEBUG21, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_32, {GPIO_DEV_JPEG_PXDATA0, GPIO_DEV_PWM6, GPIO_DEV_INVALID, GPIO_DEV_TOUCH6, GPIO_DEV_INVALID, GPIO_DEV_DEBUG22, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_33, {GPIO_DEV_JPEG_PXDATA1, GPIO_DEV_PWM7, GPIO_DEV_INVALID, GPIO_DEV_TOUCH7, GPIO_DEV_INVALID, GPIO_DEV_DEBUG23, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_34, {GPIO_DEV_JPEG_PXDATA2, GPIO_DEV_PWM8, GPIO_DEV_INVALID, GPIO_DEV_TOUCH8, GPIO_DEV_INVALID, GPIO_DEV_DEBUG24, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_35, {GPIO_DEV_JPEG_PXDATA3, GPIO_DEV_PWM9, GPIO_DEV_INVALID, GPIO_DEV_TOUCH9, GPIO_DEV_INVALID, GPIO_DEV_DEBUG25, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_36, {GPIO_DEV_JPEG_PXDATA4, GPIO_DEV_PWM10, GPIO_DEV_INVALID, GPIO_DEV_TOUCH10, GPIO_DEV_INVALID, GPIO_DEV_DEBUG26, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_37, {GPIO_DEV_JPEG_PXDATA5, GPIO_DEV_PWM11, GPIO_DEV_INVALID, GPIO_DEV_TOUCH11, GPIO_DEV_INVALID, GPIO_DEV_DEBUG27, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_38, {GPIO_DEV_JPEG_PXDATA6, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_TOUCH12, GPIO_DEV_INVALID, GPIO_DEV_DEBUG28, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_39, {GPIO_DEV_JPEG_PXDATA7, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_TOUCH13, GPIO_DEV_INVALID, GPIO_DEV_DEBUG29, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_40, {GPIO_DEV_UART3_RXD, GPIO_DEV_I2S2_CLK, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_LCD_RGB7, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_41, {GPIO_DEV_UART3_TXD, GPIO_DEV_I2S2_SYNC, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_LCD_RGB6, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_42, {GPIO_DEV_I2C1_SCL, GPIO_DEV_I2S2_DIN, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_LCD_RGB5, GPIO_DEV_DEBUG30, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_43, {GPIO_DEV_I2C1_SDA, GPIO_DEV_I2S2_DOUT, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_LCD_RGB4, GPIO_DEV_DEBUG31, GPIO_DEV_INVALID, GPIO_DEV_INVALID}},\
	{GPIO_44, {GPIO_DEV_CAN_TX, GPIO_DEV_SPI0_SCK, GPIO_DEV_ADC10, GPIO_DEV_INVALID, GPIO_DEV_LCD_RGB3, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_I2S3_CLK}},\
	{GPIO_45, {GPIO_DEV_CAN_RX, GPIO_DEV_SPI0_CSN, GPIO_DEV_ADC11, GPIO_DEV_INVALID, GPIO_DEV_LCD_RGB2, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_I2S3_SYNC}},\
	{GPIO_46, {GPIO_DEV_CAN_STANDBY, GPIO_DEV_SPI0_MOSI, GPIO_DEV_INVALID, GPIO_DEV_TOUCH14, GPIO_DEV_LCD_RGB1, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_I2S3_DIN}},\
	{GPIO_47, {GPIO_DEV_INVALID, GPIO_DEV_SPI0_MISO, GPIO_DEV_INVALID, GPIO_DEV_TOUCH15, GPIO_DEV_LCD_RGB0, GPIO_DEV_INVALID, GPIO_DEV_INVALID, GPIO_DEV_I2S3_DOUT}},\
}

/* uart gpio pin map */
#define UART0_TX_PIN  GPIO_11
#define UART0_RX_PIN  GPIO_10
#define UART0_CTS_PIN GPIO_12
#define UART0_RTS_PIN GPIO_13

#define UART1_TX_PIN  GPIO_0
#define UART1_RX_PIN  GPIO_1

#define UART2_TX_PIN  GPIO_41
#define UART2_RX_PIN  GPIO_40

/* sdio host */
#if CONFIG_SDCARD_BUSWIDTH_4LINE
#define SDIO_HOST_GPIO_PIN_NUMBER    6
#else
#define SDIO_HOST_GPIO_PIN_NUMBER    3
#endif
#define SDIO_HOST_GPIO_CLK_INDEX     0
#define SDIO_HOST_GPIO_CMD_INDEX     1
#define SDIO_HOST_GPIO_DATA0_INDEX   2
#define SDIO_HOST_GPIO_DATA1_INDEX   3
#if (CONFIG_PIN_SDIO_GROUP_0)
#define SDIO_HOST_GPIO_MAP \
{\
	{GPIO_14, GPIO_DEV_SDIO_HOST_CLK},\
	{GPIO_15, GPIO_DEV_SDIO_HOST_CMD},\
	{GPIO_16, GPIO_DEV_SDIO_HOST_DATA0},\
	{GPIO_17, GPIO_DEV_SDIO_HOST_DATA1},\
	{GPIO_18, GPIO_DEV_SDIO_HOST_DATA2},\
	{GPIO_19, GPIO_DEV_SDIO_HOST_DATA3},\
}
#else
#define SDIO_HOST_GPIO_MAP \
{\
	{GPIO_2, GPIO_DEV_SDIO_HOST_CLK},\
	{GPIO_3, GPIO_DEV_SDIO_HOST_CMD},\
	{GPIO_4, GPIO_DEV_SDIO_HOST_DATA0},\
	{GPIO_5, GPIO_DEV_SDIO_HOST_DATA1},\
	{GPIO_10, GPIO_DEV_SDIO_HOST_DATA2},\
	{GPIO_11, GPIO_DEV_SDIO_HOST_DATA3},\
}
#endif

#define GPIO_LCD_8080_USED_GPIO_NUM 13
#define GPIO_LCD_8080_GPIO_MAP \
{\
	{GPIO_47, GPIO_DEV_LCD_RGB0},\
	{GPIO_46, GPIO_DEV_LCD_RGB1},\
	{GPIO_45, GPIO_DEV_LCD_RGB2},\
	{GPIO_44, GPIO_DEV_LCD_RGB3},\
	{GPIO_43, GPIO_DEV_LCD_RGB4},\
	{GPIO_42, GPIO_DEV_LCD_RGB5},\
	{GPIO_41, GPIO_DEV_LCD_RGB6},\
	{GPIO_40, GPIO_DEV_LCD_RGB7},\
	{GPIO_19, GPIO_DEV_LCD_RGB15},\
	{GPIO_20, GPIO_DEV_LCD_RGB14},\
	{GPIO_21, GPIO_DEV_LCD_RGB13},\
	{GPIO_22, GPIO_DEV_LCD_RGB12},\
	{GPIO_23, GPIO_DEV_LCD_RGB11},\
}

#define GPIO_LCD_RGB_GPIO_NUM 21
#define GPIO_LCD_RGB_GPIO_MAP \
	{\
	{GPIO_47, GPIO_DEV_LCD_RGB0},\
	{GPIO_46, GPIO_DEV_LCD_RGB1},\
	{GPIO_45, GPIO_DEV_LCD_RGB2},\
	{GPIO_44, GPIO_DEV_LCD_RGB3},\
	{GPIO_43, GPIO_DEV_LCD_RGB4},\
	{GPIO_42, GPIO_DEV_LCD_RGB5},\
	{GPIO_41, GPIO_DEV_LCD_RGB6},\
	{GPIO_40, GPIO_DEV_LCD_RGB7},\
	{GPIO_26, GPIO_DEV_LCD_RGB8},\
	{GPIO_25, GPIO_DEV_LCD_RGB9},\
	{GPIO_24, GPIO_DEV_LCD_RGB10},\
	{GPIO_23, GPIO_DEV_LCD_RGB11},\
	{GPIO_22, GPIO_DEV_LCD_RGB12},\
	{GPIO_21, GPIO_DEV_LCD_RGB13},\
	{GPIO_20, GPIO_DEV_LCD_RGB14},\
	{GPIO_19, GPIO_DEV_LCD_RGB15},\
	{GPIO_18, GPIO_DEV_LCD_RGB16},\
	{GPIO_17, GPIO_DEV_LCD_RGB17},\
	{GPIO_16, GPIO_DEV_LCD_RGB18},\
	{GPIO_15, GPIO_DEV_LCD_RGB19},\
	{GPIO_14, GPIO_DEV_LCD_RGB20},\
}

#define GPIO_MAP_TABLE(DEV_NUM, MODE_NUM, table) \
struct {\
	uint64_t gpio_bits;\
	gpio_dev_t devs[DEV_NUM];\
} table[MODE_NUM]

#define GPIO_I2C1_MAP_TABLE \
{\
	{BIT(0)|BIT(1), {GPIO_DEV_I2C1_SCL, GPIO_DEV_I2C1_SDA}},\
	{BIT64(42)|BIT64(43), {GPIO_DEV_I2C1_SCL, GPIO_DEV_I2C1_SDA}},\
}
#define GPIO_I2C1_USED_GPIO_NUM 2

#define GPIO_I2S_MAP_TABLE \
{\
	{BIT(6)|BIT(7)|BIT(8)|BIT(9), {GPIO_DEV_I2S1_CLK, GPIO_DEV_I2S1_SYNC, GPIO_DEV_I2S1_DIN, GPIO_DEV_I2S1_DOUT}},\
	{BIT64(40)|BIT64(41)|BIT64(42)|BIT64(43), {GPIO_DEV_I2S1_CLK, GPIO_DEV_I2S1_SYNC, GPIO_DEV_I2S1_DIN, GPIO_DEV_I2S1_DOUT}},\
}
#define GPIO_I2S_USED_GPIO_NUM 4

#define GPIO_SPI0_MAP_TABLE \
{\
	{BIT(14)|BIT(15)|BIT64(16)|BIT64(17), {GPIO_DEV_SPI0_SCK, GPIO_DEV_SPI0_CSN, GPIO_DEV_SPI0_MOSI, GPIO_DEV_SPI0_MISO}},\
	{BIT64(44)|BIT64(45)|BIT64(46)|BIT64(47), {GPIO_DEV_SPI0_CSN, GPIO_DEV_SPI0_SCK, GPIO_DEV_SPI0_MOSI, GPIO_DEV_SPI0_MISO}},\
}
#define GPIO_SPI0_USED_GPIO_NUM 4

#define GPIO_SDIO_ONE_LINE_MAP_TABLE \
{\
	{BIT(2)|BIT(3)|BIT(4), {GPIO_DEV_SDIO_HOST_CLK, GPIO_DEV_SDIO_HOST_CMD, GPIO_DEV_SDIO_HOST_DATA0}},\
	{BIT(14)|BIT(15)|BIT(16), {GPIO_DEV_SDIO_HOST_CLK, GPIO_DEV_SDIO_HOST_CMD, GPIO_DEV_SDIO_HOST_DATA0}},\
}
#define GPIO_SDIO_ONE_LINE_USED_GPIO_NUM 3

#define GPIO_SDIO_MAP_TABLE \
{\
	{BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(10)|BIT(11), {GPIO_DEV_SDIO_HOST_CLK, GPIO_DEV_SDIO_HOST_CMD, GPIO_DEV_SDIO_HOST_DATA0,GPIO_DEV_SDIO_HOST_DATA1,GPIO_DEV_SDIO_HOST_DATA2,GPIO_DEV_SDIO_HOST_DATA3}},\
	{BIT(14)|BIT(15)|BIT(16)|BIT(17)|BIT(18)|BIT(19), {GPIO_DEV_SDIO_HOST_CLK, GPIO_DEV_SDIO_HOST_CMD, GPIO_DEV_SDIO_HOST_DATA0,GPIO_DEV_SDIO_HOST_DATA1,GPIO_DEV_SDIO_HOST_DATA2,GPIO_DEV_SDIO_HOST_DATA3}},\
}
#define GPIO_SDIO_USED_GPIO_NUM 6

#define GPIO_CTRL_LDO_OUTPUT_HIGH_MAP  \
{\
	/* GPIO_2, */\
	/* GPIO_28, */\
}

#define GPIO_CTRL_LDO_OUTPUT_LOW_MAP  \
{\
	/* GPIO_4, */\
	/* GPIO_26, */\
}
/*---multi modules use one gpio to control different ldo---*/
#define GPIO_CTRL_LDO_MAP  \
{\
	{GPIO_8,  GPIO_OUTPUT_STATE_LOW} \
}
/*
 * Camera DVP GPIO MAP
 */
#define CAMERA_DVP_MCLK_PIN             (GPIO_27)
#define CAMERA_DVP_PCLK_PIN             (GPIO_29)
#define CAMERA_DVP_HSYNC_PIN            (GPIO_30)
#define CAMERA_DVP_VSYNC_PIN            (GPIO_31)
#define CAMERA_DVP_PXDATA0_PIN          (GPIO_32)
#define CAMERA_DVP_PXDATA1_PIN          (GPIO_33)
#define CAMERA_DVP_PXDATA2_PIN          (GPIO_34)
#define CAMERA_DVP_PXDATA3_PIN          (GPIO_35)
#define CAMERA_DVP_PXDATA4_PIN          (GPIO_36)
#define CAMERA_DVP_PXDATA5_PIN          (GPIO_37)
#define CAMERA_DVP_PXDATA6_PIN          (GPIO_38)
#define CAMERA_DVP_PXDATA7_PIN          (GPIO_39)

#define CAMERA_DVP_MCLK_FUNC            (GPIO_DEV_JPEG_MCLK)
#define CAMERA_DVP_AUXS_FUNC            (GPIO_DEV_CLK_AUXS)
#define CAMERA_DVP_PCLK_FUNC            (GPIO_DEV_JPEG_PCLK)
#define CAMERA_DVP_HSYNC_FUNC           (GPIO_DEV_JPEG_HSYNC)
#define CAMERA_DVP_VSYNC_FUNC           (GPIO_DEV_JPEG_VSYNC)
#define CAMERA_DVP_PXDATA0_FUNC         (GPIO_DEV_JPEG_PXDATA0)
#define CAMERA_DVP_PXDATA1_FUNC         (GPIO_DEV_JPEG_PXDATA1)
#define CAMERA_DVP_PXDATA2_FUNC         (GPIO_DEV_JPEG_PXDATA2)
#define CAMERA_DVP_PXDATA3_FUNC         (GPIO_DEV_JPEG_PXDATA3)
#define CAMERA_DVP_PXDATA4_FUNC         (GPIO_DEV_JPEG_PXDATA4)
#define CAMERA_DVP_PXDATA5_FUNC         (GPIO_DEV_JPEG_PXDATA5)
#define CAMERA_DVP_PXDATA6_FUNC         (GPIO_DEV_JPEG_PXDATA6)
#define CAMERA_DVP_PXDATA7_FUNC         (GPIO_DEV_JPEG_PXDATA7)

#define CAMERA_DVP_I2C_ID               (CONFIG_DVP_CAMERA_I2C_ID)
#define CAMERA_DVP_I2C_BAUD_RATE        (I2C_BAUD_RATE_100KHZ)
#define CAMERA_DVP_I2C_MODE             (I2C_ADDR_MODE_7BIT)

/*
 * LCD RGB GPIO MAP
 */
#define LCD_RGB_R0_PIN 				(GPIO_23)
#define LCD_RGB_R1_PIN 				(GPIO_22)
#define LCD_RGB_R2_PIN 				(GPIO_21)
#define LCD_RGB_R3_PIN 				(GPIO_20)
#define LCD_RGB_R4_PIN 				(GPIO_19)
#define LCD_RGB_G0_PIN 				(GPIO_42)
#define LCD_RGB_G1_PIN 				(GPIO_41)
#define LCD_RGB_G2_PIN 				(GPIO_40)
#define LCD_RGB_G3_PIN 				(GPIO_26)
#define LCD_RGB_G4_PIN 				(GPIO_25)
#define LCD_RGB_G5_PIN 				(GPIO_24)
#define LCD_RGB_B0_PIN 				(GPIO_47)
#define LCD_RGB_B1_PIN 				(GPIO_46)
#define LCD_RGB_B2_PIN 				(GPIO_45)
#define LCD_RGB_B3_PIN 				(GPIO_44)
#define LCD_RGB_B4_PIN 				(GPIO_43)
#define LCD_RGB_CLK_PIN 			(GPIO_14)
#define LCD_RGB_DISP_PIN 			(GPIO_15)
#define LCD_RGB_HSYNC_PIN 			(GPIO_17)
#define LCD_RGB_VSYNC_PIN 			(GPIO_18)
#define LCD_RGB_DE_PIN 				(GPIO_16)

#define LCD_RGB_R0_FUNC 			(GPIO_DEV_LCD_RGB11)
#define LCD_RGB_R1_FUNC 			(GPIO_DEV_LCD_RGB12)
#define LCD_RGB_R2_FUNC 			(GPIO_DEV_LCD_RGB13)
#define LCD_RGB_R3_FUNC 			(GPIO_DEV_LCD_RGB14)
#define LCD_RGB_R4_FUNC 			(GPIO_DEV_LCD_RGB15)
#define LCD_RGB_G0_FUNC 			(GPIO_DEV_LCD_RGB5)
#define LCD_RGB_G1_FUNC 			(GPIO_DEV_LCD_RGB6)
#define LCD_RGB_G2_FUNC 			(GPIO_DEV_LCD_RGB7)
#define LCD_RGB_G3_FUNC 			(GPIO_DEV_LCD_RGB8)
#define LCD_RGB_G4_FUNC 			(GPIO_DEV_LCD_RGB9)
#define LCD_RGB_G5_FUNC 			(GPIO_DEV_LCD_RGB10)
#define LCD_RGB_B0_FUNC 			(GPIO_DEV_LCD_RGB0)
#define LCD_RGB_B1_FUNC 			(GPIO_DEV_LCD_RGB1)
#define LCD_RGB_B2_FUNC 			(GPIO_DEV_LCD_RGB2)
#define LCD_RGB_B3_FUNC 			(GPIO_DEV_LCD_RGB3)
#define LCD_RGB_B4_FUNC 			(GPIO_DEV_LCD_RGB4)
#define LCD_RGB_CLK_FUNC 			(GPIO_DEV_LCD_RGB20)
#define LCD_RGB_DISP_FUNC 			(GPIO_DEV_LCD_RGB19)
#define LCD_RGB_HSYNC_FUNC 			(GPIO_DEV_LCD_RGB17)
#define LCD_RGB_VSYNC_FUNC 			(GPIO_DEV_LCD_RGB16)
#define LCD_RGB_DE_FUNC 			(GPIO_DEV_LCD_RGB18)

#define LCD_QSPI_PWM_BACKLIGHT		(PWM_ID_2)
#define LCD_RGB_PWM_BACKLIGHT		(PWM_ID_1)

/*
 * LCD MCU GPIO MAP
 */
#define LCD_MCU_D0_PIN 				(GPIO_47)
#define LCD_MCU_D1_PIN 				(GPIO_46)
#define LCD_MCU_D2_PIN 				(GPIO_45)
#define LCD_MCU_D3_PIN 				(GPIO_44)
#define LCD_MCU_D4_PIN 				(GPIO_43)
#define LCD_MCU_D5_PIN 				(GPIO_42)
#define LCD_MCU_D6_PIN 				(GPIO_41)
#define LCD_MCU_D7_PIN 				(GPIO_40)
#define LCD_MCU_RDX_PIN 		 	(GPIO_23)
#define LCD_MCU_WRX_PIN 		 	(GPIO_22)
#define LCD_MCU_RSX_PIN 		 	(GPIO_21)
#define LCD_MCU_RESET_PIN 		 	(GPIO_20)
#define LCD_MCU_CSX_PIN 		 	(GPIO_19)

#define LCD_MCU_D0_FUNC 			(GPIO_DEV_LCD_RGB0)
#define LCD_MCU_D1_FUNC 			(GPIO_DEV_LCD_RGB1)
#define LCD_MCU_D2_FUNC 			(GPIO_DEV_LCD_RGB2)
#define LCD_MCU_D3_FUNC 			(GPIO_DEV_LCD_RGB3)
#define LCD_MCU_D4_FUNC 			(GPIO_DEV_LCD_RGB4)
#define LCD_MCU_D5_FUNC 			(GPIO_DEV_LCD_RGB5)
#define LCD_MCU_D6_FUNC 			(GPIO_DEV_LCD_RGB6)
#define LCD_MCU_D7_FUNC 			(GPIO_DEV_LCD_RGB7)
#define LCD_MCU_RDX_FUNC 		 	(GPIO_DEV_LCD_RGB11)
#define LCD_MCU_WRX_FUNC 		 	(GPIO_DEV_LCD_RGB12)
#define LCD_MCU_RSX_FUNC 		 	(GPIO_DEV_LCD_RGB13)
#define LCD_MCU_RESET_FUNC 		 	(GPIO_DEV_LCD_RGB14)
#define LCD_MCU_CSX_FUNC 		 	(GPIO_DEV_LCD_RGB15)

/*
* AUDIO PA GPIO MAP
*/
#define AUD_DAC_PA_CTRL_GPIO		(GPIO_39)
#define AUD_DAC_PA_ENABLE_LEVEL		(1)

/*
* VIDEO PA GPIO MAP
*/
// LCD AND SD POWER CTRL
#define LCD_LDO_CTRL_GPIO                  (GPIO_8)
#define LCD_LDO_CTRL_ACTIVE_LEVEL          (1)

// LCD BACKLIGHT CTRL
#define LCD_BACKLIGHT_CTRL_GPIO            (GPIO_34)
#define LCD_BACKLIGHT_CTRL_ACTIVE_LEVEL    (1)

#ifdef __cplusplus
}
#endif
