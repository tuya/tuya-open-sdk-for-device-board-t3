// Copyright 2022-2023 Beken
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

// This is a generated file, if you need to modify it, use the script to
// generate and modify all the struct.h, ll.h, reg.h, debug_dump.c files!

#pragma once


#ifdef __cplusplus
extern "C" {
#endif


#define PRRO_DEVICE_ID_ADDR (SOC_PRRO_REG_BASE + (0x0 << 2))

#define PRRO_DEVICE_ID_DEVICEID_POS (0)
#define PRRO_DEVICE_ID_DEVICEID_MASK (0xffffffff)

#define PRRO_VERSION_ID_ADDR (SOC_PRRO_REG_BASE + (0x1 << 2))

#define PRRO_VERSION_ID_VERSIONID_POS (0)
#define PRRO_VERSION_ID_VERSIONID_MASK (0xffffffff)

#define PRRO_GBL_CONTROL_ADDR (SOC_PRRO_REG_BASE + (0x2 << 2))

#define PRRO_GBL_CONTROL_SOFT_RESET_POS (0)
#define PRRO_GBL_CONTROL_SOFT_RESET_MASK (0x1)

#define PRRO_GBL_CONTROL_CLKG_BPS_POS (1)
#define PRRO_GBL_CONTROL_CLKG_BPS_MASK (0x1)

#define PRRO_GBL_CONTROL_RESERVED_BIT_2_31_POS (2)
#define PRRO_GBL_CONTROL_RESERVED_BIT_2_31_MASK (0x3fffffff)

#define PRRO_GBL_STATUS_ADDR (SOC_PRRO_REG_BASE + (0x3 << 2))

#define PRRO_GBL_STATUS_DEVSTATUS_POS (0)
#define PRRO_GBL_STATUS_DEVSTATUS_MASK (0xffffffff)

#define PRRO_AONP_GPIO_NSEC0_ADDR (SOC_PRRO_REG_BASE + (0x4 << 2))

#define PRRO_AONP_GPIO_NSEC0_AON_GPIO_NSEC0_POS (0)
#define PRRO_AONP_GPIO_NSEC0_AON_GPIO_NSEC0_MASK (0xffffffff)

#define PRRO_AONP_GPIO_NSEC1_ADDR (SOC_PRRO_REG_BASE + (0x5 << 2))

#define PRRO_AONP_GPIO_NSEC1_AON_GPIO_NSEC1_POS (0)
#define PRRO_AONP_GPIO_NSEC1_AON_GPIO_NSEC1_MASK (0xffffffff)

#define PRRO_AONP_SAP_ADDR (SOC_PRRO_REG_BASE + (0x6 << 2))

#define PRRO_AONP_SAP_AON_REG_NSEC_POS (0)
#define PRRO_AONP_SAP_AON_REG_NSEC_MASK (0x1)

#define PRRO_AONP_SAP_AON_RTC_NSEC_POS (1)
#define PRRO_AONP_SAP_AON_RTC_NSEC_MASK (0x1)

#define PRRO_AONP_SAP_AON_GPIOHIG_NSEC_POS (2)
#define PRRO_AONP_SAP_AON_GPIOHIG_NSEC_MASK (0x1)

#define PRRO_AONP_SAP_AON_WDT_NSEC_POS (3)
#define PRRO_AONP_SAP_AON_WDT_NSEC_MASK (0x1)

#define PRRO_AONP_SAP_AON_AHB_AON_NSEC_POS (4)
#define PRRO_AONP_SAP_AON_AHB_AON_NSEC_MASK (0x1)

#define PRRO_AONP_SAP_AON_AHB_SYS_NSEC_POS (5)
#define PRRO_AONP_SAP_AON_AHB_SYS_NSEC_MASK (0x1)

#define PRRO_AONP_SAP_AON_AHB_FLSH_NSEC_POS (6)
#define PRRO_AONP_SAP_AON_AHB_FLSH_NSEC_MASK (0x1)

#define PRRO_AONP_SAP_AON_AHB_APB_NSEC_POS (7)
#define PRRO_AONP_SAP_AON_AHB_APB_NSEC_MASK (0x1)

#define PRRO_AONP_SAP_AON_AHB_AON_AP_POS (8)
#define PRRO_AONP_SAP_AON_AHB_AON_AP_MASK (0x1)

#define PRRO_AONP_SAP_AON_AHB_SYS_AP_POS (9)
#define PRRO_AONP_SAP_AON_AHB_SYS_AP_MASK (0x1)

#define PRRO_AONP_SAP_AON_AHB_FLSH_AP_POS (10)
#define PRRO_AONP_SAP_AON_AHB_FLSH_AP_MASK (0x1)

#define PRRO_AONP_SAP_AON_AHB_APB_AP_POS (11)
#define PRRO_AONP_SAP_AON_AHB_APB_AP_MASK (0x1)

#define PRRO_AONP_SAP_AON_AHB_SRESP_POS (12)
#define PRRO_AONP_SAP_AON_AHB_SRESP_MASK (0x1)

#define PRRO_AONP_SAP_AON_APB_WDT_NSEC_POS (13)
#define PRRO_AONP_SAP_AON_APB_WDT_NSEC_MASK (0x1)

#define PRRO_AONP_SAP_AON_APB_TIMR0_NSEC_POS (14)
#define PRRO_AONP_SAP_AON_APB_TIMR0_NSEC_MASK (0x1)

#define PRRO_AONP_SAP_AON_APB_UART0_NSEC_POS (15)
#define PRRO_AONP_SAP_AON_APB_UART0_NSEC_MASK (0x1)

#define PRRO_AONP_SAP_AON_APB_SPI0_NSEC_POS (16)
#define PRRO_AONP_SAP_AON_APB_SPI0_NSEC_MASK (0x1)

#define PRRO_AONP_SAP_AON_APB_EFS_NSEC_POS (17)
#define PRRO_AONP_SAP_AON_APB_EFS_NSEC_MASK (0x1)

#define PRRO_AONP_SAP_AON_APB_MCHECK_NSEC_POS (18)
#define PRRO_AONP_SAP_AON_APB_MCHECK_NSEC_MASK (0x1)

#define PRRO_AONP_SAP_AON_APB_CKMN_NSEC_POS (19)
#define PRRO_AONP_SAP_AON_APB_CKMN_NSEC_MASK (0x1)

#define PRRO_AONP_SAP_AON_APB_WDT_AP_POS (20)
#define PRRO_AONP_SAP_AON_APB_WDT_AP_MASK (0x1)

#define PRRO_AONP_SAP_AON_APB_TIMR0_AP_POS (21)
#define PRRO_AONP_SAP_AON_APB_TIMR0_AP_MASK (0x1)

#define PRRO_AONP_SAP_AON_APB_UART0_AP_POS (22)
#define PRRO_AONP_SAP_AON_APB_UART0_AP_MASK (0x1)

#define PRRO_AONP_SAP_AON_APB_SPI0_AP_POS (23)
#define PRRO_AONP_SAP_AON_APB_SPI0_AP_MASK (0x1)

#define PRRO_AONP_SAP_AON_APB_EFS_AP_POS (24)
#define PRRO_AONP_SAP_AON_APB_EFS_AP_MASK (0x1)

#define PRRO_AONP_SAP_AON_APB_MCHECK_AP_POS (25)
#define PRRO_AONP_SAP_AON_APB_MCHECK_AP_MASK (0x1)

#define PRRO_AONP_SAP_AON_APB_CKMN_AP_POS (26)
#define PRRO_AONP_SAP_AON_APB_CKMN_AP_MASK (0x1)

#define PRRO_AONP_SAP_AON_APB_SRESP_POS (27)
#define PRRO_AONP_SAP_AON_APB_SRESP_MASK (0x1)

#define PRRO_AONP_SAP_RESERVED_BIT_28_31_POS (28)
#define PRRO_AONP_SAP_RESERVED_BIT_28_31_MASK (0xf)

#define PRRO_BAKP_AHB_SAP_ADDR (SOC_PRRO_REG_BASE + (0x7 << 2))

#define PRRO_BAKP_AHB_SAP_BAK_AHB_DMA0_NSEC_POS (0)
#define PRRO_BAKP_AHB_SAP_BAK_AHB_DMA0_NSEC_MASK (0x1)

#define PRRO_BAKP_AHB_SAP_BAK_AHB_DMA1_NSEC_POS (1)
#define PRRO_BAKP_AHB_SAP_BAK_AHB_DMA1_NSEC_MASK (0x1)

#define PRRO_BAKP_AHB_SAP_BAK_AHB_LA_NSEC_POS (2)
#define PRRO_BAKP_AHB_SAP_BAK_AHB_LA_NSEC_MASK (0x1)

#define PRRO_BAKP_AHB_SAP_BAK_AHB_APB_NSEC_POS (3)
#define PRRO_BAKP_AHB_SAP_BAK_AHB_APB_NSEC_MASK (0x1)

#define PRRO_BAKP_AHB_SAP_BAK_AHB_DMA0_AP_POS (4)
#define PRRO_BAKP_AHB_SAP_BAK_AHB_DMA0_AP_MASK (0x1)

#define PRRO_BAKP_AHB_SAP_BAK_AHB_DMA1_AP_POS (5)
#define PRRO_BAKP_AHB_SAP_BAK_AHB_DMA1_AP_MASK (0x1)

#define PRRO_BAKP_AHB_SAP_BAK_AHB_LA_AP_POS (6)
#define PRRO_BAKP_AHB_SAP_BAK_AHB_LA_AP_MASK (0x1)

#define PRRO_BAKP_AHB_SAP_BAK_AHB_APB_AP_POS (7)
#define PRRO_BAKP_AHB_SAP_BAK_AHB_APB_AP_MASK (0x1)

#define PRRO_BAKP_AHB_SAP_BAK_AHB_SRESP_POS (8)
#define PRRO_BAKP_AHB_SAP_BAK_AHB_SRESP_MASK (0x1)

#define PRRO_BAKP_AHB_SAP_RESERVED_BIT_9_31_POS (9)
#define PRRO_BAKP_AHB_SAP_RESERVED_BIT_9_31_MASK (0x7fffff)

#define PRRO_BAKP_APB_SAP_ADDR (SOC_PRRO_REG_BASE + (0x8 << 2))

#define PRRO_BAKP_APB_SAP_BAK_APB_TIMER1_NSEC_POS (0)
#define PRRO_BAKP_APB_SAP_BAK_APB_TIMER1_NSEC_MASK (0x1)

#define PRRO_BAKP_APB_SAP_BAK_APB_SDMADC_NSEC_POS (1)
#define PRRO_BAKP_APB_SAP_BAK_APB_SDMADC_NSEC_MASK (0x1)

#define PRRO_BAKP_APB_SAP_BAK_APB_UART1_NSEC_POS (2)
#define PRRO_BAKP_APB_SAP_BAK_APB_UART1_NSEC_MASK (0x1)

#define PRRO_BAKP_APB_SAP_BAK_APB_UART2_NSEC_POS (3)
#define PRRO_BAKP_APB_SAP_BAK_APB_UART2_NSEC_MASK (0x1)

#define PRRO_BAKP_APB_SAP_BAK_APB_I2C0_NSEC_POS (4)
#define PRRO_BAKP_APB_SAP_BAK_APB_I2C0_NSEC_MASK (0x1)

#define PRRO_BAKP_APB_SAP_BAK_APB_I2C1_NSEC_POS (5)
#define PRRO_BAKP_APB_SAP_BAK_APB_I2C1_NSEC_MASK (0x1)

#define PRRO_BAKP_APB_SAP_BAK_APB_SPI1_NSEC_POS (6)
#define PRRO_BAKP_APB_SAP_BAK_APB_SPI1_NSEC_MASK (0x1)

#define PRRO_BAKP_APB_SAP_BAK_APB_SADC_NSEC_POS (7)
#define PRRO_BAKP_APB_SAP_BAK_APB_SADC_NSEC_MASK (0x1)

#define PRRO_BAKP_APB_SAP_BAK_APB_PWM0_NSEC_POS (8)
#define PRRO_BAKP_APB_SAP_BAK_APB_PWM0_NSEC_MASK (0x1)

#define PRRO_BAKP_APB_SAP_BAK_APB_IRDA_NSEC_POS (9)
#define PRRO_BAKP_APB_SAP_BAK_APB_IRDA_NSEC_MASK (0x1)

#define PRRO_BAKP_APB_SAP_BAK_APB_TRNG_NSEC_POS (10)
#define PRRO_BAKP_APB_SAP_BAK_APB_TRNG_NSEC_MASK (0x1)

#define PRRO_BAKP_APB_SAP_BAK_APB_SDIO_NSEC_POS (11)
#define PRRO_BAKP_APB_SAP_BAK_APB_SDIO_NSEC_MASK (0x1)

#define PRRO_BAKP_APB_SAP_BAK_APB_SCLD_NSEC_POS (12)
#define PRRO_BAKP_APB_SAP_BAK_APB_SCLD_NSEC_MASK (0x1)

#define PRRO_BAKP_APB_SAP_BAK_APB_PWM1_NSEC_POS (13)
#define PRRO_BAKP_APB_SAP_BAK_APB_PWM1_NSEC_MASK (0x1)

#define PRRO_BAKP_APB_SAP_BAK_APB_TIMER1_AP_POS (14)
#define PRRO_BAKP_APB_SAP_BAK_APB_TIMER1_AP_MASK (0x1)

#define PRRO_BAKP_APB_SAP_BAK_APB_SDMADC_AP_POS (15)
#define PRRO_BAKP_APB_SAP_BAK_APB_SDMADC_AP_MASK (0x1)

#define PRRO_BAKP_APB_SAP_BAK_APB_UART1_AP_POS (16)
#define PRRO_BAKP_APB_SAP_BAK_APB_UART1_AP_MASK (0x1)

#define PRRO_BAKP_APB_SAP_BAK_APB_UART2_AP_POS (17)
#define PRRO_BAKP_APB_SAP_BAK_APB_UART2_AP_MASK (0x1)

#define PRRO_BAKP_APB_SAP_BAK_APB_I2C0_AP_POS (18)
#define PRRO_BAKP_APB_SAP_BAK_APB_I2C0_AP_MASK (0x1)

#define PRRO_BAKP_APB_SAP_BAK_APB_I2C1_AP_POS (19)
#define PRRO_BAKP_APB_SAP_BAK_APB_I2C1_AP_MASK (0x1)

#define PRRO_BAKP_APB_SAP_BAK_APB_SPI1_AP_POS (20)
#define PRRO_BAKP_APB_SAP_BAK_APB_SPI1_AP_MASK (0x1)

#define PRRO_BAKP_APB_SAP_BAK_APB_SADC_AP_POS (21)
#define PRRO_BAKP_APB_SAP_BAK_APB_SADC_AP_MASK (0x1)

#define PRRO_BAKP_APB_SAP_BAK_APB_PWM0_AP_POS (22)
#define PRRO_BAKP_APB_SAP_BAK_APB_PWM0_AP_MASK (0x1)

#define PRRO_BAKP_APB_SAP_BAK_APB_IRDA_AP_POS (23)
#define PRRO_BAKP_APB_SAP_BAK_APB_IRDA_AP_MASK (0x1)

#define PRRO_BAKP_APB_SAP_BAK_APB_TRNG_AP_POS (24)
#define PRRO_BAKP_APB_SAP_BAK_APB_TRNG_AP_MASK (0x1)

#define PRRO_BAKP_APB_SAP_BAK_APB_SDIO_AP_POS (25)
#define PRRO_BAKP_APB_SAP_BAK_APB_SDIO_AP_MASK (0x1)

#define PRRO_BAKP_APB_SAP_BAK_APB_SCLD_AP_POS (26)
#define PRRO_BAKP_APB_SAP_BAK_APB_SCLD_AP_MASK (0x1)

#define PRRO_BAKP_APB_SAP_BAK_APB_PWM1_AP_POS (27)
#define PRRO_BAKP_APB_SAP_BAK_APB_PWM1_AP_MASK (0x1)

#define PRRO_BAKP_APB_SAP_BAK_APB_SRESP_POS (28)
#define PRRO_BAKP_APB_SAP_BAK_APB_SRESP_MASK (0x1)

#define PRRO_BAKP_APB_SAP_RESERVED_BIT_29_31_POS (29)
#define PRRO_BAKP_APB_SAP_RESERVED_BIT_29_31_MASK (0x7)

#define PRRO_AHBP_SAP_ADDR (SOC_PRRO_REG_BASE + (0x9 << 2))

#define PRRO_AHBP_SAP_AHB_AHB_USB_NSEC_POS (0)
#define PRRO_AHBP_SAP_AHB_AHB_USB_NSEC_MASK (0x1)

#define PRRO_AHBP_SAP_AHB_AHB_CAN_NSEC_POS (1)
#define PRRO_AHBP_SAP_AHB_AHB_CAN_NSEC_MASK (0x1)

#define PRRO_AHBP_SAP_AHB_AHB_QSPI0_NSEC_POS (2)
#define PRRO_AHBP_SAP_AHB_AHB_QSPI0_NSEC_MASK (0x1)

#define PRRO_AHBP_SAP_AHB_AHB_QSPI1_NSEC_POS (3)
#define PRRO_AHBP_SAP_AHB_AHB_QSPI1_NSEC_MASK (0x1)

#define PRRO_AHBP_SAP_AHB_AHB_PSRAM_NSEC_POS (4)
#define PRRO_AHBP_SAP_AHB_AHB_PSRAM_NSEC_MASK (0x1)

#define PRRO_AHBP_SAP_AHB_AHB_ENET_NSEC_POS (5)
#define PRRO_AHBP_SAP_AHB_AHB_ENET_NSEC_MASK (0x1)

#define PRRO_AHBP_SAP_AHB_AHB_APB_NSEC_POS (6)
#define PRRO_AHBP_SAP_AHB_AHB_APB_NSEC_MASK (0x1)

#define PRRO_AHBP_SAP_AHB_AHB_USB_AP_POS (7)
#define PRRO_AHBP_SAP_AHB_AHB_USB_AP_MASK (0x1)

#define PRRO_AHBP_SAP_AHB_AHB_CAN_AP_POS (8)
#define PRRO_AHBP_SAP_AHB_AHB_CAN_AP_MASK (0x1)

#define PRRO_AHBP_SAP_AHB_AHB_QSPI0_AP_POS (9)
#define PRRO_AHBP_SAP_AHB_AHB_QSPI0_AP_MASK (0x1)

#define PRRO_AHBP_SAP_AHB_AHB_QSPI1_AP_POS (10)
#define PRRO_AHBP_SAP_AHB_AHB_QSPI1_AP_MASK (0x1)

#define PRRO_AHBP_SAP_AHB_AHB_PSRAM_AP_POS (11)
#define PRRO_AHBP_SAP_AHB_AHB_PSRAM_AP_MASK (0x1)

#define PRRO_AHBP_SAP_AHB_AHB_ENET_AP_POS (12)
#define PRRO_AHBP_SAP_AHB_AHB_ENET_AP_MASK (0x1)

#define PRRO_AHBP_SAP_AHB_AHB_APB_AP_POS (13)
#define PRRO_AHBP_SAP_AHB_AHB_APB_AP_MASK (0x1)

#define PRRO_AHBP_SAP_AHB_AHB_SRESP_POS (14)
#define PRRO_AHBP_SAP_AHB_AHB_SRESP_MASK (0x1)

#define PRRO_AHBP_SAP_AHB_APB_SCR_NSEC_POS (15)
#define PRRO_AHBP_SAP_AHB_APB_SCR_NSEC_MASK (0x1)

#define PRRO_AHBP_SAP_AHB_APB_LIN_NSEC_POS (16)
#define PRRO_AHBP_SAP_AHB_APB_LIN_NSEC_MASK (0x1)

#define PRRO_AHBP_SAP_AHB_APB_SCR_AP_POS (17)
#define PRRO_AHBP_SAP_AHB_APB_SCR_AP_MASK (0x1)

#define PRRO_AHBP_SAP_AHB_APB_LIN_AP_POS (18)
#define PRRO_AHBP_SAP_AHB_APB_LIN_AP_MASK (0x1)

#define PRRO_AHBP_SAP_AHB_APB_SRESP_POS (19)
#define PRRO_AHBP_SAP_AHB_APB_SRESP_MASK (0x1)

#define PRRO_AHBP_SAP_RESERVED_BIT_20_31_POS (20)
#define PRRO_AHBP_SAP_RESERVED_BIT_20_31_MASK (0xfff)

#define PRRO_AUDP_SAP_ADDR (SOC_PRRO_REG_BASE + (0xa << 2))

#define PRRO_AUDP_SAP_AUD_AHB_SBC_NSEC_POS (0)
#define PRRO_AUDP_SAP_AUD_AHB_SBC_NSEC_MASK (0x1)

#define PRRO_AUDP_SAP_AUD_AHB_APB_NSEC_POS (1)
#define PRRO_AUDP_SAP_AUD_AHB_APB_NSEC_MASK (0x1)

#define PRRO_AUDP_SAP_AUD_AHB_SBC_AP_POS (2)
#define PRRO_AUDP_SAP_AUD_AHB_SBC_AP_MASK (0x1)

#define PRRO_AUDP_SAP_AUD_AHB_APB_AP_POS (3)
#define PRRO_AUDP_SAP_AUD_AHB_APB_AP_MASK (0x1)

#define PRRO_AUDP_SAP_AUD_AHB_SRESP_POS (4)
#define PRRO_AUDP_SAP_AUD_AHB_SRESP_MASK (0x1)

#define PRRO_AUDP_SAP_AUD_APB_AUD_NSES_POS (5)
#define PRRO_AUDP_SAP_AUD_APB_AUD_NSES_MASK (0x1)

#define PRRO_AUDP_SAP_AUD_APB_I2S0_NSES_POS (6)
#define PRRO_AUDP_SAP_AUD_APB_I2S0_NSES_MASK (0x1)

#define PRRO_AUDP_SAP_AUD_APB_I2S1_NSES_POS (7)
#define PRRO_AUDP_SAP_AUD_APB_I2S1_NSES_MASK (0x1)

#define PRRO_AUDP_SAP_AUD_APB_I2S2_NSES_POS (8)
#define PRRO_AUDP_SAP_AUD_APB_I2S2_NSES_MASK (0x1)

#define PRRO_AUDP_SAP_AUD_APB_AUD_AP_POS (9)
#define PRRO_AUDP_SAP_AUD_APB_AUD_AP_MASK (0x1)

#define PRRO_AUDP_SAP_AUD_APB_I2S0_AP_POS (10)
#define PRRO_AUDP_SAP_AUD_APB_I2S0_AP_MASK (0x1)

#define PRRO_AUDP_SAP_AUD_APB_I2S1_AP_POS (11)
#define PRRO_AUDP_SAP_AUD_APB_I2S1_AP_MASK (0x1)

#define PRRO_AUDP_SAP_AUD_APB_I2S2_AP_POS (12)
#define PRRO_AUDP_SAP_AUD_APB_I2S2_AP_MASK (0x1)

#define PRRO_AUDP_SAP_AUD_APB_SRESP_POS (13)
#define PRRO_AUDP_SAP_AUD_APB_SRESP_MASK (0x1)

#define PRRO_AUDP_SAP_RESERVED_BIT_14_31_POS (14)
#define PRRO_AUDP_SAP_RESERVED_BIT_14_31_MASK (0x3ffff)

#define PRRO_VIDP_SAP_ADDR (SOC_PRRO_REG_BASE + (0xb << 2))

#define PRRO_VIDP_SAP_VID_AHB_JPGE_NSEC_POS (0)
#define PRRO_VIDP_SAP_VID_AHB_JPGE_NSEC_MASK (0x1)

#define PRRO_VIDP_SAP_VID_AHB_YUV_NSEC_POS (1)
#define PRRO_VIDP_SAP_VID_AHB_YUV_NSEC_MASK (0x1)

#define PRRO_VIDP_SAP_VID_AHB_JPGD_NSEC_POS (2)
#define PRRO_VIDP_SAP_VID_AHB_JPGD_NSEC_MASK (0x1)

#define PRRO_VIDP_SAP_VID_AHB_DISP_NSEC_POS (3)
#define PRRO_VIDP_SAP_VID_AHB_DISP_NSEC_MASK (0x1)

#define PRRO_VIDP_SAP_VID_AHB_DMAD_NSEC_POS (4)
#define PRRO_VIDP_SAP_VID_AHB_DMAD_NSEC_MASK (0x1)

#define PRRO_VIDP_SAP_VID_AHB_ROTT_NSEC_POS (5)
#define PRRO_VIDP_SAP_VID_AHB_ROTT_NSEC_MASK (0x1)

#define PRRO_VIDP_SAP_VID_AHB_SCAL0_NSEC_POS (6)
#define PRRO_VIDP_SAP_VID_AHB_SCAL0_NSEC_MASK (0x1)

#define PRRO_VIDP_SAP_VID_AHB_SCAL1_NSEC_POS (7)
#define PRRO_VIDP_SAP_VID_AHB_SCAL1_NSEC_MASK (0x1)

#define PRRO_VIDP_SAP_VID_AHB_APB_NSEC_POS (8)
#define PRRO_VIDP_SAP_VID_AHB_APB_NSEC_MASK (0x1)

#define PRRO_VIDP_SAP_VID_AHB_JPGE_AP_POS (9)
#define PRRO_VIDP_SAP_VID_AHB_JPGE_AP_MASK (0x1)

#define PRRO_VIDP_SAP_VID_AHB_YUV_AP_POS (10)
#define PRRO_VIDP_SAP_VID_AHB_YUV_AP_MASK (0x1)

#define PRRO_VIDP_SAP_VID_AHB_JPGD_AP_POS (11)
#define PRRO_VIDP_SAP_VID_AHB_JPGD_AP_MASK (0x1)

#define PRRO_VIDP_SAP_VID_AHB_DISP_AP_POS (12)
#define PRRO_VIDP_SAP_VID_AHB_DISP_AP_MASK (0x1)

#define PRRO_VIDP_SAP_VID_AHB_DMAD_AP_POS (13)
#define PRRO_VIDP_SAP_VID_AHB_DMAD_AP_MASK (0x1)

#define PRRO_VIDP_SAP_VID_AHB_ROTT_AP_POS (14)
#define PRRO_VIDP_SAP_VID_AHB_ROTT_AP_MASK (0x1)

#define PRRO_VIDP_SAP_VID_AHB_SCAL0_AP_POS (15)
#define PRRO_VIDP_SAP_VID_AHB_SCAL0_AP_MASK (0x1)

#define PRRO_VIDP_SAP_VID_AHB_SCAL1_AP_POS (16)
#define PRRO_VIDP_SAP_VID_AHB_SCAL1_AP_MASK (0x1)

#define PRRO_VIDP_SAP_VID_AHB_APB_AP_POS (17)
#define PRRO_VIDP_SAP_VID_AHB_APB_AP_MASK (0x1)

#define PRRO_VIDP_SAP_VID_AHB_SRESP_POS (18)
#define PRRO_VIDP_SAP_VID_AHB_SRESP_MASK (0x1)

#define PRRO_VIDP_SAP_VID_APB_H264_NSEC_POS (19)
#define PRRO_VIDP_SAP_VID_APB_H264_NSEC_MASK (0x1)

#define PRRO_VIDP_SAP_VID_APB_H264_AP_POS (20)
#define PRRO_VIDP_SAP_VID_APB_H264_AP_MASK (0x1)

#define PRRO_VIDP_SAP_VID_APB_H264_SRESP_POS (21)
#define PRRO_VIDP_SAP_VID_APB_H264_SRESP_MASK (0x1)

#define PRRO_VIDP_SAP_RESERVED_BIT_22_31_POS (22)
#define PRRO_VIDP_SAP_RESERVED_BIT_22_31_MASK (0x3ff)

#define PRRO_WIFP_SAP_ADDR (SOC_PRRO_REG_BASE + (0xc << 2))

#define PRRO_WIFP_SAP_WIFI_AHB_MAC_NSEC_POS (0)
#define PRRO_WIFP_SAP_WIFI_AHB_MAC_NSEC_MASK (0x1)

#define PRRO_WIFP_SAP_WIFI_AHB_MOD_NSEC_POS (1)
#define PRRO_WIFP_SAP_WIFI_AHB_MOD_NSEC_MASK (0x1)

#define PRRO_WIFP_SAP_WIFI_AHB_MAC_AP_POS (2)
#define PRRO_WIFP_SAP_WIFI_AHB_MAC_AP_MASK (0x1)

#define PRRO_WIFP_SAP_WIFI_AHB_MOD_AP_POS (3)
#define PRRO_WIFP_SAP_WIFI_AHB_MOD_AP_MASK (0x1)

#define PRRO_WIFP_SAP_WIFI_AHB_SRESP_POS (4)
#define PRRO_WIFP_SAP_WIFI_AHB_SRESP_MASK (0x1)

#define PRRO_WIFP_SAP_RESERVED_BIT_5_31_POS (5)
#define PRRO_WIFP_SAP_RESERVED_BIT_5_31_MASK (0x7ffffff)

#define PRRO_BTSP_SAP_ADDR (SOC_PRRO_REG_BASE + (0xd << 2))

#define PRRO_BTSP_SAP_BTDM_AHB_BTDM_NSEC_POS (0)
#define PRRO_BTSP_SAP_BTDM_AHB_BTDM_NSEC_MASK (0x1)

#define PRRO_BTSP_SAP_BTDM_AHB_APB_NSEC_POS (1)
#define PRRO_BTSP_SAP_BTDM_AHB_APB_NSEC_MASK (0x1)

#define PRRO_BTSP_SAP_BTDM_AHB_BTDM_AP_POS (2)
#define PRRO_BTSP_SAP_BTDM_AHB_BTDM_AP_MASK (0x1)

#define PRRO_BTSP_SAP_BTDM_AHB_APB_AP_POS (3)
#define PRRO_BTSP_SAP_BTDM_AHB_APB_AP_MASK (0x1)

#define PRRO_BTSP_SAP_BTDM_AHB_SRESP_POS (4)
#define PRRO_BTSP_SAP_BTDM_AHB_SRESP_MASK (0x1)

#define PRRO_BTSP_SAP_BTDM_APB_XVR_NSEC_POS (5)
#define PRRO_BTSP_SAP_BTDM_APB_XVR_NSEC_MASK (0x1)

#define PRRO_BTSP_SAP_BTDM_APB_XVR_AP_POS (6)
#define PRRO_BTSP_SAP_BTDM_APB_XVR_AP_MASK (0x1)

#define PRRO_BTSP_SAP_BTDM_APB_SRESP_POS (7)
#define PRRO_BTSP_SAP_BTDM_APB_SRESP_MASK (0x1)

#define PRRO_BTSP_SAP_RESERVED_BIT_8_31_POS (8)
#define PRRO_BTSP_SAP_RESERVED_BIT_8_31_MASK (0xffffff)

#define PRRO_MBOX_SAP_ADDR (SOC_PRRO_REG_BASE + (0xe << 2))

#define PRRO_MBOX_SAP_MBOX_AHB_NSEC_POS (0)
#define PRRO_MBOX_SAP_MBOX_AHB_NSEC_MASK (0x1)

#define PRRO_MBOX_SAP_MBOX_AHB_AP_POS (1)
#define PRRO_MBOX_SAP_MBOX_AHB_AP_MASK (0x1)

#define PRRO_MBOX_SAP_PPRO_MPC_AP_POS (2)
#define PRRO_MBOX_SAP_PPRO_MPC_AP_MASK (0x1)

#define PRRO_MBOX_SAP_RESERVED_BIT_3_31_POS (3)
#define PRRO_MBOX_SAP_RESERVED_BIT_3_31_MASK (0x1fffffff)

#define PRRO_MASTER_HNSEC_ADDR (SOC_PRRO_REG_BASE + (0xf << 2))

#define PRRO_MASTER_HNSEC_JPENC_M_HNSEC_POS (0)
#define PRRO_MASTER_HNSEC_JPENC_M_HNSEC_MASK (0x1)

#define PRRO_MASTER_HNSEC_JPDEC_M_HNSEC_POS (1)
#define PRRO_MASTER_HNSEC_JPDEC_M_HNSEC_MASK (0x1)

#define PRRO_MASTER_HNSEC_DMAD_M_HNSEC_POS (2)
#define PRRO_MASTER_HNSEC_DMAD_M_HNSEC_MASK (0x1)

#define PRRO_MASTER_HNSEC_MAC_M_HNSEC_POS (3)
#define PRRO_MASTER_HNSEC_MAC_M_HNSEC_MASK (0x1)

#define PRRO_MASTER_HNSEC_HSU_M_HNSEC_POS (4)
#define PRRO_MASTER_HNSEC_HSU_M_HNSEC_MASK (0x1)

#define PRRO_MASTER_HNSEC_BTDM_M_HNSEC_POS (5)
#define PRRO_MASTER_HNSEC_BTDM_M_HNSEC_MASK (0x1)

#define PRRO_MASTER_HNSEC_LA_M_HNSEC_POS (6)
#define PRRO_MASTER_HNSEC_LA_M_HNSEC_MASK (0x1)

#define PRRO_MASTER_HNSEC_DISP_M_HNSEC_POS (7)
#define PRRO_MASTER_HNSEC_DISP_M_HNSEC_MASK (0x1)

#define PRRO_MASTER_HNSEC_ROTT_M_HNSEC_POS (8)
#define PRRO_MASTER_HNSEC_ROTT_M_HNSEC_MASK (0x1)

#define PRRO_MASTER_HNSEC_USB_M_HNSEC_POS (9)
#define PRRO_MASTER_HNSEC_USB_M_HNSEC_MASK (0x1)

#define PRRO_MASTER_HNSEC_ENET_M_HNSEC_POS (10)
#define PRRO_MASTER_HNSEC_ENET_M_HNSEC_MASK (0x1)

#define PRRO_MASTER_HNSEC_SCAL0_M_HNSEC_POS (11)
#define PRRO_MASTER_HNSEC_SCAL0_M_HNSEC_MASK (0x1)

#define PRRO_MASTER_HNSEC_SCAL1_M_HNSEC_POS (12)
#define PRRO_MASTER_HNSEC_SCAL1_M_HNSEC_MASK (0x1)

#define PRRO_MASTER_HNSEC_RESERVED_BIT_13_31_POS (13)
#define PRRO_MASTER_HNSEC_RESERVED_BIT_13_31_MASK (0x7ffff)

#define PRRO_CMP0_ADDR_START_ADDR (SOC_PRRO_REG_BASE + (0x17 << 2))

#define PRRO_CMP0_ADDR_START_CMP0_ADDR_START_POS (0)
#define PRRO_CMP0_ADDR_START_CMP0_ADDR_START_MASK (0xffffffff)

#define PRRO_CMP0_END_START_ADDR (SOC_PRRO_REG_BASE + (0x18 << 2))

#define PRRO_CMP0_END_START_CMP0_ADDR_END_POS (0)
#define PRRO_CMP0_END_START_CMP0_ADDR_END_MASK (0xffffffff)

#define PRRO_CMP0_DATA_REGA_ADDR (SOC_PRRO_REG_BASE + (0x19 << 2))

#define PRRO_CMP0_DATA_REGA_CMP0_DATA_SRC_POS (0)
#define PRRO_CMP0_DATA_REGA_CMP0_DATA_SRC_MASK (0xffffffff)

#define PRRO_CMP0_DATA_REGB_ADDR (SOC_PRRO_REG_BASE + (0x1a << 2))

#define PRRO_CMP0_DATA_REGB_CMP0_DATA_DST_POS (0)
#define PRRO_CMP0_DATA_REGB_CMP0_DATA_DST_MASK (0xffffffff)

#define PRRO_CMP1_ADDR_START_ADDR (SOC_PRRO_REG_BASE + (0x1b << 2))

#define PRRO_CMP1_ADDR_START_CMP1_ADDR_START_POS (0)
#define PRRO_CMP1_ADDR_START_CMP1_ADDR_START_MASK (0xffffffff)

#define PRRO_CMP1_END_START_ADDR (SOC_PRRO_REG_BASE + (0x1c << 2))

#define PRRO_CMP1_END_START_CMP1_ADDR_END_POS (0)
#define PRRO_CMP1_END_START_CMP1_ADDR_END_MASK (0xffffffff)

#define PRRO_CMP1_DATA_REGA_ADDR (SOC_PRRO_REG_BASE + (0x1d << 2))

#define PRRO_CMP1_DATA_REGA_CMP1_DATA_SRC_POS (0)
#define PRRO_CMP1_DATA_REGA_CMP1_DATA_SRC_MASK (0xffffffff)

#define PRRO_CMP1_DATA_REGB_ADDR (SOC_PRRO_REG_BASE + (0x1e << 2))

#define PRRO_CMP1_DATA_REGB_CMP1_DATA_DST_POS (0)
#define PRRO_CMP1_DATA_REGB_CMP1_DATA_DST_MASK (0xffffffff)

#define PRRO_CMP2_ADDR_START_ADDR (SOC_PRRO_REG_BASE + (0x1f << 2))

#define PRRO_CMP2_ADDR_START_CMP2_ADDR_START_POS (0)
#define PRRO_CMP2_ADDR_START_CMP2_ADDR_START_MASK (0xffffffff)

#define PRRO_CMP2_END_START_ADDR (SOC_PRRO_REG_BASE + (0x20 << 2))

#define PRRO_CMP2_END_START_CMP2_ADDR_END_POS (0)
#define PRRO_CMP2_END_START_CMP2_ADDR_END_MASK (0xffffffff)

#define PRRO_CMP2_DATA_REGA_ADDR (SOC_PRRO_REG_BASE + (0x21 << 2))

#define PRRO_CMP2_DATA_REGA_CMP2_DATA_SRC_POS (0)
#define PRRO_CMP2_DATA_REGA_CMP2_DATA_SRC_MASK (0xffffffff)

#define PRRO_CMP2_DATA_REGB_ADDR (SOC_PRRO_REG_BASE + (0x22 << 2))

#define PRRO_CMP2_DATA_REGB_CMP2_DATA_DST_POS (0)
#define PRRO_CMP2_DATA_REGB_CMP2_DATA_DST_MASK (0xffffffff)

#define PRRO_CMP_INT_STATUS_ADDR (SOC_PRRO_REG_BASE + (0x23 << 2))

#define PRRO_CMP_INT_STATUS_CMP0_MISMATCH_INT_POS (0)
#define PRRO_CMP_INT_STATUS_CMP0_MISMATCH_INT_MASK (0x1)

#define PRRO_CMP_INT_STATUS_CMP1_MISMATCH_INT_POS (1)
#define PRRO_CMP_INT_STATUS_CMP1_MISMATCH_INT_MASK (0x1)

#define PRRO_CMP_INT_STATUS_CMP2_MISMATCH_INT_POS (2)
#define PRRO_CMP_INT_STATUS_CMP2_MISMATCH_INT_MASK (0x1)

#define PRRO_CMP_INT_STATUS_RESERVED_BIT_3_31_POS (3)
#define PRRO_CMP_INT_STATUS_RESERVED_BIT_3_31_MASK (0x1fffffff)

#ifdef __cplusplus
}
#endif
