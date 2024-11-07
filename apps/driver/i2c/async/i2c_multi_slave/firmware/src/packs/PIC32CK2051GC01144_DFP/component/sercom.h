/*
 * Component description for SERCOM
 *
 * Copyright (c) 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/*  file generated from device description file (ATDF) version 2024-04-02T09:16:01Z  */
#ifndef _PIC32CKGC01_SERCOM_COMPONENT_H_
#define _PIC32CKGC01_SERCOM_COMPONENT_H_

/* ************************************************************************** */
/*                     SOFTWARE API DEFINITION FOR SERCOM                     */
/* ************************************************************************** */

/* -------- SERCOM_I2CM_CTRLA : (SERCOM Offset: 0x00) (R/W 32) I2CM Control A -------- */
#define SERCOM_I2CM_CTRLA_RESETVALUE          _UINT32_(0x00)                                       /*  (SERCOM_I2CM_CTRLA) I2CM Control A  Reset Value */

#define SERCOM_I2CM_CTRLA_SWRST_Pos           _UINT32_(0)                                          /* (SERCOM_I2CM_CTRLA) Software Reset Position */
#define SERCOM_I2CM_CTRLA_SWRST_Msk           (_UINT32_(0x1) << SERCOM_I2CM_CTRLA_SWRST_Pos)       /* (SERCOM_I2CM_CTRLA) Software Reset Mask */
#define SERCOM_I2CM_CTRLA_SWRST(value)        (SERCOM_I2CM_CTRLA_SWRST_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_SWRST_Pos)) /* Assignment of value for SWRST in the SERCOM_I2CM_CTRLA register */
#define SERCOM_I2CM_CTRLA_ENABLE_Pos          _UINT32_(1)                                          /* (SERCOM_I2CM_CTRLA) Enable Position */
#define SERCOM_I2CM_CTRLA_ENABLE_Msk          (_UINT32_(0x1) << SERCOM_I2CM_CTRLA_ENABLE_Pos)      /* (SERCOM_I2CM_CTRLA) Enable Mask */
#define SERCOM_I2CM_CTRLA_ENABLE(value)       (SERCOM_I2CM_CTRLA_ENABLE_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_ENABLE_Pos)) /* Assignment of value for ENABLE in the SERCOM_I2CM_CTRLA register */
#define SERCOM_I2CM_CTRLA_MODE_Pos            _UINT32_(2)                                          /* (SERCOM_I2CM_CTRLA) Operating Mode Position */
#define SERCOM_I2CM_CTRLA_MODE_Msk            (_UINT32_(0x7) << SERCOM_I2CM_CTRLA_MODE_Pos)        /* (SERCOM_I2CM_CTRLA) Operating Mode Mask */
#define SERCOM_I2CM_CTRLA_MODE(value)         (SERCOM_I2CM_CTRLA_MODE_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_MODE_Pos)) /* Assignment of value for MODE in the SERCOM_I2CM_CTRLA register */
#define   SERCOM_I2CM_CTRLA_MODE_USART_EXT_CLK_Val _UINT32_(0x0)                                        /* (SERCOM_I2CM_CTRLA) USART with external clock  */
#define   SERCOM_I2CM_CTRLA_MODE_USART_INT_CLK_Val _UINT32_(0x1)                                        /* (SERCOM_I2CM_CTRLA) USART with internal clock  */
#define   SERCOM_I2CM_CTRLA_MODE_SPI_SLAVE_Val _UINT32_(0x2)                                        /* (SERCOM_I2CM_CTRLA) SPI in slave operation  */
#define   SERCOM_I2CM_CTRLA_MODE_SPI_MASTER_Val _UINT32_(0x3)                                        /* (SERCOM_I2CM_CTRLA) SPI in master operation  */
#define   SERCOM_I2CM_CTRLA_MODE_I2C_SLAVE_Val _UINT32_(0x4)                                        /* (SERCOM_I2CM_CTRLA) I2C slave operation  */
#define   SERCOM_I2CM_CTRLA_MODE_I2C_MASTER_Val _UINT32_(0x5)                                        /* (SERCOM_I2CM_CTRLA) I2C master operation  */
#define SERCOM_I2CM_CTRLA_MODE_USART_EXT_CLK  (SERCOM_I2CM_CTRLA_MODE_USART_EXT_CLK_Val << SERCOM_I2CM_CTRLA_MODE_Pos) /* (SERCOM_I2CM_CTRLA) USART with external clock Position */
#define SERCOM_I2CM_CTRLA_MODE_USART_INT_CLK  (SERCOM_I2CM_CTRLA_MODE_USART_INT_CLK_Val << SERCOM_I2CM_CTRLA_MODE_Pos) /* (SERCOM_I2CM_CTRLA) USART with internal clock Position */
#define SERCOM_I2CM_CTRLA_MODE_SPI_SLAVE      (SERCOM_I2CM_CTRLA_MODE_SPI_SLAVE_Val << SERCOM_I2CM_CTRLA_MODE_Pos) /* (SERCOM_I2CM_CTRLA) SPI in slave operation Position */
#define SERCOM_I2CM_CTRLA_MODE_SPI_MASTER     (SERCOM_I2CM_CTRLA_MODE_SPI_MASTER_Val << SERCOM_I2CM_CTRLA_MODE_Pos) /* (SERCOM_I2CM_CTRLA) SPI in master operation Position */
#define SERCOM_I2CM_CTRLA_MODE_I2C_SLAVE      (SERCOM_I2CM_CTRLA_MODE_I2C_SLAVE_Val << SERCOM_I2CM_CTRLA_MODE_Pos) /* (SERCOM_I2CM_CTRLA) I2C slave operation Position */
#define SERCOM_I2CM_CTRLA_MODE_I2C_MASTER     (SERCOM_I2CM_CTRLA_MODE_I2C_MASTER_Val << SERCOM_I2CM_CTRLA_MODE_Pos) /* (SERCOM_I2CM_CTRLA) I2C master operation Position */
#define SERCOM_I2CM_CTRLA_RUNSTDBY_Pos        _UINT32_(7)                                          /* (SERCOM_I2CM_CTRLA) Run in Standby Position */
#define SERCOM_I2CM_CTRLA_RUNSTDBY_Msk        (_UINT32_(0x1) << SERCOM_I2CM_CTRLA_RUNSTDBY_Pos)    /* (SERCOM_I2CM_CTRLA) Run in Standby Mask */
#define SERCOM_I2CM_CTRLA_RUNSTDBY(value)     (SERCOM_I2CM_CTRLA_RUNSTDBY_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_RUNSTDBY_Pos)) /* Assignment of value for RUNSTDBY in the SERCOM_I2CM_CTRLA register */
#define SERCOM_I2CM_CTRLA_FILTSEL_Pos         _UINT32_(8)                                          /* (SERCOM_I2CM_CTRLA) Input Filter Selection Position */
#define SERCOM_I2CM_CTRLA_FILTSEL_Msk         (_UINT32_(0x3) << SERCOM_I2CM_CTRLA_FILTSEL_Pos)     /* (SERCOM_I2CM_CTRLA) Input Filter Selection Mask */
#define SERCOM_I2CM_CTRLA_FILTSEL(value)      (SERCOM_I2CM_CTRLA_FILTSEL_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_FILTSEL_Pos)) /* Assignment of value for FILTSEL in the SERCOM_I2CM_CTRLA register */
#define   SERCOM_I2CM_CTRLA_FILTSEL_DIS_Val   _UINT32_(0x0)                                        /* (SERCOM_I2CM_CTRLA) Disable  */
#define   SERCOM_I2CM_CTRLA_FILTSEL_50NS_Val  _UINT32_(0x2)                                        /* (SERCOM_I2CM_CTRLA) Minimum 50ns filter  */
#define   SERCOM_I2CM_CTRLA_FILTSEL_10NS_Val  _UINT32_(0x3)                                        /* (SERCOM_I2CM_CTRLA) Minimum 10ns filter  */
#define SERCOM_I2CM_CTRLA_FILTSEL_DIS         (SERCOM_I2CM_CTRLA_FILTSEL_DIS_Val << SERCOM_I2CM_CTRLA_FILTSEL_Pos) /* (SERCOM_I2CM_CTRLA) Disable Position */
#define SERCOM_I2CM_CTRLA_FILTSEL_50NS        (SERCOM_I2CM_CTRLA_FILTSEL_50NS_Val << SERCOM_I2CM_CTRLA_FILTSEL_Pos) /* (SERCOM_I2CM_CTRLA) Minimum 50ns filter Position */
#define SERCOM_I2CM_CTRLA_FILTSEL_10NS        (SERCOM_I2CM_CTRLA_FILTSEL_10NS_Val << SERCOM_I2CM_CTRLA_FILTSEL_Pos) /* (SERCOM_I2CM_CTRLA) Minimum 10ns filter Position */
#define SERCOM_I2CM_CTRLA_SLEWRATE_Pos        _UINT32_(10)                                         /* (SERCOM_I2CM_CTRLA) Slew Rate Selection Position */
#define SERCOM_I2CM_CTRLA_SLEWRATE_Msk        (_UINT32_(0x3) << SERCOM_I2CM_CTRLA_SLEWRATE_Pos)    /* (SERCOM_I2CM_CTRLA) Slew Rate Selection Mask */
#define SERCOM_I2CM_CTRLA_SLEWRATE(value)     (SERCOM_I2CM_CTRLA_SLEWRATE_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_SLEWRATE_Pos)) /* Assignment of value for SLEWRATE in the SERCOM_I2CM_CTRLA register */
#define   SERCOM_I2CM_CTRLA_SLEWRATE_SMM_Val  _UINT32_(0x0)                                        /* (SERCOM_I2CM_CTRLA) Standard mode  */
#define   SERCOM_I2CM_CTRLA_SLEWRATE_FM_Val   _UINT32_(0x1)                                        /* (SERCOM_I2CM_CTRLA) Fast mode  */
#define   SERCOM_I2CM_CTRLA_SLEWRATE_FMP_Val  _UINT32_(0x2)                                        /* (SERCOM_I2CM_CTRLA) Fast mode plus  */
#define   SERCOM_I2CM_CTRLA_SLEWRATE_HS_Val   _UINT32_(0x3)                                        /* (SERCOM_I2CM_CTRLA) High-speed mode  */
#define SERCOM_I2CM_CTRLA_SLEWRATE_SMM        (SERCOM_I2CM_CTRLA_SLEWRATE_SMM_Val << SERCOM_I2CM_CTRLA_SLEWRATE_Pos) /* (SERCOM_I2CM_CTRLA) Standard mode Position */
#define SERCOM_I2CM_CTRLA_SLEWRATE_FM         (SERCOM_I2CM_CTRLA_SLEWRATE_FM_Val << SERCOM_I2CM_CTRLA_SLEWRATE_Pos) /* (SERCOM_I2CM_CTRLA) Fast mode Position */
#define SERCOM_I2CM_CTRLA_SLEWRATE_FMP        (SERCOM_I2CM_CTRLA_SLEWRATE_FMP_Val << SERCOM_I2CM_CTRLA_SLEWRATE_Pos) /* (SERCOM_I2CM_CTRLA) Fast mode plus Position */
#define SERCOM_I2CM_CTRLA_SLEWRATE_HS         (SERCOM_I2CM_CTRLA_SLEWRATE_HS_Val << SERCOM_I2CM_CTRLA_SLEWRATE_Pos) /* (SERCOM_I2CM_CTRLA) High-speed mode Position */
#define SERCOM_I2CM_CTRLA_PINOUT_Pos          _UINT32_(16)                                         /* (SERCOM_I2CM_CTRLA) Pin Usage Position */
#define SERCOM_I2CM_CTRLA_PINOUT_Msk          (_UINT32_(0x1) << SERCOM_I2CM_CTRLA_PINOUT_Pos)      /* (SERCOM_I2CM_CTRLA) Pin Usage Mask */
#define SERCOM_I2CM_CTRLA_PINOUT(value)       (SERCOM_I2CM_CTRLA_PINOUT_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_PINOUT_Pos)) /* Assignment of value for PINOUT in the SERCOM_I2CM_CTRLA register */
#define SERCOM_I2CM_CTRLA_SMBUSEN_Pos         _UINT32_(17)                                         /* (SERCOM_I2CM_CTRLA) SMBUS Input Buffer Enable Position */
#define SERCOM_I2CM_CTRLA_SMBUSEN_Msk         (_UINT32_(0x1) << SERCOM_I2CM_CTRLA_SMBUSEN_Pos)     /* (SERCOM_I2CM_CTRLA) SMBUS Input Buffer Enable Mask */
#define SERCOM_I2CM_CTRLA_SMBUSEN(value)      (SERCOM_I2CM_CTRLA_SMBUSEN_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_SMBUSEN_Pos)) /* Assignment of value for SMBUSEN in the SERCOM_I2CM_CTRLA register */
#define SERCOM_I2CM_CTRLA_SDAHOLD_Pos         _UINT32_(20)                                         /* (SERCOM_I2CM_CTRLA) SDA Hold Time Position */
#define SERCOM_I2CM_CTRLA_SDAHOLD_Msk         (_UINT32_(0x3) << SERCOM_I2CM_CTRLA_SDAHOLD_Pos)     /* (SERCOM_I2CM_CTRLA) SDA Hold Time Mask */
#define SERCOM_I2CM_CTRLA_SDAHOLD(value)      (SERCOM_I2CM_CTRLA_SDAHOLD_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_SDAHOLD_Pos)) /* Assignment of value for SDAHOLD in the SERCOM_I2CM_CTRLA register */
#define   SERCOM_I2CM_CTRLA_SDAHOLD_DIS_Val   _UINT32_(0x0)                                        /* (SERCOM_I2CM_CTRLA) Disable  */
#define   SERCOM_I2CM_CTRLA_SDAHOLD_75NS_Val  _UINT32_(0x1)                                        /* (SERCOM_I2CM_CTRLA) 50ns - 100ns hold time  */
#define   SERCOM_I2CM_CTRLA_SDAHOLD_450NS_Val _UINT32_(0x2)                                        /* (SERCOM_I2CM_CTRLA) 300ns - 600ns hold time  */
#define   SERCOM_I2CM_CTRLA_SDAHOLD_600NS_Val _UINT32_(0x3)                                        /* (SERCOM_I2CM_CTRLA) 400ns - 800ns hold time  */
#define SERCOM_I2CM_CTRLA_SDAHOLD_DIS         (SERCOM_I2CM_CTRLA_SDAHOLD_DIS_Val << SERCOM_I2CM_CTRLA_SDAHOLD_Pos) /* (SERCOM_I2CM_CTRLA) Disable Position */
#define SERCOM_I2CM_CTRLA_SDAHOLD_75NS        (SERCOM_I2CM_CTRLA_SDAHOLD_75NS_Val << SERCOM_I2CM_CTRLA_SDAHOLD_Pos) /* (SERCOM_I2CM_CTRLA) 50ns - 100ns hold time Position */
#define SERCOM_I2CM_CTRLA_SDAHOLD_450NS       (SERCOM_I2CM_CTRLA_SDAHOLD_450NS_Val << SERCOM_I2CM_CTRLA_SDAHOLD_Pos) /* (SERCOM_I2CM_CTRLA) 300ns - 600ns hold time Position */
#define SERCOM_I2CM_CTRLA_SDAHOLD_600NS       (SERCOM_I2CM_CTRLA_SDAHOLD_600NS_Val << SERCOM_I2CM_CTRLA_SDAHOLD_Pos) /* (SERCOM_I2CM_CTRLA) 400ns - 800ns hold time Position */
#define SERCOM_I2CM_CTRLA_MEXTTOEN_Pos        _UINT32_(22)                                         /* (SERCOM_I2CM_CTRLA) Master SCL Low Extend Timeout Position */
#define SERCOM_I2CM_CTRLA_MEXTTOEN_Msk        (_UINT32_(0x1) << SERCOM_I2CM_CTRLA_MEXTTOEN_Pos)    /* (SERCOM_I2CM_CTRLA) Master SCL Low Extend Timeout Mask */
#define SERCOM_I2CM_CTRLA_MEXTTOEN(value)     (SERCOM_I2CM_CTRLA_MEXTTOEN_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_MEXTTOEN_Pos)) /* Assignment of value for MEXTTOEN in the SERCOM_I2CM_CTRLA register */
#define SERCOM_I2CM_CTRLA_SEXTTOEN_Pos        _UINT32_(23)                                         /* (SERCOM_I2CM_CTRLA) Slave SCL Low Extend Timeout Position */
#define SERCOM_I2CM_CTRLA_SEXTTOEN_Msk        (_UINT32_(0x1) << SERCOM_I2CM_CTRLA_SEXTTOEN_Pos)    /* (SERCOM_I2CM_CTRLA) Slave SCL Low Extend Timeout Mask */
#define SERCOM_I2CM_CTRLA_SEXTTOEN(value)     (SERCOM_I2CM_CTRLA_SEXTTOEN_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_SEXTTOEN_Pos)) /* Assignment of value for SEXTTOEN in the SERCOM_I2CM_CTRLA register */
#define SERCOM_I2CM_CTRLA_SPEED_Pos           _UINT32_(24)                                         /* (SERCOM_I2CM_CTRLA) Transfer Speed Position */
#define SERCOM_I2CM_CTRLA_SPEED_Msk           (_UINT32_(0x3) << SERCOM_I2CM_CTRLA_SPEED_Pos)       /* (SERCOM_I2CM_CTRLA) Transfer Speed Mask */
#define SERCOM_I2CM_CTRLA_SPEED(value)        (SERCOM_I2CM_CTRLA_SPEED_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_SPEED_Pos)) /* Assignment of value for SPEED in the SERCOM_I2CM_CTRLA register */
#define   SERCOM_I2CM_CTRLA_SPEED_SM_Val      _UINT32_(0x0)                                        /* (SERCOM_I2CM_CTRLA) Standard-Mode (SM) and Fast-Mode (FM)  */
#define   SERCOM_I2CM_CTRLA_SPEED_FMP_Val     _UINT32_(0x1)                                        /* (SERCOM_I2CM_CTRLA) Fast-Mode Plus (FM+)  */
#define   SERCOM_I2CM_CTRLA_SPEED_HS_Val      _UINT32_(0x2)                                        /* (SERCOM_I2CM_CTRLA) High-Speed Mode  */
#define SERCOM_I2CM_CTRLA_SPEED_SM            (SERCOM_I2CM_CTRLA_SPEED_SM_Val << SERCOM_I2CM_CTRLA_SPEED_Pos) /* (SERCOM_I2CM_CTRLA) Standard-Mode (SM) and Fast-Mode (FM) Position */
#define SERCOM_I2CM_CTRLA_SPEED_FMP           (SERCOM_I2CM_CTRLA_SPEED_FMP_Val << SERCOM_I2CM_CTRLA_SPEED_Pos) /* (SERCOM_I2CM_CTRLA) Fast-Mode Plus (FM+) Position */
#define SERCOM_I2CM_CTRLA_SPEED_HS            (SERCOM_I2CM_CTRLA_SPEED_HS_Val << SERCOM_I2CM_CTRLA_SPEED_Pos) /* (SERCOM_I2CM_CTRLA) High-Speed Mode Position */
#define SERCOM_I2CM_CTRLA_SCLSM_Pos           _UINT32_(27)                                         /* (SERCOM_I2CM_CTRLA) SCL Clock Stretch Mode Position */
#define SERCOM_I2CM_CTRLA_SCLSM_Msk           (_UINT32_(0x1) << SERCOM_I2CM_CTRLA_SCLSM_Pos)       /* (SERCOM_I2CM_CTRLA) SCL Clock Stretch Mode Mask */
#define SERCOM_I2CM_CTRLA_SCLSM(value)        (SERCOM_I2CM_CTRLA_SCLSM_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_SCLSM_Pos)) /* Assignment of value for SCLSM in the SERCOM_I2CM_CTRLA register */
#define SERCOM_I2CM_CTRLA_INACTOUT_Pos        _UINT32_(28)                                         /* (SERCOM_I2CM_CTRLA) Inactive Time-Out Position */
#define SERCOM_I2CM_CTRLA_INACTOUT_Msk        (_UINT32_(0x3) << SERCOM_I2CM_CTRLA_INACTOUT_Pos)    /* (SERCOM_I2CM_CTRLA) Inactive Time-Out Mask */
#define SERCOM_I2CM_CTRLA_INACTOUT(value)     (SERCOM_I2CM_CTRLA_INACTOUT_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_INACTOUT_Pos)) /* Assignment of value for INACTOUT in the SERCOM_I2CM_CTRLA register */
#define   SERCOM_I2CM_CTRLA_INACTOUT_DIS_Val  _UINT32_(0x0)                                        /* (SERCOM_I2CM_CTRLA) Disable  */
#define   SERCOM_I2CM_CTRLA_INACTOUT_55US_Val _UINT32_(0x1)                                        /* (SERCOM_I2CM_CTRLA) 5-6 SCL cycle time-out  */
#define   SERCOM_I2CM_CTRLA_INACTOUT_105US_Val _UINT32_(0x2)                                        /* (SERCOM_I2CM_CTRLA) 10-11 SCL cycle time-out  */
#define   SERCOM_I2CM_CTRLA_INACTOUT_205US_Val _UINT32_(0x3)                                        /* (SERCOM_I2CM_CTRLA) 20-21-6 SCL cycle time-out  */
#define SERCOM_I2CM_CTRLA_INACTOUT_DIS        (SERCOM_I2CM_CTRLA_INACTOUT_DIS_Val << SERCOM_I2CM_CTRLA_INACTOUT_Pos) /* (SERCOM_I2CM_CTRLA) Disable Position */
#define SERCOM_I2CM_CTRLA_INACTOUT_55US       (SERCOM_I2CM_CTRLA_INACTOUT_55US_Val << SERCOM_I2CM_CTRLA_INACTOUT_Pos) /* (SERCOM_I2CM_CTRLA) 5-6 SCL cycle time-out Position */
#define SERCOM_I2CM_CTRLA_INACTOUT_105US      (SERCOM_I2CM_CTRLA_INACTOUT_105US_Val << SERCOM_I2CM_CTRLA_INACTOUT_Pos) /* (SERCOM_I2CM_CTRLA) 10-11 SCL cycle time-out Position */
#define SERCOM_I2CM_CTRLA_INACTOUT_205US      (SERCOM_I2CM_CTRLA_INACTOUT_205US_Val << SERCOM_I2CM_CTRLA_INACTOUT_Pos) /* (SERCOM_I2CM_CTRLA) 20-21-6 SCL cycle time-out Position */
#define SERCOM_I2CM_CTRLA_LOWTOUTEN_Pos       _UINT32_(30)                                         /* (SERCOM_I2CM_CTRLA) SCL Low Timeout Enable Position */
#define SERCOM_I2CM_CTRLA_LOWTOUTEN_Msk       (_UINT32_(0x1) << SERCOM_I2CM_CTRLA_LOWTOUTEN_Pos)   /* (SERCOM_I2CM_CTRLA) SCL Low Timeout Enable Mask */
#define SERCOM_I2CM_CTRLA_LOWTOUTEN(value)    (SERCOM_I2CM_CTRLA_LOWTOUTEN_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLA_LOWTOUTEN_Pos)) /* Assignment of value for LOWTOUTEN in the SERCOM_I2CM_CTRLA register */
#define SERCOM_I2CM_CTRLA_Msk                 _UINT32_(0x7BF30F9F)                                 /* (SERCOM_I2CM_CTRLA) Register Mask  */


/* -------- SERCOM_I2CS_CTRLA : (SERCOM Offset: 0x00) (R/W 32) I2CS Control A -------- */
#define SERCOM_I2CS_CTRLA_RESETVALUE          _UINT32_(0x00)                                       /*  (SERCOM_I2CS_CTRLA) I2CS Control A  Reset Value */

#define SERCOM_I2CS_CTRLA_SWRST_Pos           _UINT32_(0)                                          /* (SERCOM_I2CS_CTRLA) Software Reset Position */
#define SERCOM_I2CS_CTRLA_SWRST_Msk           (_UINT32_(0x1) << SERCOM_I2CS_CTRLA_SWRST_Pos)       /* (SERCOM_I2CS_CTRLA) Software Reset Mask */
#define SERCOM_I2CS_CTRLA_SWRST(value)        (SERCOM_I2CS_CTRLA_SWRST_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_SWRST_Pos)) /* Assignment of value for SWRST in the SERCOM_I2CS_CTRLA register */
#define SERCOM_I2CS_CTRLA_ENABLE_Pos          _UINT32_(1)                                          /* (SERCOM_I2CS_CTRLA) Enable Position */
#define SERCOM_I2CS_CTRLA_ENABLE_Msk          (_UINT32_(0x1) << SERCOM_I2CS_CTRLA_ENABLE_Pos)      /* (SERCOM_I2CS_CTRLA) Enable Mask */
#define SERCOM_I2CS_CTRLA_ENABLE(value)       (SERCOM_I2CS_CTRLA_ENABLE_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_ENABLE_Pos)) /* Assignment of value for ENABLE in the SERCOM_I2CS_CTRLA register */
#define SERCOM_I2CS_CTRLA_MODE_Pos            _UINT32_(2)                                          /* (SERCOM_I2CS_CTRLA) Operating Mode Position */
#define SERCOM_I2CS_CTRLA_MODE_Msk            (_UINT32_(0x7) << SERCOM_I2CS_CTRLA_MODE_Pos)        /* (SERCOM_I2CS_CTRLA) Operating Mode Mask */
#define SERCOM_I2CS_CTRLA_MODE(value)         (SERCOM_I2CS_CTRLA_MODE_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_MODE_Pos)) /* Assignment of value for MODE in the SERCOM_I2CS_CTRLA register */
#define   SERCOM_I2CS_CTRLA_MODE_USART_EXT_CLK_Val _UINT32_(0x0)                                        /* (SERCOM_I2CS_CTRLA) USART with external clock  */
#define   SERCOM_I2CS_CTRLA_MODE_USART_INT_CLK_Val _UINT32_(0x1)                                        /* (SERCOM_I2CS_CTRLA) USART with internal clock  */
#define   SERCOM_I2CS_CTRLA_MODE_SPI_SLAVE_Val _UINT32_(0x2)                                        /* (SERCOM_I2CS_CTRLA) SPI in slave operation  */
#define   SERCOM_I2CS_CTRLA_MODE_SPI_MASTER_Val _UINT32_(0x3)                                        /* (SERCOM_I2CS_CTRLA) SPI in master operation  */
#define   SERCOM_I2CS_CTRLA_MODE_I2C_SLAVE_Val _UINT32_(0x4)                                        /* (SERCOM_I2CS_CTRLA) I2C slave operation  */
#define   SERCOM_I2CS_CTRLA_MODE_I2C_MASTER_Val _UINT32_(0x5)                                        /* (SERCOM_I2CS_CTRLA) I2C master operation  */
#define SERCOM_I2CS_CTRLA_MODE_USART_EXT_CLK  (SERCOM_I2CS_CTRLA_MODE_USART_EXT_CLK_Val << SERCOM_I2CS_CTRLA_MODE_Pos) /* (SERCOM_I2CS_CTRLA) USART with external clock Position */
#define SERCOM_I2CS_CTRLA_MODE_USART_INT_CLK  (SERCOM_I2CS_CTRLA_MODE_USART_INT_CLK_Val << SERCOM_I2CS_CTRLA_MODE_Pos) /* (SERCOM_I2CS_CTRLA) USART with internal clock Position */
#define SERCOM_I2CS_CTRLA_MODE_SPI_SLAVE      (SERCOM_I2CS_CTRLA_MODE_SPI_SLAVE_Val << SERCOM_I2CS_CTRLA_MODE_Pos) /* (SERCOM_I2CS_CTRLA) SPI in slave operation Position */
#define SERCOM_I2CS_CTRLA_MODE_SPI_MASTER     (SERCOM_I2CS_CTRLA_MODE_SPI_MASTER_Val << SERCOM_I2CS_CTRLA_MODE_Pos) /* (SERCOM_I2CS_CTRLA) SPI in master operation Position */
#define SERCOM_I2CS_CTRLA_MODE_I2C_SLAVE      (SERCOM_I2CS_CTRLA_MODE_I2C_SLAVE_Val << SERCOM_I2CS_CTRLA_MODE_Pos) /* (SERCOM_I2CS_CTRLA) I2C slave operation Position */
#define SERCOM_I2CS_CTRLA_MODE_I2C_MASTER     (SERCOM_I2CS_CTRLA_MODE_I2C_MASTER_Val << SERCOM_I2CS_CTRLA_MODE_Pos) /* (SERCOM_I2CS_CTRLA) I2C master operation Position */
#define SERCOM_I2CS_CTRLA_RUNSTDBY_Pos        _UINT32_(7)                                          /* (SERCOM_I2CS_CTRLA) Run during Standby Position */
#define SERCOM_I2CS_CTRLA_RUNSTDBY_Msk        (_UINT32_(0x1) << SERCOM_I2CS_CTRLA_RUNSTDBY_Pos)    /* (SERCOM_I2CS_CTRLA) Run during Standby Mask */
#define SERCOM_I2CS_CTRLA_RUNSTDBY(value)     (SERCOM_I2CS_CTRLA_RUNSTDBY_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_RUNSTDBY_Pos)) /* Assignment of value for RUNSTDBY in the SERCOM_I2CS_CTRLA register */
#define SERCOM_I2CS_CTRLA_FILTSEL_Pos         _UINT32_(8)                                          /* (SERCOM_I2CS_CTRLA) Input Filter Selection Position */
#define SERCOM_I2CS_CTRLA_FILTSEL_Msk         (_UINT32_(0x3) << SERCOM_I2CS_CTRLA_FILTSEL_Pos)     /* (SERCOM_I2CS_CTRLA) Input Filter Selection Mask */
#define SERCOM_I2CS_CTRLA_FILTSEL(value)      (SERCOM_I2CS_CTRLA_FILTSEL_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_FILTSEL_Pos)) /* Assignment of value for FILTSEL in the SERCOM_I2CS_CTRLA register */
#define SERCOM_I2CS_CTRLA_SLEWRATE_Pos        _UINT32_(10)                                         /* (SERCOM_I2CS_CTRLA) Slew Rate Selection Position */
#define SERCOM_I2CS_CTRLA_SLEWRATE_Msk        (_UINT32_(0x3) << SERCOM_I2CS_CTRLA_SLEWRATE_Pos)    /* (SERCOM_I2CS_CTRLA) Slew Rate Selection Mask */
#define SERCOM_I2CS_CTRLA_SLEWRATE(value)     (SERCOM_I2CS_CTRLA_SLEWRATE_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_SLEWRATE_Pos)) /* Assignment of value for SLEWRATE in the SERCOM_I2CS_CTRLA register */
#define   SERCOM_I2CS_CTRLA_SLEWRATE_SM_Val   _UINT32_(0x0)                                        /* (SERCOM_I2CS_CTRLA) Standard mode  */
#define   SERCOM_I2CS_CTRLA_SLEWRATE_FM_Val   _UINT32_(0x1)                                        /* (SERCOM_I2CS_CTRLA) Fast mode  */
#define   SERCOM_I2CS_CTRLA_SLEWRATE_FMP_Val  _UINT32_(0x2)                                        /* (SERCOM_I2CS_CTRLA) Fast mode plus  */
#define   SERCOM_I2CS_CTRLA_SLEWRATE_HS_Val   _UINT32_(0x3)                                        /* (SERCOM_I2CS_CTRLA) High-speed mode  */
#define SERCOM_I2CS_CTRLA_SLEWRATE_SM         (SERCOM_I2CS_CTRLA_SLEWRATE_SM_Val << SERCOM_I2CS_CTRLA_SLEWRATE_Pos) /* (SERCOM_I2CS_CTRLA) Standard mode Position */
#define SERCOM_I2CS_CTRLA_SLEWRATE_FM         (SERCOM_I2CS_CTRLA_SLEWRATE_FM_Val << SERCOM_I2CS_CTRLA_SLEWRATE_Pos) /* (SERCOM_I2CS_CTRLA) Fast mode Position */
#define SERCOM_I2CS_CTRLA_SLEWRATE_FMP        (SERCOM_I2CS_CTRLA_SLEWRATE_FMP_Val << SERCOM_I2CS_CTRLA_SLEWRATE_Pos) /* (SERCOM_I2CS_CTRLA) Fast mode plus Position */
#define SERCOM_I2CS_CTRLA_SLEWRATE_HS         (SERCOM_I2CS_CTRLA_SLEWRATE_HS_Val << SERCOM_I2CS_CTRLA_SLEWRATE_Pos) /* (SERCOM_I2CS_CTRLA) High-speed mode Position */
#define SERCOM_I2CS_CTRLA_PINOUT_Pos          _UINT32_(16)                                         /* (SERCOM_I2CS_CTRLA) Pin Usage Position */
#define SERCOM_I2CS_CTRLA_PINOUT_Msk          (_UINT32_(0x1) << SERCOM_I2CS_CTRLA_PINOUT_Pos)      /* (SERCOM_I2CS_CTRLA) Pin Usage Mask */
#define SERCOM_I2CS_CTRLA_PINOUT(value)       (SERCOM_I2CS_CTRLA_PINOUT_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_PINOUT_Pos)) /* Assignment of value for PINOUT in the SERCOM_I2CS_CTRLA register */
#define SERCOM_I2CS_CTRLA_SMBUSEN_Pos         _UINT32_(17)                                         /* (SERCOM_I2CS_CTRLA) SMBUS Input Buffer Enable Position */
#define SERCOM_I2CS_CTRLA_SMBUSEN_Msk         (_UINT32_(0x1) << SERCOM_I2CS_CTRLA_SMBUSEN_Pos)     /* (SERCOM_I2CS_CTRLA) SMBUS Input Buffer Enable Mask */
#define SERCOM_I2CS_CTRLA_SMBUSEN(value)      (SERCOM_I2CS_CTRLA_SMBUSEN_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_SMBUSEN_Pos)) /* Assignment of value for SMBUSEN in the SERCOM_I2CS_CTRLA register */
#define SERCOM_I2CS_CTRLA_SDAHOLD_Pos         _UINT32_(20)                                         /* (SERCOM_I2CS_CTRLA) SDA Hold Time Position */
#define SERCOM_I2CS_CTRLA_SDAHOLD_Msk         (_UINT32_(0x3) << SERCOM_I2CS_CTRLA_SDAHOLD_Pos)     /* (SERCOM_I2CS_CTRLA) SDA Hold Time Mask */
#define SERCOM_I2CS_CTRLA_SDAHOLD(value)      (SERCOM_I2CS_CTRLA_SDAHOLD_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_SDAHOLD_Pos)) /* Assignment of value for SDAHOLD in the SERCOM_I2CS_CTRLA register */
#define   SERCOM_I2CS_CTRLA_SDAHOLD_DIS_Val   _UINT32_(0x0)                                        /* (SERCOM_I2CS_CTRLA) Disable  */
#define   SERCOM_I2CS_CTRLA_SDAHOLD_75NS_Val  _UINT32_(0x1)                                        /* (SERCOM_I2CS_CTRLA) 50ns - 100ns hold time  */
#define   SERCOM_I2CS_CTRLA_SDAHOLD_450NS_Val _UINT32_(0x2)                                        /* (SERCOM_I2CS_CTRLA) 300ns - 600ns hold time  */
#define   SERCOM_I2CS_CTRLA_SDAHOLD_600NS_Val _UINT32_(0x3)                                        /* (SERCOM_I2CS_CTRLA) 400ns - 800ns hold time  */
#define SERCOM_I2CS_CTRLA_SDAHOLD_DIS         (SERCOM_I2CS_CTRLA_SDAHOLD_DIS_Val << SERCOM_I2CS_CTRLA_SDAHOLD_Pos) /* (SERCOM_I2CS_CTRLA) Disable Position */
#define SERCOM_I2CS_CTRLA_SDAHOLD_75NS        (SERCOM_I2CS_CTRLA_SDAHOLD_75NS_Val << SERCOM_I2CS_CTRLA_SDAHOLD_Pos) /* (SERCOM_I2CS_CTRLA) 50ns - 100ns hold time Position */
#define SERCOM_I2CS_CTRLA_SDAHOLD_450NS       (SERCOM_I2CS_CTRLA_SDAHOLD_450NS_Val << SERCOM_I2CS_CTRLA_SDAHOLD_Pos) /* (SERCOM_I2CS_CTRLA) 300ns - 600ns hold time Position */
#define SERCOM_I2CS_CTRLA_SDAHOLD_600NS       (SERCOM_I2CS_CTRLA_SDAHOLD_600NS_Val << SERCOM_I2CS_CTRLA_SDAHOLD_Pos) /* (SERCOM_I2CS_CTRLA) 400ns - 800ns hold time Position */
#define SERCOM_I2CS_CTRLA_SEXTTOEN_Pos        _UINT32_(23)                                         /* (SERCOM_I2CS_CTRLA) Slave SCL Low Extend Timeout Position */
#define SERCOM_I2CS_CTRLA_SEXTTOEN_Msk        (_UINT32_(0x1) << SERCOM_I2CS_CTRLA_SEXTTOEN_Pos)    /* (SERCOM_I2CS_CTRLA) Slave SCL Low Extend Timeout Mask */
#define SERCOM_I2CS_CTRLA_SEXTTOEN(value)     (SERCOM_I2CS_CTRLA_SEXTTOEN_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_SEXTTOEN_Pos)) /* Assignment of value for SEXTTOEN in the SERCOM_I2CS_CTRLA register */
#define SERCOM_I2CS_CTRLA_SPEED_Pos           _UINT32_(24)                                         /* (SERCOM_I2CS_CTRLA) Transfer Speed Position */
#define SERCOM_I2CS_CTRLA_SPEED_Msk           (_UINT32_(0x3) << SERCOM_I2CS_CTRLA_SPEED_Pos)       /* (SERCOM_I2CS_CTRLA) Transfer Speed Mask */
#define SERCOM_I2CS_CTRLA_SPEED(value)        (SERCOM_I2CS_CTRLA_SPEED_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_SPEED_Pos)) /* Assignment of value for SPEED in the SERCOM_I2CS_CTRLA register */
#define   SERCOM_I2CS_CTRLA_SPEED_SM_Val      _UINT32_(0x0)                                        /* (SERCOM_I2CS_CTRLA) Standard-Mode (SM) and Fast-Mode (FM)  */
#define   SERCOM_I2CS_CTRLA_SPEED_FMP_Val     _UINT32_(0x1)                                        /* (SERCOM_I2CS_CTRLA) Fast-Mode Plus (FM+)  */
#define   SERCOM_I2CS_CTRLA_SPEED_HS_Val      _UINT32_(0x2)                                        /* (SERCOM_I2CS_CTRLA) High-Speed Mode  */
#define SERCOM_I2CS_CTRLA_SPEED_SM            (SERCOM_I2CS_CTRLA_SPEED_SM_Val << SERCOM_I2CS_CTRLA_SPEED_Pos) /* (SERCOM_I2CS_CTRLA) Standard-Mode (SM) and Fast-Mode (FM) Position */
#define SERCOM_I2CS_CTRLA_SPEED_FMP           (SERCOM_I2CS_CTRLA_SPEED_FMP_Val << SERCOM_I2CS_CTRLA_SPEED_Pos) /* (SERCOM_I2CS_CTRLA) Fast-Mode Plus (FM+) Position */
#define SERCOM_I2CS_CTRLA_SPEED_HS            (SERCOM_I2CS_CTRLA_SPEED_HS_Val << SERCOM_I2CS_CTRLA_SPEED_Pos) /* (SERCOM_I2CS_CTRLA) High-Speed Mode Position */
#define SERCOM_I2CS_CTRLA_SCLSM_Pos           _UINT32_(27)                                         /* (SERCOM_I2CS_CTRLA) SCL Clock Stretch Mode Position */
#define SERCOM_I2CS_CTRLA_SCLSM_Msk           (_UINT32_(0x1) << SERCOM_I2CS_CTRLA_SCLSM_Pos)       /* (SERCOM_I2CS_CTRLA) SCL Clock Stretch Mode Mask */
#define SERCOM_I2CS_CTRLA_SCLSM(value)        (SERCOM_I2CS_CTRLA_SCLSM_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_SCLSM_Pos)) /* Assignment of value for SCLSM in the SERCOM_I2CS_CTRLA register */
#define SERCOM_I2CS_CTRLA_LOWTOUTEN_Pos       _UINT32_(30)                                         /* (SERCOM_I2CS_CTRLA) SCL Low Timeout Enable Position */
#define SERCOM_I2CS_CTRLA_LOWTOUTEN_Msk       (_UINT32_(0x1) << SERCOM_I2CS_CTRLA_LOWTOUTEN_Pos)   /* (SERCOM_I2CS_CTRLA) SCL Low Timeout Enable Mask */
#define SERCOM_I2CS_CTRLA_LOWTOUTEN(value)    (SERCOM_I2CS_CTRLA_LOWTOUTEN_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLA_LOWTOUTEN_Pos)) /* Assignment of value for LOWTOUTEN in the SERCOM_I2CS_CTRLA register */
#define SERCOM_I2CS_CTRLA_Msk                 _UINT32_(0x4BB30F9F)                                 /* (SERCOM_I2CS_CTRLA) Register Mask  */


/* -------- SERCOM_SPIM_CTRLA : (SERCOM Offset: 0x00) (R/W 32) SPIM Control A -------- */
#define SERCOM_SPIM_CTRLA_RESETVALUE          _UINT32_(0x00)                                       /*  (SERCOM_SPIM_CTRLA) SPIM Control A  Reset Value */

#define SERCOM_SPIM_CTRLA_SWRST_Pos           _UINT32_(0)                                          /* (SERCOM_SPIM_CTRLA) Software Reset Position */
#define SERCOM_SPIM_CTRLA_SWRST_Msk           (_UINT32_(0x1) << SERCOM_SPIM_CTRLA_SWRST_Pos)       /* (SERCOM_SPIM_CTRLA) Software Reset Mask */
#define SERCOM_SPIM_CTRLA_SWRST(value)        (SERCOM_SPIM_CTRLA_SWRST_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLA_SWRST_Pos)) /* Assignment of value for SWRST in the SERCOM_SPIM_CTRLA register */
#define SERCOM_SPIM_CTRLA_ENABLE_Pos          _UINT32_(1)                                          /* (SERCOM_SPIM_CTRLA) Enable Position */
#define SERCOM_SPIM_CTRLA_ENABLE_Msk          (_UINT32_(0x1) << SERCOM_SPIM_CTRLA_ENABLE_Pos)      /* (SERCOM_SPIM_CTRLA) Enable Mask */
#define SERCOM_SPIM_CTRLA_ENABLE(value)       (SERCOM_SPIM_CTRLA_ENABLE_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLA_ENABLE_Pos)) /* Assignment of value for ENABLE in the SERCOM_SPIM_CTRLA register */
#define SERCOM_SPIM_CTRLA_MODE_Pos            _UINT32_(2)                                          /* (SERCOM_SPIM_CTRLA) Operating Mode Position */
#define SERCOM_SPIM_CTRLA_MODE_Msk            (_UINT32_(0x7) << SERCOM_SPIM_CTRLA_MODE_Pos)        /* (SERCOM_SPIM_CTRLA) Operating Mode Mask */
#define SERCOM_SPIM_CTRLA_MODE(value)         (SERCOM_SPIM_CTRLA_MODE_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLA_MODE_Pos)) /* Assignment of value for MODE in the SERCOM_SPIM_CTRLA register */
#define   SERCOM_SPIM_CTRLA_MODE_USART_EXT_CLK_Val _UINT32_(0x0)                                        /* (SERCOM_SPIM_CTRLA) USART with external clock  */
#define   SERCOM_SPIM_CTRLA_MODE_USART_INT_CLK_Val _UINT32_(0x1)                                        /* (SERCOM_SPIM_CTRLA) USART with internal clock  */
#define   SERCOM_SPIM_CTRLA_MODE_SPI_SLAVE_Val _UINT32_(0x2)                                        /* (SERCOM_SPIM_CTRLA) SPI in slave operation  */
#define   SERCOM_SPIM_CTRLA_MODE_SPI_MASTER_Val _UINT32_(0x3)                                        /* (SERCOM_SPIM_CTRLA) SPI in master operation  */
#define   SERCOM_SPIM_CTRLA_MODE_I2C_SLAVE_Val _UINT32_(0x4)                                        /* (SERCOM_SPIM_CTRLA) I2C slave operation  */
#define   SERCOM_SPIM_CTRLA_MODE_I2C_MASTER_Val _UINT32_(0x5)                                        /* (SERCOM_SPIM_CTRLA) I2C master operation  */
#define SERCOM_SPIM_CTRLA_MODE_USART_EXT_CLK  (SERCOM_SPIM_CTRLA_MODE_USART_EXT_CLK_Val << SERCOM_SPIM_CTRLA_MODE_Pos) /* (SERCOM_SPIM_CTRLA) USART with external clock Position */
#define SERCOM_SPIM_CTRLA_MODE_USART_INT_CLK  (SERCOM_SPIM_CTRLA_MODE_USART_INT_CLK_Val << SERCOM_SPIM_CTRLA_MODE_Pos) /* (SERCOM_SPIM_CTRLA) USART with internal clock Position */
#define SERCOM_SPIM_CTRLA_MODE_SPI_SLAVE      (SERCOM_SPIM_CTRLA_MODE_SPI_SLAVE_Val << SERCOM_SPIM_CTRLA_MODE_Pos) /* (SERCOM_SPIM_CTRLA) SPI in slave operation Position */
#define SERCOM_SPIM_CTRLA_MODE_SPI_MASTER     (SERCOM_SPIM_CTRLA_MODE_SPI_MASTER_Val << SERCOM_SPIM_CTRLA_MODE_Pos) /* (SERCOM_SPIM_CTRLA) SPI in master operation Position */
#define SERCOM_SPIM_CTRLA_MODE_I2C_SLAVE      (SERCOM_SPIM_CTRLA_MODE_I2C_SLAVE_Val << SERCOM_SPIM_CTRLA_MODE_Pos) /* (SERCOM_SPIM_CTRLA) I2C slave operation Position */
#define SERCOM_SPIM_CTRLA_MODE_I2C_MASTER     (SERCOM_SPIM_CTRLA_MODE_I2C_MASTER_Val << SERCOM_SPIM_CTRLA_MODE_Pos) /* (SERCOM_SPIM_CTRLA) I2C master operation Position */
#define SERCOM_SPIM_CTRLA_RUNSTDBY_Pos        _UINT32_(7)                                          /* (SERCOM_SPIM_CTRLA) Run during Standby Position */
#define SERCOM_SPIM_CTRLA_RUNSTDBY_Msk        (_UINT32_(0x1) << SERCOM_SPIM_CTRLA_RUNSTDBY_Pos)    /* (SERCOM_SPIM_CTRLA) Run during Standby Mask */
#define SERCOM_SPIM_CTRLA_RUNSTDBY(value)     (SERCOM_SPIM_CTRLA_RUNSTDBY_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLA_RUNSTDBY_Pos)) /* Assignment of value for RUNSTDBY in the SERCOM_SPIM_CTRLA register */
#define SERCOM_SPIM_CTRLA_IBON_Pos            _UINT32_(8)                                          /* (SERCOM_SPIM_CTRLA) Immediate Buffer Overflow Notification Position */
#define SERCOM_SPIM_CTRLA_IBON_Msk            (_UINT32_(0x1) << SERCOM_SPIM_CTRLA_IBON_Pos)        /* (SERCOM_SPIM_CTRLA) Immediate Buffer Overflow Notification Mask */
#define SERCOM_SPIM_CTRLA_IBON(value)         (SERCOM_SPIM_CTRLA_IBON_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLA_IBON_Pos)) /* Assignment of value for IBON in the SERCOM_SPIM_CTRLA register */
#define SERCOM_SPIM_CTRLA_DOPO_Pos            _UINT32_(16)                                         /* (SERCOM_SPIM_CTRLA) Data Out Pinout Position */
#define SERCOM_SPIM_CTRLA_DOPO_Msk            (_UINT32_(0x3) << SERCOM_SPIM_CTRLA_DOPO_Pos)        /* (SERCOM_SPIM_CTRLA) Data Out Pinout Mask */
#define SERCOM_SPIM_CTRLA_DOPO(value)         (SERCOM_SPIM_CTRLA_DOPO_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLA_DOPO_Pos)) /* Assignment of value for DOPO in the SERCOM_SPIM_CTRLA register */
#define   SERCOM_SPIM_CTRLA_DOPO_PAD0_Val     _UINT32_(0x0)                                        /* (SERCOM_SPIM_CTRLA) DO on PAD[0], SCK on PAD[1] and SS on PAD[2]  */
#define   SERCOM_SPIM_CTRLA_DOPO_PAD2_Val     _UINT32_(0x2)                                        /* (SERCOM_SPIM_CTRLA) DO on PAD[3], SCK on PAD[1] and SS on PAD[2]  */
#define SERCOM_SPIM_CTRLA_DOPO_PAD0           (SERCOM_SPIM_CTRLA_DOPO_PAD0_Val << SERCOM_SPIM_CTRLA_DOPO_Pos) /* (SERCOM_SPIM_CTRLA) DO on PAD[0], SCK on PAD[1] and SS on PAD[2] Position */
#define SERCOM_SPIM_CTRLA_DOPO_PAD2           (SERCOM_SPIM_CTRLA_DOPO_PAD2_Val << SERCOM_SPIM_CTRLA_DOPO_Pos) /* (SERCOM_SPIM_CTRLA) DO on PAD[3], SCK on PAD[1] and SS on PAD[2] Position */
#define SERCOM_SPIM_CTRLA_DIPO_Pos            _UINT32_(20)                                         /* (SERCOM_SPIM_CTRLA) Data In Pinout Position */
#define SERCOM_SPIM_CTRLA_DIPO_Msk            (_UINT32_(0x3) << SERCOM_SPIM_CTRLA_DIPO_Pos)        /* (SERCOM_SPIM_CTRLA) Data In Pinout Mask */
#define SERCOM_SPIM_CTRLA_DIPO(value)         (SERCOM_SPIM_CTRLA_DIPO_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLA_DIPO_Pos)) /* Assignment of value for DIPO in the SERCOM_SPIM_CTRLA register */
#define   SERCOM_SPIM_CTRLA_DIPO_PAD0_Val     _UINT32_(0x0)                                        /* (SERCOM_SPIM_CTRLA) SERCOM PAD0 is used as data input  */
#define   SERCOM_SPIM_CTRLA_DIPO_PAD1_Val     _UINT32_(0x1)                                        /* (SERCOM_SPIM_CTRLA) SERCOM PAD1 is used as data input  */
#define   SERCOM_SPIM_CTRLA_DIPO_PAD2_Val     _UINT32_(0x2)                                        /* (SERCOM_SPIM_CTRLA) SERCOM PAD2 is used as data input  */
#define   SERCOM_SPIM_CTRLA_DIPO_PAD3_Val     _UINT32_(0x3)                                        /* (SERCOM_SPIM_CTRLA) SERCOM PAD3 is used as data input  */
#define SERCOM_SPIM_CTRLA_DIPO_PAD0           (SERCOM_SPIM_CTRLA_DIPO_PAD0_Val << SERCOM_SPIM_CTRLA_DIPO_Pos) /* (SERCOM_SPIM_CTRLA) SERCOM PAD0 is used as data input Position */
#define SERCOM_SPIM_CTRLA_DIPO_PAD1           (SERCOM_SPIM_CTRLA_DIPO_PAD1_Val << SERCOM_SPIM_CTRLA_DIPO_Pos) /* (SERCOM_SPIM_CTRLA) SERCOM PAD1 is used as data input Position */
#define SERCOM_SPIM_CTRLA_DIPO_PAD2           (SERCOM_SPIM_CTRLA_DIPO_PAD2_Val << SERCOM_SPIM_CTRLA_DIPO_Pos) /* (SERCOM_SPIM_CTRLA) SERCOM PAD2 is used as data input Position */
#define SERCOM_SPIM_CTRLA_DIPO_PAD3           (SERCOM_SPIM_CTRLA_DIPO_PAD3_Val << SERCOM_SPIM_CTRLA_DIPO_Pos) /* (SERCOM_SPIM_CTRLA) SERCOM PAD3 is used as data input Position */
#define SERCOM_SPIM_CTRLA_FORM_Pos            _UINT32_(24)                                         /* (SERCOM_SPIM_CTRLA) Frame Format Position */
#define SERCOM_SPIM_CTRLA_FORM_Msk            (_UINT32_(0xF) << SERCOM_SPIM_CTRLA_FORM_Pos)        /* (SERCOM_SPIM_CTRLA) Frame Format Mask */
#define SERCOM_SPIM_CTRLA_FORM(value)         (SERCOM_SPIM_CTRLA_FORM_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLA_FORM_Pos)) /* Assignment of value for FORM in the SERCOM_SPIM_CTRLA register */
#define   SERCOM_SPIM_CTRLA_FORM_SPI_Val      _UINT32_(0x0)                                        /* (SERCOM_SPIM_CTRLA) SPI frame  */
#define   SERCOM_SPIM_CTRLA_FORM_ADDR_Val     _UINT32_(0x2)                                        /* (SERCOM_SPIM_CTRLA) SPI frame with address  */
#define SERCOM_SPIM_CTRLA_FORM_SPI            (SERCOM_SPIM_CTRLA_FORM_SPI_Val << SERCOM_SPIM_CTRLA_FORM_Pos) /* (SERCOM_SPIM_CTRLA) SPI frame Position */
#define SERCOM_SPIM_CTRLA_FORM_ADDR           (SERCOM_SPIM_CTRLA_FORM_ADDR_Val << SERCOM_SPIM_CTRLA_FORM_Pos) /* (SERCOM_SPIM_CTRLA) SPI frame with address Position */
#define SERCOM_SPIM_CTRLA_CPHA_Pos            _UINT32_(28)                                         /* (SERCOM_SPIM_CTRLA) Clock Phase Position */
#define SERCOM_SPIM_CTRLA_CPHA_Msk            (_UINT32_(0x1) << SERCOM_SPIM_CTRLA_CPHA_Pos)        /* (SERCOM_SPIM_CTRLA) Clock Phase Mask */
#define SERCOM_SPIM_CTRLA_CPHA(value)         (SERCOM_SPIM_CTRLA_CPHA_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLA_CPHA_Pos)) /* Assignment of value for CPHA in the SERCOM_SPIM_CTRLA register */
#define   SERCOM_SPIM_CTRLA_CPHA_LEADING_EDGE_Val _UINT32_(0x0)                                        /* (SERCOM_SPIM_CTRLA) The data is sampled on a leading SCK edge and changed on a trailing SCK edge  */
#define   SERCOM_SPIM_CTRLA_CPHA_TRAILING_EDGE_Val _UINT32_(0x1)                                        /* (SERCOM_SPIM_CTRLA) The data is sampled on a trailing SCK edge and changed on a leading SCK edge  */
#define SERCOM_SPIM_CTRLA_CPHA_LEADING_EDGE   (SERCOM_SPIM_CTRLA_CPHA_LEADING_EDGE_Val << SERCOM_SPIM_CTRLA_CPHA_Pos) /* (SERCOM_SPIM_CTRLA) The data is sampled on a leading SCK edge and changed on a trailing SCK edge Position */
#define SERCOM_SPIM_CTRLA_CPHA_TRAILING_EDGE  (SERCOM_SPIM_CTRLA_CPHA_TRAILING_EDGE_Val << SERCOM_SPIM_CTRLA_CPHA_Pos) /* (SERCOM_SPIM_CTRLA) The data is sampled on a trailing SCK edge and changed on a leading SCK edge Position */
#define SERCOM_SPIM_CTRLA_CPOL_Pos            _UINT32_(29)                                         /* (SERCOM_SPIM_CTRLA) Clock Polarity Position */
#define SERCOM_SPIM_CTRLA_CPOL_Msk            (_UINT32_(0x1) << SERCOM_SPIM_CTRLA_CPOL_Pos)        /* (SERCOM_SPIM_CTRLA) Clock Polarity Mask */
#define SERCOM_SPIM_CTRLA_CPOL(value)         (SERCOM_SPIM_CTRLA_CPOL_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLA_CPOL_Pos)) /* Assignment of value for CPOL in the SERCOM_SPIM_CTRLA register */
#define   SERCOM_SPIM_CTRLA_CPOL_IDLE_LOW_Val _UINT32_(0x0)                                        /* (SERCOM_SPIM_CTRLA) SCK is low when idle  */
#define   SERCOM_SPIM_CTRLA_CPOL_IDLE_HIGH_Val _UINT32_(0x1)                                        /* (SERCOM_SPIM_CTRLA) SCK is high when idle  */
#define SERCOM_SPIM_CTRLA_CPOL_IDLE_LOW       (SERCOM_SPIM_CTRLA_CPOL_IDLE_LOW_Val << SERCOM_SPIM_CTRLA_CPOL_Pos) /* (SERCOM_SPIM_CTRLA) SCK is low when idle Position */
#define SERCOM_SPIM_CTRLA_CPOL_IDLE_HIGH      (SERCOM_SPIM_CTRLA_CPOL_IDLE_HIGH_Val << SERCOM_SPIM_CTRLA_CPOL_Pos) /* (SERCOM_SPIM_CTRLA) SCK is high when idle Position */
#define SERCOM_SPIM_CTRLA_DORD_Pos            _UINT32_(30)                                         /* (SERCOM_SPIM_CTRLA) Data Order Position */
#define SERCOM_SPIM_CTRLA_DORD_Msk            (_UINT32_(0x1) << SERCOM_SPIM_CTRLA_DORD_Pos)        /* (SERCOM_SPIM_CTRLA) Data Order Mask */
#define SERCOM_SPIM_CTRLA_DORD(value)         (SERCOM_SPIM_CTRLA_DORD_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLA_DORD_Pos)) /* Assignment of value for DORD in the SERCOM_SPIM_CTRLA register */
#define   SERCOM_SPIM_CTRLA_DORD_MSB_Val      _UINT32_(0x0)                                        /* (SERCOM_SPIM_CTRLA) MSB is transmitted first  */
#define   SERCOM_SPIM_CTRLA_DORD_LSB_Val      _UINT32_(0x1)                                        /* (SERCOM_SPIM_CTRLA) LSB is transmitted first  */
#define SERCOM_SPIM_CTRLA_DORD_MSB            (SERCOM_SPIM_CTRLA_DORD_MSB_Val << SERCOM_SPIM_CTRLA_DORD_Pos) /* (SERCOM_SPIM_CTRLA) MSB is transmitted first Position */
#define SERCOM_SPIM_CTRLA_DORD_LSB            (SERCOM_SPIM_CTRLA_DORD_LSB_Val << SERCOM_SPIM_CTRLA_DORD_Pos) /* (SERCOM_SPIM_CTRLA) LSB is transmitted first Position */
#define SERCOM_SPIM_CTRLA_Msk                 _UINT32_(0x7F33019F)                                 /* (SERCOM_SPIM_CTRLA) Register Mask  */


/* -------- SERCOM_SPIS_CTRLA : (SERCOM Offset: 0x00) (R/W 32) SPIS Control A -------- */
#define SERCOM_SPIS_CTRLA_RESETVALUE          _UINT32_(0x00)                                       /*  (SERCOM_SPIS_CTRLA) SPIS Control A  Reset Value */

#define SERCOM_SPIS_CTRLA_SWRST_Pos           _UINT32_(0)                                          /* (SERCOM_SPIS_CTRLA) Software Reset Position */
#define SERCOM_SPIS_CTRLA_SWRST_Msk           (_UINT32_(0x1) << SERCOM_SPIS_CTRLA_SWRST_Pos)       /* (SERCOM_SPIS_CTRLA) Software Reset Mask */
#define SERCOM_SPIS_CTRLA_SWRST(value)        (SERCOM_SPIS_CTRLA_SWRST_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLA_SWRST_Pos)) /* Assignment of value for SWRST in the SERCOM_SPIS_CTRLA register */
#define SERCOM_SPIS_CTRLA_ENABLE_Pos          _UINT32_(1)                                          /* (SERCOM_SPIS_CTRLA) Enable Position */
#define SERCOM_SPIS_CTRLA_ENABLE_Msk          (_UINT32_(0x1) << SERCOM_SPIS_CTRLA_ENABLE_Pos)      /* (SERCOM_SPIS_CTRLA) Enable Mask */
#define SERCOM_SPIS_CTRLA_ENABLE(value)       (SERCOM_SPIS_CTRLA_ENABLE_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLA_ENABLE_Pos)) /* Assignment of value for ENABLE in the SERCOM_SPIS_CTRLA register */
#define SERCOM_SPIS_CTRLA_MODE_Pos            _UINT32_(2)                                          /* (SERCOM_SPIS_CTRLA) Operating Mode Position */
#define SERCOM_SPIS_CTRLA_MODE_Msk            (_UINT32_(0x7) << SERCOM_SPIS_CTRLA_MODE_Pos)        /* (SERCOM_SPIS_CTRLA) Operating Mode Mask */
#define SERCOM_SPIS_CTRLA_MODE(value)         (SERCOM_SPIS_CTRLA_MODE_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLA_MODE_Pos)) /* Assignment of value for MODE in the SERCOM_SPIS_CTRLA register */
#define   SERCOM_SPIS_CTRLA_MODE_USART_EXT_CLK_Val _UINT32_(0x0)                                        /* (SERCOM_SPIS_CTRLA) USART with external clock  */
#define   SERCOM_SPIS_CTRLA_MODE_USART_INT_CLK_Val _UINT32_(0x1)                                        /* (SERCOM_SPIS_CTRLA) USART with internal clock  */
#define   SERCOM_SPIS_CTRLA_MODE_SPI_SLAVE_Val _UINT32_(0x2)                                        /* (SERCOM_SPIS_CTRLA) SPI in slave operation  */
#define   SERCOM_SPIS_CTRLA_MODE_SPI_MASTER_Val _UINT32_(0x3)                                        /* (SERCOM_SPIS_CTRLA) SPI in master operation  */
#define   SERCOM_SPIS_CTRLA_MODE_I2C_SLAVE_Val _UINT32_(0x4)                                        /* (SERCOM_SPIS_CTRLA) I2C slave operation  */
#define   SERCOM_SPIS_CTRLA_MODE_I2C_MASTER_Val _UINT32_(0x5)                                        /* (SERCOM_SPIS_CTRLA) I2C master operation  */
#define SERCOM_SPIS_CTRLA_MODE_USART_EXT_CLK  (SERCOM_SPIS_CTRLA_MODE_USART_EXT_CLK_Val << SERCOM_SPIS_CTRLA_MODE_Pos) /* (SERCOM_SPIS_CTRLA) USART with external clock Position */
#define SERCOM_SPIS_CTRLA_MODE_USART_INT_CLK  (SERCOM_SPIS_CTRLA_MODE_USART_INT_CLK_Val << SERCOM_SPIS_CTRLA_MODE_Pos) /* (SERCOM_SPIS_CTRLA) USART with internal clock Position */
#define SERCOM_SPIS_CTRLA_MODE_SPI_SLAVE      (SERCOM_SPIS_CTRLA_MODE_SPI_SLAVE_Val << SERCOM_SPIS_CTRLA_MODE_Pos) /* (SERCOM_SPIS_CTRLA) SPI in slave operation Position */
#define SERCOM_SPIS_CTRLA_MODE_SPI_MASTER     (SERCOM_SPIS_CTRLA_MODE_SPI_MASTER_Val << SERCOM_SPIS_CTRLA_MODE_Pos) /* (SERCOM_SPIS_CTRLA) SPI in master operation Position */
#define SERCOM_SPIS_CTRLA_MODE_I2C_SLAVE      (SERCOM_SPIS_CTRLA_MODE_I2C_SLAVE_Val << SERCOM_SPIS_CTRLA_MODE_Pos) /* (SERCOM_SPIS_CTRLA) I2C slave operation Position */
#define SERCOM_SPIS_CTRLA_MODE_I2C_MASTER     (SERCOM_SPIS_CTRLA_MODE_I2C_MASTER_Val << SERCOM_SPIS_CTRLA_MODE_Pos) /* (SERCOM_SPIS_CTRLA) I2C master operation Position */
#define SERCOM_SPIS_CTRLA_RUNSTDBY_Pos        _UINT32_(7)                                          /* (SERCOM_SPIS_CTRLA) Run during Standby Position */
#define SERCOM_SPIS_CTRLA_RUNSTDBY_Msk        (_UINT32_(0x1) << SERCOM_SPIS_CTRLA_RUNSTDBY_Pos)    /* (SERCOM_SPIS_CTRLA) Run during Standby Mask */
#define SERCOM_SPIS_CTRLA_RUNSTDBY(value)     (SERCOM_SPIS_CTRLA_RUNSTDBY_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLA_RUNSTDBY_Pos)) /* Assignment of value for RUNSTDBY in the SERCOM_SPIS_CTRLA register */
#define SERCOM_SPIS_CTRLA_IBON_Pos            _UINT32_(8)                                          /* (SERCOM_SPIS_CTRLA) Immediate Buffer Overflow Notification Position */
#define SERCOM_SPIS_CTRLA_IBON_Msk            (_UINT32_(0x1) << SERCOM_SPIS_CTRLA_IBON_Pos)        /* (SERCOM_SPIS_CTRLA) Immediate Buffer Overflow Notification Mask */
#define SERCOM_SPIS_CTRLA_IBON(value)         (SERCOM_SPIS_CTRLA_IBON_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLA_IBON_Pos)) /* Assignment of value for IBON in the SERCOM_SPIS_CTRLA register */
#define SERCOM_SPIS_CTRLA_DOPO_Pos            _UINT32_(16)                                         /* (SERCOM_SPIS_CTRLA) Data Out Pinout Position */
#define SERCOM_SPIS_CTRLA_DOPO_Msk            (_UINT32_(0x3) << SERCOM_SPIS_CTRLA_DOPO_Pos)        /* (SERCOM_SPIS_CTRLA) Data Out Pinout Mask */
#define SERCOM_SPIS_CTRLA_DOPO(value)         (SERCOM_SPIS_CTRLA_DOPO_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLA_DOPO_Pos)) /* Assignment of value for DOPO in the SERCOM_SPIS_CTRLA register */
#define   SERCOM_SPIS_CTRLA_DOPO_PAD0_Val     _UINT32_(0x0)                                        /* (SERCOM_SPIS_CTRLA) DO on PAD[0], SCK on PAD[1] and SS on PAD[2]  */
#define   SERCOM_SPIS_CTRLA_DOPO_PAD2_Val     _UINT32_(0x2)                                        /* (SERCOM_SPIS_CTRLA) DO on PAD[3], SCK on PAD[1] and SS on PAD[2]  */
#define SERCOM_SPIS_CTRLA_DOPO_PAD0           (SERCOM_SPIS_CTRLA_DOPO_PAD0_Val << SERCOM_SPIS_CTRLA_DOPO_Pos) /* (SERCOM_SPIS_CTRLA) DO on PAD[0], SCK on PAD[1] and SS on PAD[2] Position */
#define SERCOM_SPIS_CTRLA_DOPO_PAD2           (SERCOM_SPIS_CTRLA_DOPO_PAD2_Val << SERCOM_SPIS_CTRLA_DOPO_Pos) /* (SERCOM_SPIS_CTRLA) DO on PAD[3], SCK on PAD[1] and SS on PAD[2] Position */
#define SERCOM_SPIS_CTRLA_DIPO_Pos            _UINT32_(20)                                         /* (SERCOM_SPIS_CTRLA) Data In Pinout Position */
#define SERCOM_SPIS_CTRLA_DIPO_Msk            (_UINT32_(0x3) << SERCOM_SPIS_CTRLA_DIPO_Pos)        /* (SERCOM_SPIS_CTRLA) Data In Pinout Mask */
#define SERCOM_SPIS_CTRLA_DIPO(value)         (SERCOM_SPIS_CTRLA_DIPO_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLA_DIPO_Pos)) /* Assignment of value for DIPO in the SERCOM_SPIS_CTRLA register */
#define   SERCOM_SPIS_CTRLA_DIPO_PAD0_Val     _UINT32_(0x0)                                        /* (SERCOM_SPIS_CTRLA) SERCOM PAD0 is used as data input  */
#define   SERCOM_SPIS_CTRLA_DIPO_PAD1_Val     _UINT32_(0x1)                                        /* (SERCOM_SPIS_CTRLA) SERCOM PAD1 is used as data input  */
#define   SERCOM_SPIS_CTRLA_DIPO_PAD2_Val     _UINT32_(0x2)                                        /* (SERCOM_SPIS_CTRLA) SERCOM PAD2 is used as data input  */
#define   SERCOM_SPIS_CTRLA_DIPO_PAD3_Val     _UINT32_(0x3)                                        /* (SERCOM_SPIS_CTRLA) SERCOM PAD3 is used as data input  */
#define SERCOM_SPIS_CTRLA_DIPO_PAD0           (SERCOM_SPIS_CTRLA_DIPO_PAD0_Val << SERCOM_SPIS_CTRLA_DIPO_Pos) /* (SERCOM_SPIS_CTRLA) SERCOM PAD0 is used as data input Position */
#define SERCOM_SPIS_CTRLA_DIPO_PAD1           (SERCOM_SPIS_CTRLA_DIPO_PAD1_Val << SERCOM_SPIS_CTRLA_DIPO_Pos) /* (SERCOM_SPIS_CTRLA) SERCOM PAD1 is used as data input Position */
#define SERCOM_SPIS_CTRLA_DIPO_PAD2           (SERCOM_SPIS_CTRLA_DIPO_PAD2_Val << SERCOM_SPIS_CTRLA_DIPO_Pos) /* (SERCOM_SPIS_CTRLA) SERCOM PAD2 is used as data input Position */
#define SERCOM_SPIS_CTRLA_DIPO_PAD3           (SERCOM_SPIS_CTRLA_DIPO_PAD3_Val << SERCOM_SPIS_CTRLA_DIPO_Pos) /* (SERCOM_SPIS_CTRLA) SERCOM PAD3 is used as data input Position */
#define SERCOM_SPIS_CTRLA_FORM_Pos            _UINT32_(24)                                         /* (SERCOM_SPIS_CTRLA) Frame Format Position */
#define SERCOM_SPIS_CTRLA_FORM_Msk            (_UINT32_(0xF) << SERCOM_SPIS_CTRLA_FORM_Pos)        /* (SERCOM_SPIS_CTRLA) Frame Format Mask */
#define SERCOM_SPIS_CTRLA_FORM(value)         (SERCOM_SPIS_CTRLA_FORM_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLA_FORM_Pos)) /* Assignment of value for FORM in the SERCOM_SPIS_CTRLA register */
#define   SERCOM_SPIS_CTRLA_FORM_SPI_Val      _UINT32_(0x0)                                        /* (SERCOM_SPIS_CTRLA) SPI frame  */
#define   SERCOM_SPIS_CTRLA_FORM_ADDR_Val     _UINT32_(0x2)                                        /* (SERCOM_SPIS_CTRLA) SPI frame with address  */
#define SERCOM_SPIS_CTRLA_FORM_SPI            (SERCOM_SPIS_CTRLA_FORM_SPI_Val << SERCOM_SPIS_CTRLA_FORM_Pos) /* (SERCOM_SPIS_CTRLA) SPI frame Position */
#define SERCOM_SPIS_CTRLA_FORM_ADDR           (SERCOM_SPIS_CTRLA_FORM_ADDR_Val << SERCOM_SPIS_CTRLA_FORM_Pos) /* (SERCOM_SPIS_CTRLA) SPI frame with address Position */
#define SERCOM_SPIS_CTRLA_CPHA_Pos            _UINT32_(28)                                         /* (SERCOM_SPIS_CTRLA) Clock Phase Position */
#define SERCOM_SPIS_CTRLA_CPHA_Msk            (_UINT32_(0x1) << SERCOM_SPIS_CTRLA_CPHA_Pos)        /* (SERCOM_SPIS_CTRLA) Clock Phase Mask */
#define SERCOM_SPIS_CTRLA_CPHA(value)         (SERCOM_SPIS_CTRLA_CPHA_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLA_CPHA_Pos)) /* Assignment of value for CPHA in the SERCOM_SPIS_CTRLA register */
#define   SERCOM_SPIS_CTRLA_CPHA_LEADING_EDGE_Val _UINT32_(0x0)                                        /* (SERCOM_SPIS_CTRLA) The data is sampled on a leading SCK edge and changed on a trailing SCK edge  */
#define   SERCOM_SPIS_CTRLA_CPHA_TRAILING_EDGE_Val _UINT32_(0x1)                                        /* (SERCOM_SPIS_CTRLA) The data is sampled on a trailing SCK edge and changed on a leading SCK edge  */
#define SERCOM_SPIS_CTRLA_CPHA_LEADING_EDGE   (SERCOM_SPIS_CTRLA_CPHA_LEADING_EDGE_Val << SERCOM_SPIS_CTRLA_CPHA_Pos) /* (SERCOM_SPIS_CTRLA) The data is sampled on a leading SCK edge and changed on a trailing SCK edge Position */
#define SERCOM_SPIS_CTRLA_CPHA_TRAILING_EDGE  (SERCOM_SPIS_CTRLA_CPHA_TRAILING_EDGE_Val << SERCOM_SPIS_CTRLA_CPHA_Pos) /* (SERCOM_SPIS_CTRLA) The data is sampled on a trailing SCK edge and changed on a leading SCK edge Position */
#define SERCOM_SPIS_CTRLA_CPOL_Pos            _UINT32_(29)                                         /* (SERCOM_SPIS_CTRLA) Clock Polarity Position */
#define SERCOM_SPIS_CTRLA_CPOL_Msk            (_UINT32_(0x1) << SERCOM_SPIS_CTRLA_CPOL_Pos)        /* (SERCOM_SPIS_CTRLA) Clock Polarity Mask */
#define SERCOM_SPIS_CTRLA_CPOL(value)         (SERCOM_SPIS_CTRLA_CPOL_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLA_CPOL_Pos)) /* Assignment of value for CPOL in the SERCOM_SPIS_CTRLA register */
#define   SERCOM_SPIS_CTRLA_CPOL_IDLE_LOW_Val _UINT32_(0x0)                                        /* (SERCOM_SPIS_CTRLA) SCK is low when idle  */
#define   SERCOM_SPIS_CTRLA_CPOL_IDLE_HIGH_Val _UINT32_(0x1)                                        /* (SERCOM_SPIS_CTRLA) SCK is high when idle  */
#define SERCOM_SPIS_CTRLA_CPOL_IDLE_LOW       (SERCOM_SPIS_CTRLA_CPOL_IDLE_LOW_Val << SERCOM_SPIS_CTRLA_CPOL_Pos) /* (SERCOM_SPIS_CTRLA) SCK is low when idle Position */
#define SERCOM_SPIS_CTRLA_CPOL_IDLE_HIGH      (SERCOM_SPIS_CTRLA_CPOL_IDLE_HIGH_Val << SERCOM_SPIS_CTRLA_CPOL_Pos) /* (SERCOM_SPIS_CTRLA) SCK is high when idle Position */
#define SERCOM_SPIS_CTRLA_DORD_Pos            _UINT32_(30)                                         /* (SERCOM_SPIS_CTRLA) Data Order Position */
#define SERCOM_SPIS_CTRLA_DORD_Msk            (_UINT32_(0x1) << SERCOM_SPIS_CTRLA_DORD_Pos)        /* (SERCOM_SPIS_CTRLA) Data Order Mask */
#define SERCOM_SPIS_CTRLA_DORD(value)         (SERCOM_SPIS_CTRLA_DORD_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLA_DORD_Pos)) /* Assignment of value for DORD in the SERCOM_SPIS_CTRLA register */
#define   SERCOM_SPIS_CTRLA_DORD_MSB_Val      _UINT32_(0x0)                                        /* (SERCOM_SPIS_CTRLA) MSB is transmitted first  */
#define   SERCOM_SPIS_CTRLA_DORD_LSB_Val      _UINT32_(0x1)                                        /* (SERCOM_SPIS_CTRLA) LSB is transmitted first  */
#define SERCOM_SPIS_CTRLA_DORD_MSB            (SERCOM_SPIS_CTRLA_DORD_MSB_Val << SERCOM_SPIS_CTRLA_DORD_Pos) /* (SERCOM_SPIS_CTRLA) MSB is transmitted first Position */
#define SERCOM_SPIS_CTRLA_DORD_LSB            (SERCOM_SPIS_CTRLA_DORD_LSB_Val << SERCOM_SPIS_CTRLA_DORD_Pos) /* (SERCOM_SPIS_CTRLA) LSB is transmitted first Position */
#define SERCOM_SPIS_CTRLA_Msk                 _UINT32_(0x7F33019F)                                 /* (SERCOM_SPIS_CTRLA) Register Mask  */


/* -------- SERCOM_USART_INT_CTRLA : (SERCOM Offset: 0x00) (R/W 32) USART Control A -------- */
#define SERCOM_USART_INT_CTRLA_RESETVALUE     _UINT32_(0x00)                                       /*  (SERCOM_USART_INT_CTRLA) USART Control A  Reset Value */

#define SERCOM_USART_INT_CTRLA_SWRST_Pos      _UINT32_(0)                                          /* (SERCOM_USART_INT_CTRLA) Software Reset Position */
#define SERCOM_USART_INT_CTRLA_SWRST_Msk      (_UINT32_(0x1) << SERCOM_USART_INT_CTRLA_SWRST_Pos)  /* (SERCOM_USART_INT_CTRLA) Software Reset Mask */
#define SERCOM_USART_INT_CTRLA_SWRST(value)   (SERCOM_USART_INT_CTRLA_SWRST_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLA_SWRST_Pos)) /* Assignment of value for SWRST in the SERCOM_USART_INT_CTRLA register */
#define SERCOM_USART_INT_CTRLA_ENABLE_Pos     _UINT32_(1)                                          /* (SERCOM_USART_INT_CTRLA) Enable Position */
#define SERCOM_USART_INT_CTRLA_ENABLE_Msk     (_UINT32_(0x1) << SERCOM_USART_INT_CTRLA_ENABLE_Pos) /* (SERCOM_USART_INT_CTRLA) Enable Mask */
#define SERCOM_USART_INT_CTRLA_ENABLE(value)  (SERCOM_USART_INT_CTRLA_ENABLE_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLA_ENABLE_Pos)) /* Assignment of value for ENABLE in the SERCOM_USART_INT_CTRLA register */
#define SERCOM_USART_INT_CTRLA_MODE_Pos       _UINT32_(2)                                          /* (SERCOM_USART_INT_CTRLA) Operating Mode Position */
#define SERCOM_USART_INT_CTRLA_MODE_Msk       (_UINT32_(0x7) << SERCOM_USART_INT_CTRLA_MODE_Pos)   /* (SERCOM_USART_INT_CTRLA) Operating Mode Mask */
#define SERCOM_USART_INT_CTRLA_MODE(value)    (SERCOM_USART_INT_CTRLA_MODE_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLA_MODE_Pos)) /* Assignment of value for MODE in the SERCOM_USART_INT_CTRLA register */
#define   SERCOM_USART_INT_CTRLA_MODE_USART_EXT_CLK_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLA) USART with external clock  */
#define   SERCOM_USART_INT_CTRLA_MODE_USART_INT_CLK_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLA) USART with internal clock  */
#define   SERCOM_USART_INT_CTRLA_MODE_SPI_SLAVE_Val _UINT32_(0x2)                                        /* (SERCOM_USART_INT_CTRLA) SPI in slave operation  */
#define   SERCOM_USART_INT_CTRLA_MODE_SPI_MASTER_Val _UINT32_(0x3)                                        /* (SERCOM_USART_INT_CTRLA) SPI in master operation  */
#define   SERCOM_USART_INT_CTRLA_MODE_I2C_SLAVE_Val _UINT32_(0x4)                                        /* (SERCOM_USART_INT_CTRLA) I2C slave operation  */
#define   SERCOM_USART_INT_CTRLA_MODE_I2C_MASTER_Val _UINT32_(0x5)                                        /* (SERCOM_USART_INT_CTRLA) I2C master operation  */
#define SERCOM_USART_INT_CTRLA_MODE_USART_EXT_CLK (SERCOM_USART_INT_CTRLA_MODE_USART_EXT_CLK_Val << SERCOM_USART_INT_CTRLA_MODE_Pos) /* (SERCOM_USART_INT_CTRLA) USART with external clock Position */
#define SERCOM_USART_INT_CTRLA_MODE_USART_INT_CLK (SERCOM_USART_INT_CTRLA_MODE_USART_INT_CLK_Val << SERCOM_USART_INT_CTRLA_MODE_Pos) /* (SERCOM_USART_INT_CTRLA) USART with internal clock Position */
#define SERCOM_USART_INT_CTRLA_MODE_SPI_SLAVE (SERCOM_USART_INT_CTRLA_MODE_SPI_SLAVE_Val << SERCOM_USART_INT_CTRLA_MODE_Pos) /* (SERCOM_USART_INT_CTRLA) SPI in slave operation Position */
#define SERCOM_USART_INT_CTRLA_MODE_SPI_MASTER (SERCOM_USART_INT_CTRLA_MODE_SPI_MASTER_Val << SERCOM_USART_INT_CTRLA_MODE_Pos) /* (SERCOM_USART_INT_CTRLA) SPI in master operation Position */
#define SERCOM_USART_INT_CTRLA_MODE_I2C_SLAVE (SERCOM_USART_INT_CTRLA_MODE_I2C_SLAVE_Val << SERCOM_USART_INT_CTRLA_MODE_Pos) /* (SERCOM_USART_INT_CTRLA) I2C slave operation Position */
#define SERCOM_USART_INT_CTRLA_MODE_I2C_MASTER (SERCOM_USART_INT_CTRLA_MODE_I2C_MASTER_Val << SERCOM_USART_INT_CTRLA_MODE_Pos) /* (SERCOM_USART_INT_CTRLA) I2C master operation Position */
#define SERCOM_USART_INT_CTRLA_RUNSTDBY_Pos   _UINT32_(7)                                          /* (SERCOM_USART_INT_CTRLA) Run during Standby Position */
#define SERCOM_USART_INT_CTRLA_RUNSTDBY_Msk   (_UINT32_(0x1) << SERCOM_USART_INT_CTRLA_RUNSTDBY_Pos) /* (SERCOM_USART_INT_CTRLA) Run during Standby Mask */
#define SERCOM_USART_INT_CTRLA_RUNSTDBY(value) (SERCOM_USART_INT_CTRLA_RUNSTDBY_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLA_RUNSTDBY_Pos)) /* Assignment of value for RUNSTDBY in the SERCOM_USART_INT_CTRLA register */
#define SERCOM_USART_INT_CTRLA_IBON_Pos       _UINT32_(8)                                          /* (SERCOM_USART_INT_CTRLA) Immediate Buffer Overflow Notification Position */
#define SERCOM_USART_INT_CTRLA_IBON_Msk       (_UINT32_(0x1) << SERCOM_USART_INT_CTRLA_IBON_Pos)   /* (SERCOM_USART_INT_CTRLA) Immediate Buffer Overflow Notification Mask */
#define SERCOM_USART_INT_CTRLA_IBON(value)    (SERCOM_USART_INT_CTRLA_IBON_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLA_IBON_Pos)) /* Assignment of value for IBON in the SERCOM_USART_INT_CTRLA register */
#define SERCOM_USART_INT_CTRLA_TXINV_Pos      _UINT32_(9)                                          /* (SERCOM_USART_INT_CTRLA) Transmit Data Invert Position */
#define SERCOM_USART_INT_CTRLA_TXINV_Msk      (_UINT32_(0x1) << SERCOM_USART_INT_CTRLA_TXINV_Pos)  /* (SERCOM_USART_INT_CTRLA) Transmit Data Invert Mask */
#define SERCOM_USART_INT_CTRLA_TXINV(value)   (SERCOM_USART_INT_CTRLA_TXINV_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLA_TXINV_Pos)) /* Assignment of value for TXINV in the SERCOM_USART_INT_CTRLA register */
#define   SERCOM_USART_INT_CTRLA_TXINV_DISABLE_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLA) TxD is not inverted  */
#define   SERCOM_USART_INT_CTRLA_TXINV_INV_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLA) TxD is inverted  */
#define SERCOM_USART_INT_CTRLA_TXINV_DISABLE  (SERCOM_USART_INT_CTRLA_TXINV_DISABLE_Val << SERCOM_USART_INT_CTRLA_TXINV_Pos) /* (SERCOM_USART_INT_CTRLA) TxD is not inverted Position */
#define SERCOM_USART_INT_CTRLA_TXINV_INV      (SERCOM_USART_INT_CTRLA_TXINV_INV_Val << SERCOM_USART_INT_CTRLA_TXINV_Pos) /* (SERCOM_USART_INT_CTRLA) TxD is inverted Position */
#define SERCOM_USART_INT_CTRLA_RXINV_Pos      _UINT32_(10)                                         /* (SERCOM_USART_INT_CTRLA) Receive Data Invert Position */
#define SERCOM_USART_INT_CTRLA_RXINV_Msk      (_UINT32_(0x1) << SERCOM_USART_INT_CTRLA_RXINV_Pos)  /* (SERCOM_USART_INT_CTRLA) Receive Data Invert Mask */
#define SERCOM_USART_INT_CTRLA_RXINV(value)   (SERCOM_USART_INT_CTRLA_RXINV_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLA_RXINV_Pos)) /* Assignment of value for RXINV in the SERCOM_USART_INT_CTRLA register */
#define   SERCOM_USART_INT_CTRLA_RXINV_DISABLE_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLA) RxD is not inverted  */
#define   SERCOM_USART_INT_CTRLA_RXINV_INV_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLA) RxD is inverted  */
#define SERCOM_USART_INT_CTRLA_RXINV_DISABLE  (SERCOM_USART_INT_CTRLA_RXINV_DISABLE_Val << SERCOM_USART_INT_CTRLA_RXINV_Pos) /* (SERCOM_USART_INT_CTRLA) RxD is not inverted Position */
#define SERCOM_USART_INT_CTRLA_RXINV_INV      (SERCOM_USART_INT_CTRLA_RXINV_INV_Val << SERCOM_USART_INT_CTRLA_RXINV_Pos) /* (SERCOM_USART_INT_CTRLA) RxD is inverted Position */
#define SERCOM_USART_INT_CTRLA_SAMPR_Pos      _UINT32_(13)                                         /* (SERCOM_USART_INT_CTRLA) Sample Position */
#define SERCOM_USART_INT_CTRLA_SAMPR_Msk      (_UINT32_(0x7) << SERCOM_USART_INT_CTRLA_SAMPR_Pos)  /* (SERCOM_USART_INT_CTRLA) Sample Mask */
#define SERCOM_USART_INT_CTRLA_SAMPR(value)   (SERCOM_USART_INT_CTRLA_SAMPR_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLA_SAMPR_Pos)) /* Assignment of value for SAMPR in the SERCOM_USART_INT_CTRLA register */
#define   SERCOM_USART_INT_CTRLA_SAMPR_ARITHM16X_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLA) 16x oversampling using arithmetic baud rate generation  */
#define   SERCOM_USART_INT_CTRLA_SAMPR_FRAC16X_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLA) 16x oversampling using fractional baud rate generation  */
#define   SERCOM_USART_INT_CTRLA_SAMPR_ARITHM8X_Val _UINT32_(0x2)                                        /* (SERCOM_USART_INT_CTRLA) 8x oversampling using arithmetic baud rate generation  */
#define   SERCOM_USART_INT_CTRLA_SAMPR_FRAC8X_Val _UINT32_(0x3)                                        /* (SERCOM_USART_INT_CTRLA) 8x oversampling using fractional baud rate generation  */
#define   SERCOM_USART_INT_CTRLA_SAMPR_ARITHM3X_Val _UINT32_(0x4)                                        /* (SERCOM_USART_INT_CTRLA) 3x oversampling using arithmetic baud rate generation  */
#define SERCOM_USART_INT_CTRLA_SAMPR_ARITHM16X (SERCOM_USART_INT_CTRLA_SAMPR_ARITHM16X_Val << SERCOM_USART_INT_CTRLA_SAMPR_Pos) /* (SERCOM_USART_INT_CTRLA) 16x oversampling using arithmetic baud rate generation Position */
#define SERCOM_USART_INT_CTRLA_SAMPR_FRAC16X  (SERCOM_USART_INT_CTRLA_SAMPR_FRAC16X_Val << SERCOM_USART_INT_CTRLA_SAMPR_Pos) /* (SERCOM_USART_INT_CTRLA) 16x oversampling using fractional baud rate generation Position */
#define SERCOM_USART_INT_CTRLA_SAMPR_ARITHM8X (SERCOM_USART_INT_CTRLA_SAMPR_ARITHM8X_Val << SERCOM_USART_INT_CTRLA_SAMPR_Pos) /* (SERCOM_USART_INT_CTRLA) 8x oversampling using arithmetic baud rate generation Position */
#define SERCOM_USART_INT_CTRLA_SAMPR_FRAC8X   (SERCOM_USART_INT_CTRLA_SAMPR_FRAC8X_Val << SERCOM_USART_INT_CTRLA_SAMPR_Pos) /* (SERCOM_USART_INT_CTRLA) 8x oversampling using fractional baud rate generation Position */
#define SERCOM_USART_INT_CTRLA_SAMPR_ARITHM3X (SERCOM_USART_INT_CTRLA_SAMPR_ARITHM3X_Val << SERCOM_USART_INT_CTRLA_SAMPR_Pos) /* (SERCOM_USART_INT_CTRLA) 3x oversampling using arithmetic baud rate generation Position */
#define SERCOM_USART_INT_CTRLA_TXPO_Pos       _UINT32_(16)                                         /* (SERCOM_USART_INT_CTRLA) Transmit Data Pinout Position */
#define SERCOM_USART_INT_CTRLA_TXPO_Msk       (_UINT32_(0x3) << SERCOM_USART_INT_CTRLA_TXPO_Pos)   /* (SERCOM_USART_INT_CTRLA) Transmit Data Pinout Mask */
#define SERCOM_USART_INT_CTRLA_TXPO(value)    (SERCOM_USART_INT_CTRLA_TXPO_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLA_TXPO_Pos)) /* Assignment of value for TXPO in the SERCOM_USART_INT_CTRLA register */
#define   SERCOM_USART_INT_CTRLA_TXPO_PAD0_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLA) PAD[0] = TxD; PAD[1] = XCK  */
#define   SERCOM_USART_INT_CTRLA_TXPO_PAD2_Val _UINT32_(0x2)                                        /* (SERCOM_USART_INT_CTRLA) PAD[0] = TxD; PAD[2] = RTS; PAD[3] = CTS  */
#define   SERCOM_USART_INT_CTRLA_TXPO_PAD3_Val _UINT32_(0x3)                                        /* (SERCOM_USART_INT_CTRLA) PAD[0] = TxD; PAD[1] = XCK; PAD[2] = TE  */
#define SERCOM_USART_INT_CTRLA_TXPO_PAD0      (SERCOM_USART_INT_CTRLA_TXPO_PAD0_Val << SERCOM_USART_INT_CTRLA_TXPO_Pos) /* (SERCOM_USART_INT_CTRLA) PAD[0] = TxD; PAD[1] = XCK Position */
#define SERCOM_USART_INT_CTRLA_TXPO_PAD2      (SERCOM_USART_INT_CTRLA_TXPO_PAD2_Val << SERCOM_USART_INT_CTRLA_TXPO_Pos) /* (SERCOM_USART_INT_CTRLA) PAD[0] = TxD; PAD[2] = RTS; PAD[3] = CTS Position */
#define SERCOM_USART_INT_CTRLA_TXPO_PAD3      (SERCOM_USART_INT_CTRLA_TXPO_PAD3_Val << SERCOM_USART_INT_CTRLA_TXPO_Pos) /* (SERCOM_USART_INT_CTRLA) PAD[0] = TxD; PAD[1] = XCK; PAD[2] = TE Position */
#define SERCOM_USART_INT_CTRLA_RXPO_Pos       _UINT32_(20)                                         /* (SERCOM_USART_INT_CTRLA) Receive Data Pinout Position */
#define SERCOM_USART_INT_CTRLA_RXPO_Msk       (_UINT32_(0x3) << SERCOM_USART_INT_CTRLA_RXPO_Pos)   /* (SERCOM_USART_INT_CTRLA) Receive Data Pinout Mask */
#define SERCOM_USART_INT_CTRLA_RXPO(value)    (SERCOM_USART_INT_CTRLA_RXPO_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLA_RXPO_Pos)) /* Assignment of value for RXPO in the SERCOM_USART_INT_CTRLA register */
#define   SERCOM_USART_INT_CTRLA_RXPO_PAD0_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLA) SERCOM PAD0 is used for data reception  */
#define   SERCOM_USART_INT_CTRLA_RXPO_PAD1_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLA) SERCOM PAD1 is used for data reception  */
#define   SERCOM_USART_INT_CTRLA_RXPO_PAD2_Val _UINT32_(0x2)                                        /* (SERCOM_USART_INT_CTRLA) SERCOM PAD2 is used for data reception  */
#define   SERCOM_USART_INT_CTRLA_RXPO_PAD3_Val _UINT32_(0x3)                                        /* (SERCOM_USART_INT_CTRLA) SERCOM PAD3 is used for data reception  */
#define SERCOM_USART_INT_CTRLA_RXPO_PAD0      (SERCOM_USART_INT_CTRLA_RXPO_PAD0_Val << SERCOM_USART_INT_CTRLA_RXPO_Pos) /* (SERCOM_USART_INT_CTRLA) SERCOM PAD0 is used for data reception Position */
#define SERCOM_USART_INT_CTRLA_RXPO_PAD1      (SERCOM_USART_INT_CTRLA_RXPO_PAD1_Val << SERCOM_USART_INT_CTRLA_RXPO_Pos) /* (SERCOM_USART_INT_CTRLA) SERCOM PAD1 is used for data reception Position */
#define SERCOM_USART_INT_CTRLA_RXPO_PAD2      (SERCOM_USART_INT_CTRLA_RXPO_PAD2_Val << SERCOM_USART_INT_CTRLA_RXPO_Pos) /* (SERCOM_USART_INT_CTRLA) SERCOM PAD2 is used for data reception Position */
#define SERCOM_USART_INT_CTRLA_RXPO_PAD3      (SERCOM_USART_INT_CTRLA_RXPO_PAD3_Val << SERCOM_USART_INT_CTRLA_RXPO_Pos) /* (SERCOM_USART_INT_CTRLA) SERCOM PAD3 is used for data reception Position */
#define SERCOM_USART_INT_CTRLA_SAMPA_Pos      _UINT32_(22)                                         /* (SERCOM_USART_INT_CTRLA) Sample Adjustment Position */
#define SERCOM_USART_INT_CTRLA_SAMPA_Msk      (_UINT32_(0x3) << SERCOM_USART_INT_CTRLA_SAMPA_Pos)  /* (SERCOM_USART_INT_CTRLA) Sample Adjustment Mask */
#define SERCOM_USART_INT_CTRLA_SAMPA(value)   (SERCOM_USART_INT_CTRLA_SAMPA_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLA_SAMPA_Pos)) /* Assignment of value for SAMPA in the SERCOM_USART_INT_CTRLA register */
#define SERCOM_USART_INT_CTRLA_FORM_Pos       _UINT32_(24)                                         /* (SERCOM_USART_INT_CTRLA) Frame Format Position */
#define SERCOM_USART_INT_CTRLA_FORM_Msk       (_UINT32_(0xF) << SERCOM_USART_INT_CTRLA_FORM_Pos)   /* (SERCOM_USART_INT_CTRLA) Frame Format Mask */
#define SERCOM_USART_INT_CTRLA_FORM(value)    (SERCOM_USART_INT_CTRLA_FORM_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLA_FORM_Pos)) /* Assignment of value for FORM in the SERCOM_USART_INT_CTRLA register */
#define   SERCOM_USART_INT_CTRLA_FORM_USART_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLA) USART frame  */
#define   SERCOM_USART_INT_CTRLA_FORM_USARTP_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLA) USART frame with parity  */
#define   SERCOM_USART_INT_CTRLA_FORM_LINBRKGEN_Val _UINT32_(0x2)                                        /* (SERCOM_USART_INT_CTRLA) LIN Master Break and Synck generation  */
#define   SERCOM_USART_INT_CTRLA_FORM_LINBRKDET_Val _UINT32_(0x4)                                        /* (SERCOM_USART_INT_CTRLA) LIN Slave break detection and auto-baud  */
#define   SERCOM_USART_INT_CTRLA_FORM_BRKDET_Val _UINT32_(0x5)                                        /* (SERCOM_USART_INT_CTRLA) Break detection and auto-baud with parity  */
#define   SERCOM_USART_INT_CTRLA_FORM_ISO7816_Val _UINT32_(0x7)                                        /* (SERCOM_USART_INT_CTRLA) ISO 7816 Communication  */
#define SERCOM_USART_INT_CTRLA_FORM_USART     (SERCOM_USART_INT_CTRLA_FORM_USART_Val << SERCOM_USART_INT_CTRLA_FORM_Pos) /* (SERCOM_USART_INT_CTRLA) USART frame Position */
#define SERCOM_USART_INT_CTRLA_FORM_USARTP    (SERCOM_USART_INT_CTRLA_FORM_USARTP_Val << SERCOM_USART_INT_CTRLA_FORM_Pos) /* (SERCOM_USART_INT_CTRLA) USART frame with parity Position */
#define SERCOM_USART_INT_CTRLA_FORM_LINBRKGEN (SERCOM_USART_INT_CTRLA_FORM_LINBRKGEN_Val << SERCOM_USART_INT_CTRLA_FORM_Pos) /* (SERCOM_USART_INT_CTRLA) LIN Master Break and Synck generation Position */
#define SERCOM_USART_INT_CTRLA_FORM_LINBRKDET (SERCOM_USART_INT_CTRLA_FORM_LINBRKDET_Val << SERCOM_USART_INT_CTRLA_FORM_Pos) /* (SERCOM_USART_INT_CTRLA) LIN Slave break detection and auto-baud Position */
#define SERCOM_USART_INT_CTRLA_FORM_BRKDET    (SERCOM_USART_INT_CTRLA_FORM_BRKDET_Val << SERCOM_USART_INT_CTRLA_FORM_Pos) /* (SERCOM_USART_INT_CTRLA) Break detection and auto-baud with parity Position */
#define SERCOM_USART_INT_CTRLA_FORM_ISO7816   (SERCOM_USART_INT_CTRLA_FORM_ISO7816_Val << SERCOM_USART_INT_CTRLA_FORM_Pos) /* (SERCOM_USART_INT_CTRLA) ISO 7816 Communication Position */
#define SERCOM_USART_INT_CTRLA_CMODE_Pos      _UINT32_(28)                                         /* (SERCOM_USART_INT_CTRLA) Communication Mode Position */
#define SERCOM_USART_INT_CTRLA_CMODE_Msk      (_UINT32_(0x1) << SERCOM_USART_INT_CTRLA_CMODE_Pos)  /* (SERCOM_USART_INT_CTRLA) Communication Mode Mask */
#define SERCOM_USART_INT_CTRLA_CMODE(value)   (SERCOM_USART_INT_CTRLA_CMODE_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLA_CMODE_Pos)) /* Assignment of value for CMODE in the SERCOM_USART_INT_CTRLA register */
#define   SERCOM_USART_INT_CTRLA_CMODE_ASYNC_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLA) Asynchronous communication.  */
#define   SERCOM_USART_INT_CTRLA_CMODE_SYNC_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLA) Synchronous communication.  */
#define SERCOM_USART_INT_CTRLA_CMODE_ASYNC    (SERCOM_USART_INT_CTRLA_CMODE_ASYNC_Val << SERCOM_USART_INT_CTRLA_CMODE_Pos) /* (SERCOM_USART_INT_CTRLA) Asynchronous communication. Position */
#define SERCOM_USART_INT_CTRLA_CMODE_SYNC     (SERCOM_USART_INT_CTRLA_CMODE_SYNC_Val << SERCOM_USART_INT_CTRLA_CMODE_Pos) /* (SERCOM_USART_INT_CTRLA) Synchronous communication. Position */
#define SERCOM_USART_INT_CTRLA_CPOL_Pos       _UINT32_(29)                                         /* (SERCOM_USART_INT_CTRLA) Clock Polarity Position */
#define SERCOM_USART_INT_CTRLA_CPOL_Msk       (_UINT32_(0x1) << SERCOM_USART_INT_CTRLA_CPOL_Pos)   /* (SERCOM_USART_INT_CTRLA) Clock Polarity Mask */
#define SERCOM_USART_INT_CTRLA_CPOL(value)    (SERCOM_USART_INT_CTRLA_CPOL_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLA_CPOL_Pos)) /* Assignment of value for CPOL in the SERCOM_USART_INT_CTRLA register */
#define SERCOM_USART_INT_CTRLA_DORD_Pos       _UINT32_(30)                                         /* (SERCOM_USART_INT_CTRLA) Data Order Position */
#define SERCOM_USART_INT_CTRLA_DORD_Msk       (_UINT32_(0x1) << SERCOM_USART_INT_CTRLA_DORD_Pos)   /* (SERCOM_USART_INT_CTRLA) Data Order Mask */
#define SERCOM_USART_INT_CTRLA_DORD(value)    (SERCOM_USART_INT_CTRLA_DORD_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLA_DORD_Pos)) /* Assignment of value for DORD in the SERCOM_USART_INT_CTRLA register */
#define   SERCOM_USART_INT_CTRLA_DORD_MSB_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLA) MSB is transmitted first.  */
#define   SERCOM_USART_INT_CTRLA_DORD_LSB_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLA) LSB is transmitted first.  */
#define SERCOM_USART_INT_CTRLA_DORD_MSB       (SERCOM_USART_INT_CTRLA_DORD_MSB_Val << SERCOM_USART_INT_CTRLA_DORD_Pos) /* (SERCOM_USART_INT_CTRLA) MSB is transmitted first. Position */
#define SERCOM_USART_INT_CTRLA_DORD_LSB       (SERCOM_USART_INT_CTRLA_DORD_LSB_Val << SERCOM_USART_INT_CTRLA_DORD_Pos) /* (SERCOM_USART_INT_CTRLA) LSB is transmitted first. Position */
#define SERCOM_USART_INT_CTRLA_Msk            _UINT32_(0x7FF3E79F)                                 /* (SERCOM_USART_INT_CTRLA) Register Mask  */


/* -------- SERCOM_I2CM_CTRLB : (SERCOM Offset: 0x04) (R/W 32) I2CM Control B -------- */
#define SERCOM_I2CM_CTRLB_RESETVALUE          _UINT32_(0x00)                                       /*  (SERCOM_I2CM_CTRLB) I2CM Control B  Reset Value */

#define SERCOM_I2CM_CTRLB_SMEN_Pos            _UINT32_(8)                                          /* (SERCOM_I2CM_CTRLB) Smart Mode Enable Position */
#define SERCOM_I2CM_CTRLB_SMEN_Msk            (_UINT32_(0x1) << SERCOM_I2CM_CTRLB_SMEN_Pos)        /* (SERCOM_I2CM_CTRLB) Smart Mode Enable Mask */
#define SERCOM_I2CM_CTRLB_SMEN(value)         (SERCOM_I2CM_CTRLB_SMEN_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLB_SMEN_Pos)) /* Assignment of value for SMEN in the SERCOM_I2CM_CTRLB register */
#define SERCOM_I2CM_CTRLB_QCEN_Pos            _UINT32_(9)                                          /* (SERCOM_I2CM_CTRLB) Quick Command Enable Position */
#define SERCOM_I2CM_CTRLB_QCEN_Msk            (_UINT32_(0x1) << SERCOM_I2CM_CTRLB_QCEN_Pos)        /* (SERCOM_I2CM_CTRLB) Quick Command Enable Mask */
#define SERCOM_I2CM_CTRLB_QCEN(value)         (SERCOM_I2CM_CTRLB_QCEN_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLB_QCEN_Pos)) /* Assignment of value for QCEN in the SERCOM_I2CM_CTRLB register */
#define SERCOM_I2CM_CTRLB_CMD_Pos             _UINT32_(16)                                         /* (SERCOM_I2CM_CTRLB) Command Position */
#define SERCOM_I2CM_CTRLB_CMD_Msk             (_UINT32_(0x3) << SERCOM_I2CM_CTRLB_CMD_Pos)         /* (SERCOM_I2CM_CTRLB) Command Mask */
#define SERCOM_I2CM_CTRLB_CMD(value)          (SERCOM_I2CM_CTRLB_CMD_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLB_CMD_Pos)) /* Assignment of value for CMD in the SERCOM_I2CM_CTRLB register */
#define SERCOM_I2CM_CTRLB_ACKACT_Pos          _UINT32_(18)                                         /* (SERCOM_I2CM_CTRLB) Acknowledge Action Position */
#define SERCOM_I2CM_CTRLB_ACKACT_Msk          (_UINT32_(0x1) << SERCOM_I2CM_CTRLB_ACKACT_Pos)      /* (SERCOM_I2CM_CTRLB) Acknowledge Action Mask */
#define SERCOM_I2CM_CTRLB_ACKACT(value)       (SERCOM_I2CM_CTRLB_ACKACT_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLB_ACKACT_Pos)) /* Assignment of value for ACKACT in the SERCOM_I2CM_CTRLB register */
#define SERCOM_I2CM_CTRLB_FIFOCLR_Pos         _UINT32_(22)                                         /* (SERCOM_I2CM_CTRLB) FIFO Clear Position */
#define SERCOM_I2CM_CTRLB_FIFOCLR_Msk         (_UINT32_(0x3) << SERCOM_I2CM_CTRLB_FIFOCLR_Pos)     /* (SERCOM_I2CM_CTRLB) FIFO Clear Mask */
#define SERCOM_I2CM_CTRLB_FIFOCLR(value)      (SERCOM_I2CM_CTRLB_FIFOCLR_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLB_FIFOCLR_Pos)) /* Assignment of value for FIFOCLR in the SERCOM_I2CM_CTRLB register */
#define   SERCOM_I2CM_CTRLB_FIFOCLR_NONE_Val  _UINT32_(0x0)                                        /* (SERCOM_I2CM_CTRLB) No action  */
#define   SERCOM_I2CM_CTRLB_FIFOCLR_TXFIFO_Val _UINT32_(0x1)                                        /* (SERCOM_I2CM_CTRLB) Clear TX FIFO  */
#define   SERCOM_I2CM_CTRLB_FIFOCLR_RXFIFO_Val _UINT32_(0x2)                                        /* (SERCOM_I2CM_CTRLB) Clear RX FIFO  */
#define   SERCOM_I2CM_CTRLB_FIFOCLR_BOTH_Val  _UINT32_(0x3)                                        /* (SERCOM_I2CM_CTRLB) Clear both TX and RF FIFOs  */
#define SERCOM_I2CM_CTRLB_FIFOCLR_NONE        (SERCOM_I2CM_CTRLB_FIFOCLR_NONE_Val << SERCOM_I2CM_CTRLB_FIFOCLR_Pos) /* (SERCOM_I2CM_CTRLB) No action Position */
#define SERCOM_I2CM_CTRLB_FIFOCLR_TXFIFO      (SERCOM_I2CM_CTRLB_FIFOCLR_TXFIFO_Val << SERCOM_I2CM_CTRLB_FIFOCLR_Pos) /* (SERCOM_I2CM_CTRLB) Clear TX FIFO Position */
#define SERCOM_I2CM_CTRLB_FIFOCLR_RXFIFO      (SERCOM_I2CM_CTRLB_FIFOCLR_RXFIFO_Val << SERCOM_I2CM_CTRLB_FIFOCLR_Pos) /* (SERCOM_I2CM_CTRLB) Clear RX FIFO Position */
#define SERCOM_I2CM_CTRLB_FIFOCLR_BOTH        (SERCOM_I2CM_CTRLB_FIFOCLR_BOTH_Val << SERCOM_I2CM_CTRLB_FIFOCLR_Pos) /* (SERCOM_I2CM_CTRLB) Clear both TX and RF FIFOs Position */
#define SERCOM_I2CM_CTRLB_Msk                 _UINT32_(0x00C70300)                                 /* (SERCOM_I2CM_CTRLB) Register Mask  */


/* -------- SERCOM_I2CS_CTRLB : (SERCOM Offset: 0x04) (R/W 32) I2CS Control B -------- */
#define SERCOM_I2CS_CTRLB_RESETVALUE          _UINT32_(0x00)                                       /*  (SERCOM_I2CS_CTRLB) I2CS Control B  Reset Value */

#define SERCOM_I2CS_CTRLB_SMEN_Pos            _UINT32_(8)                                          /* (SERCOM_I2CS_CTRLB) Smart Mode Enable Position */
#define SERCOM_I2CS_CTRLB_SMEN_Msk            (_UINT32_(0x1) << SERCOM_I2CS_CTRLB_SMEN_Pos)        /* (SERCOM_I2CS_CTRLB) Smart Mode Enable Mask */
#define SERCOM_I2CS_CTRLB_SMEN(value)         (SERCOM_I2CS_CTRLB_SMEN_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLB_SMEN_Pos)) /* Assignment of value for SMEN in the SERCOM_I2CS_CTRLB register */
#define SERCOM_I2CS_CTRLB_GCMD_Pos            _UINT32_(9)                                          /* (SERCOM_I2CS_CTRLB) PMBus Group Command Position */
#define SERCOM_I2CS_CTRLB_GCMD_Msk            (_UINT32_(0x1) << SERCOM_I2CS_CTRLB_GCMD_Pos)        /* (SERCOM_I2CS_CTRLB) PMBus Group Command Mask */
#define SERCOM_I2CS_CTRLB_GCMD(value)         (SERCOM_I2CS_CTRLB_GCMD_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLB_GCMD_Pos)) /* Assignment of value for GCMD in the SERCOM_I2CS_CTRLB register */
#define SERCOM_I2CS_CTRLB_AACKEN_Pos          _UINT32_(10)                                         /* (SERCOM_I2CS_CTRLB) Automatic Address Acknowledge Position */
#define SERCOM_I2CS_CTRLB_AACKEN_Msk          (_UINT32_(0x1) << SERCOM_I2CS_CTRLB_AACKEN_Pos)      /* (SERCOM_I2CS_CTRLB) Automatic Address Acknowledge Mask */
#define SERCOM_I2CS_CTRLB_AACKEN(value)       (SERCOM_I2CS_CTRLB_AACKEN_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLB_AACKEN_Pos)) /* Assignment of value for AACKEN in the SERCOM_I2CS_CTRLB register */
#define SERCOM_I2CS_CTRLB_AMODE_Pos           _UINT32_(14)                                         /* (SERCOM_I2CS_CTRLB) Address Mode Position */
#define SERCOM_I2CS_CTRLB_AMODE_Msk           (_UINT32_(0x3) << SERCOM_I2CS_CTRLB_AMODE_Pos)       /* (SERCOM_I2CS_CTRLB) Address Mode Mask */
#define SERCOM_I2CS_CTRLB_AMODE(value)        (SERCOM_I2CS_CTRLB_AMODE_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLB_AMODE_Pos)) /* Assignment of value for AMODE in the SERCOM_I2CS_CTRLB register */
#define   SERCOM_I2CS_CTRLB_AMODE_MASK_Val    _UINT32_(0x0)                                        /* (SERCOM_I2CS_CTRLB) The slave responds to the address written in ADDR.ADDR masked by the value in ADDR.ADDRMASK  */
#define   SERCOM_I2CS_CTRLB_AMODE_2ADDRS_Val  _UINT32_(0x1)                                        /* (SERCOM_I2CS_CTRLB) The slave responds to the two unique addresses in ADDR and ADDRMASK  */
#define   SERCOM_I2CS_CTRLB_AMODE_RANGE_Val   _UINT32_(0x2)                                        /* (SERCOM_I2CS_CTRLB) The slave responds to the range of addresses between and including ADDR and ADDRMASK. ADDR is the upper limit  */
#define SERCOM_I2CS_CTRLB_AMODE_MASK          (SERCOM_I2CS_CTRLB_AMODE_MASK_Val << SERCOM_I2CS_CTRLB_AMODE_Pos) /* (SERCOM_I2CS_CTRLB) The slave responds to the address written in ADDR.ADDR masked by the value in ADDR.ADDRMASK Position */
#define SERCOM_I2CS_CTRLB_AMODE_2ADDRS        (SERCOM_I2CS_CTRLB_AMODE_2ADDRS_Val << SERCOM_I2CS_CTRLB_AMODE_Pos) /* (SERCOM_I2CS_CTRLB) The slave responds to the two unique addresses in ADDR and ADDRMASK Position */
#define SERCOM_I2CS_CTRLB_AMODE_RANGE         (SERCOM_I2CS_CTRLB_AMODE_RANGE_Val << SERCOM_I2CS_CTRLB_AMODE_Pos) /* (SERCOM_I2CS_CTRLB) The slave responds to the range of addresses between and including ADDR and ADDRMASK. ADDR is the upper limit Position */
#define SERCOM_I2CS_CTRLB_CMD_Pos             _UINT32_(16)                                         /* (SERCOM_I2CS_CTRLB) Command Position */
#define SERCOM_I2CS_CTRLB_CMD_Msk             (_UINT32_(0x3) << SERCOM_I2CS_CTRLB_CMD_Pos)         /* (SERCOM_I2CS_CTRLB) Command Mask */
#define SERCOM_I2CS_CTRLB_CMD(value)          (SERCOM_I2CS_CTRLB_CMD_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLB_CMD_Pos)) /* Assignment of value for CMD in the SERCOM_I2CS_CTRLB register */
#define SERCOM_I2CS_CTRLB_ACKACT_Pos          _UINT32_(18)                                         /* (SERCOM_I2CS_CTRLB) Acknowledge Action Position */
#define SERCOM_I2CS_CTRLB_ACKACT_Msk          (_UINT32_(0x1) << SERCOM_I2CS_CTRLB_ACKACT_Pos)      /* (SERCOM_I2CS_CTRLB) Acknowledge Action Mask */
#define SERCOM_I2CS_CTRLB_ACKACT(value)       (SERCOM_I2CS_CTRLB_ACKACT_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLB_ACKACT_Pos)) /* Assignment of value for ACKACT in the SERCOM_I2CS_CTRLB register */
#define SERCOM_I2CS_CTRLB_FIFOCLR_Pos         _UINT32_(22)                                         /* (SERCOM_I2CS_CTRLB) FIFO Clear Position */
#define SERCOM_I2CS_CTRLB_FIFOCLR_Msk         (_UINT32_(0x3) << SERCOM_I2CS_CTRLB_FIFOCLR_Pos)     /* (SERCOM_I2CS_CTRLB) FIFO Clear Mask */
#define SERCOM_I2CS_CTRLB_FIFOCLR(value)      (SERCOM_I2CS_CTRLB_FIFOCLR_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLB_FIFOCLR_Pos)) /* Assignment of value for FIFOCLR in the SERCOM_I2CS_CTRLB register */
#define   SERCOM_I2CS_CTRLB_FIFOCLR_NONE_Val  _UINT32_(0x0)                                        /* (SERCOM_I2CS_CTRLB) No action  */
#define   SERCOM_I2CS_CTRLB_FIFOCLR_TXFIFO_Val _UINT32_(0x1)                                        /* (SERCOM_I2CS_CTRLB) Clear TX FIFO  */
#define   SERCOM_I2CS_CTRLB_FIFOCLR_RXFIFO_Val _UINT32_(0x2)                                        /* (SERCOM_I2CS_CTRLB) Clear RX FIFO  */
#define   SERCOM_I2CS_CTRLB_FIFOCLR_BOTH_Val  _UINT32_(0x3)                                        /* (SERCOM_I2CS_CTRLB) Clear both TX and RF FIFOs  */
#define SERCOM_I2CS_CTRLB_FIFOCLR_NONE        (SERCOM_I2CS_CTRLB_FIFOCLR_NONE_Val << SERCOM_I2CS_CTRLB_FIFOCLR_Pos) /* (SERCOM_I2CS_CTRLB) No action Position */
#define SERCOM_I2CS_CTRLB_FIFOCLR_TXFIFO      (SERCOM_I2CS_CTRLB_FIFOCLR_TXFIFO_Val << SERCOM_I2CS_CTRLB_FIFOCLR_Pos) /* (SERCOM_I2CS_CTRLB) Clear TX FIFO Position */
#define SERCOM_I2CS_CTRLB_FIFOCLR_RXFIFO      (SERCOM_I2CS_CTRLB_FIFOCLR_RXFIFO_Val << SERCOM_I2CS_CTRLB_FIFOCLR_Pos) /* (SERCOM_I2CS_CTRLB) Clear RX FIFO Position */
#define SERCOM_I2CS_CTRLB_FIFOCLR_BOTH        (SERCOM_I2CS_CTRLB_FIFOCLR_BOTH_Val << SERCOM_I2CS_CTRLB_FIFOCLR_Pos) /* (SERCOM_I2CS_CTRLB) Clear both TX and RF FIFOs Position */
#define SERCOM_I2CS_CTRLB_Msk                 _UINT32_(0x00C7C700)                                 /* (SERCOM_I2CS_CTRLB) Register Mask  */


/* -------- SERCOM_SPIM_CTRLB : (SERCOM Offset: 0x04) (R/W 32) SPIM Control B -------- */
#define SERCOM_SPIM_CTRLB_RESETVALUE          _UINT32_(0x00)                                       /*  (SERCOM_SPIM_CTRLB) SPIM Control B  Reset Value */

#define SERCOM_SPIM_CTRLB_CHSIZE_Pos          _UINT32_(0)                                          /* (SERCOM_SPIM_CTRLB) Character Size Position */
#define SERCOM_SPIM_CTRLB_CHSIZE_Msk          (_UINT32_(0x7) << SERCOM_SPIM_CTRLB_CHSIZE_Pos)      /* (SERCOM_SPIM_CTRLB) Character Size Mask */
#define SERCOM_SPIM_CTRLB_CHSIZE(value)       (SERCOM_SPIM_CTRLB_CHSIZE_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLB_CHSIZE_Pos)) /* Assignment of value for CHSIZE in the SERCOM_SPIM_CTRLB register */
#define   SERCOM_SPIM_CTRLB_CHSIZE_8_BIT_Val  _UINT32_(0x0)                                        /* (SERCOM_SPIM_CTRLB) 8-bits character  */
#define   SERCOM_SPIM_CTRLB_CHSIZE_9_BIT_Val  _UINT32_(0x1)                                        /* (SERCOM_SPIM_CTRLB) 9-bits character  */
#define SERCOM_SPIM_CTRLB_CHSIZE_8_BIT        (SERCOM_SPIM_CTRLB_CHSIZE_8_BIT_Val << SERCOM_SPIM_CTRLB_CHSIZE_Pos) /* (SERCOM_SPIM_CTRLB) 8-bits character Position */
#define SERCOM_SPIM_CTRLB_CHSIZE_9_BIT        (SERCOM_SPIM_CTRLB_CHSIZE_9_BIT_Val << SERCOM_SPIM_CTRLB_CHSIZE_Pos) /* (SERCOM_SPIM_CTRLB) 9-bits character Position */
#define SERCOM_SPIM_CTRLB_PLOADEN_Pos         _UINT32_(6)                                          /* (SERCOM_SPIM_CTRLB) Data Preload Enable Position */
#define SERCOM_SPIM_CTRLB_PLOADEN_Msk         (_UINT32_(0x1) << SERCOM_SPIM_CTRLB_PLOADEN_Pos)     /* (SERCOM_SPIM_CTRLB) Data Preload Enable Mask */
#define SERCOM_SPIM_CTRLB_PLOADEN(value)      (SERCOM_SPIM_CTRLB_PLOADEN_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLB_PLOADEN_Pos)) /* Assignment of value for PLOADEN in the SERCOM_SPIM_CTRLB register */
#define SERCOM_SPIM_CTRLB_SSDE_Pos            _UINT32_(9)                                          /* (SERCOM_SPIM_CTRLB) Slave Select Low Detect Enable Position */
#define SERCOM_SPIM_CTRLB_SSDE_Msk            (_UINT32_(0x1) << SERCOM_SPIM_CTRLB_SSDE_Pos)        /* (SERCOM_SPIM_CTRLB) Slave Select Low Detect Enable Mask */
#define SERCOM_SPIM_CTRLB_SSDE(value)         (SERCOM_SPIM_CTRLB_SSDE_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLB_SSDE_Pos)) /* Assignment of value for SSDE in the SERCOM_SPIM_CTRLB register */
#define   SERCOM_SPIM_CTRLB_SSDE_DISABLE_Val  _UINT32_(0x0)                                        /* (SERCOM_SPIM_CTRLB) SS low detector is disabled  */
#define   SERCOM_SPIM_CTRLB_SSDE_ENABLE_Val   _UINT32_(0x1)                                        /* (SERCOM_SPIM_CTRLB) SS low detector is enabled  */
#define SERCOM_SPIM_CTRLB_SSDE_DISABLE        (SERCOM_SPIM_CTRLB_SSDE_DISABLE_Val << SERCOM_SPIM_CTRLB_SSDE_Pos) /* (SERCOM_SPIM_CTRLB) SS low detector is disabled Position */
#define SERCOM_SPIM_CTRLB_SSDE_ENABLE         (SERCOM_SPIM_CTRLB_SSDE_ENABLE_Val << SERCOM_SPIM_CTRLB_SSDE_Pos) /* (SERCOM_SPIM_CTRLB) SS low detector is enabled Position */
#define SERCOM_SPIM_CTRLB_MSSEN_Pos           _UINT32_(13)                                         /* (SERCOM_SPIM_CTRLB) Master Slave Select Enable Position */
#define SERCOM_SPIM_CTRLB_MSSEN_Msk           (_UINT32_(0x1) << SERCOM_SPIM_CTRLB_MSSEN_Pos)       /* (SERCOM_SPIM_CTRLB) Master Slave Select Enable Mask */
#define SERCOM_SPIM_CTRLB_MSSEN(value)        (SERCOM_SPIM_CTRLB_MSSEN_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLB_MSSEN_Pos)) /* Assignment of value for MSSEN in the SERCOM_SPIM_CTRLB register */
#define   SERCOM_SPIM_CTRLB_MSSEN_DISABLE_Val _UINT32_(0x0)                                        /* (SERCOM_SPIM_CTRLB) Hardware SS control is disabled  */
#define   SERCOM_SPIM_CTRLB_MSSEN_ENABLE_Val  _UINT32_(0x1)                                        /* (SERCOM_SPIM_CTRLB) Hardware SS control is enabled  */
#define SERCOM_SPIM_CTRLB_MSSEN_DISABLE       (SERCOM_SPIM_CTRLB_MSSEN_DISABLE_Val << SERCOM_SPIM_CTRLB_MSSEN_Pos) /* (SERCOM_SPIM_CTRLB) Hardware SS control is disabled Position */
#define SERCOM_SPIM_CTRLB_MSSEN_ENABLE        (SERCOM_SPIM_CTRLB_MSSEN_ENABLE_Val << SERCOM_SPIM_CTRLB_MSSEN_Pos) /* (SERCOM_SPIM_CTRLB) Hardware SS control is enabled Position */
#define SERCOM_SPIM_CTRLB_AMODE_Pos           _UINT32_(14)                                         /* (SERCOM_SPIM_CTRLB) Address Mode Position */
#define SERCOM_SPIM_CTRLB_AMODE_Msk           (_UINT32_(0x3) << SERCOM_SPIM_CTRLB_AMODE_Pos)       /* (SERCOM_SPIM_CTRLB) Address Mode Mask */
#define SERCOM_SPIM_CTRLB_AMODE(value)        (SERCOM_SPIM_CTRLB_AMODE_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLB_AMODE_Pos)) /* Assignment of value for AMODE in the SERCOM_SPIM_CTRLB register */
#define   SERCOM_SPIM_CTRLB_AMODE_MASK_Val    _UINT32_(0x0)                                        /* (SERCOM_SPIM_CTRLB) ADDRMASK is used as a mask to the AADR register  */
#define   SERCOM_SPIM_CTRLB_AMODE_2ADDRS_Val  _UINT32_(0x1)                                        /* (SERCOM_SPIM_CTRLB) The slave responds to the two unique addresses in ADDR and ADDRMASK  */
#define   SERCOM_SPIM_CTRLB_AMODE_RANGE_Val   _UINT32_(0x2)                                        /* (SERCOM_SPIM_CTRLB) The slave responds to the range of addresses between and including ADDR and ADDRMASK. ADDR is the upper limit  */
#define SERCOM_SPIM_CTRLB_AMODE_MASK          (SERCOM_SPIM_CTRLB_AMODE_MASK_Val << SERCOM_SPIM_CTRLB_AMODE_Pos) /* (SERCOM_SPIM_CTRLB) ADDRMASK is used as a mask to the AADR register Position */
#define SERCOM_SPIM_CTRLB_AMODE_2ADDRS        (SERCOM_SPIM_CTRLB_AMODE_2ADDRS_Val << SERCOM_SPIM_CTRLB_AMODE_Pos) /* (SERCOM_SPIM_CTRLB) The slave responds to the two unique addresses in ADDR and ADDRMASK Position */
#define SERCOM_SPIM_CTRLB_AMODE_RANGE         (SERCOM_SPIM_CTRLB_AMODE_RANGE_Val << SERCOM_SPIM_CTRLB_AMODE_Pos) /* (SERCOM_SPIM_CTRLB) The slave responds to the range of addresses between and including ADDR and ADDRMASK. ADDR is the upper limit Position */
#define SERCOM_SPIM_CTRLB_RXEN_Pos            _UINT32_(17)                                         /* (SERCOM_SPIM_CTRLB) Receiver Enable Position */
#define SERCOM_SPIM_CTRLB_RXEN_Msk            (_UINT32_(0x1) << SERCOM_SPIM_CTRLB_RXEN_Pos)        /* (SERCOM_SPIM_CTRLB) Receiver Enable Mask */
#define SERCOM_SPIM_CTRLB_RXEN(value)         (SERCOM_SPIM_CTRLB_RXEN_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLB_RXEN_Pos)) /* Assignment of value for RXEN in the SERCOM_SPIM_CTRLB register */
#define SERCOM_SPIM_CTRLB_FIFOCLR_Pos         _UINT32_(22)                                         /* (SERCOM_SPIM_CTRLB) FIFO Clear Position */
#define SERCOM_SPIM_CTRLB_FIFOCLR_Msk         (_UINT32_(0x3) << SERCOM_SPIM_CTRLB_FIFOCLR_Pos)     /* (SERCOM_SPIM_CTRLB) FIFO Clear Mask */
#define SERCOM_SPIM_CTRLB_FIFOCLR(value)      (SERCOM_SPIM_CTRLB_FIFOCLR_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLB_FIFOCLR_Pos)) /* Assignment of value for FIFOCLR in the SERCOM_SPIM_CTRLB register */
#define   SERCOM_SPIM_CTRLB_FIFOCLR_NONE_Val  _UINT32_(0x0)                                        /* (SERCOM_SPIM_CTRLB) No action  */
#define   SERCOM_SPIM_CTRLB_FIFOCLR_TXFIFO_Val _UINT32_(0x1)                                        /* (SERCOM_SPIM_CTRLB) Clear TX FIFO  */
#define   SERCOM_SPIM_CTRLB_FIFOCLR_RXFIFO_Val _UINT32_(0x2)                                        /* (SERCOM_SPIM_CTRLB) Clear RX FIFO  */
#define   SERCOM_SPIM_CTRLB_FIFOCLR_BOTH_Val  _UINT32_(0x3)                                        /* (SERCOM_SPIM_CTRLB) Clear both TX and RF FIFOs  */
#define SERCOM_SPIM_CTRLB_FIFOCLR_NONE        (SERCOM_SPIM_CTRLB_FIFOCLR_NONE_Val << SERCOM_SPIM_CTRLB_FIFOCLR_Pos) /* (SERCOM_SPIM_CTRLB) No action Position */
#define SERCOM_SPIM_CTRLB_FIFOCLR_TXFIFO      (SERCOM_SPIM_CTRLB_FIFOCLR_TXFIFO_Val << SERCOM_SPIM_CTRLB_FIFOCLR_Pos) /* (SERCOM_SPIM_CTRLB) Clear TX FIFO Position */
#define SERCOM_SPIM_CTRLB_FIFOCLR_RXFIFO      (SERCOM_SPIM_CTRLB_FIFOCLR_RXFIFO_Val << SERCOM_SPIM_CTRLB_FIFOCLR_Pos) /* (SERCOM_SPIM_CTRLB) Clear RX FIFO Position */
#define SERCOM_SPIM_CTRLB_FIFOCLR_BOTH        (SERCOM_SPIM_CTRLB_FIFOCLR_BOTH_Val << SERCOM_SPIM_CTRLB_FIFOCLR_Pos) /* (SERCOM_SPIM_CTRLB) Clear both TX and RF FIFOs Position */
#define SERCOM_SPIM_CTRLB_Msk                 _UINT32_(0x00C2E247)                                 /* (SERCOM_SPIM_CTRLB) Register Mask  */


/* -------- SERCOM_SPIS_CTRLB : (SERCOM Offset: 0x04) (R/W 32) SPIS Control B -------- */
#define SERCOM_SPIS_CTRLB_RESETVALUE          _UINT32_(0x00)                                       /*  (SERCOM_SPIS_CTRLB) SPIS Control B  Reset Value */

#define SERCOM_SPIS_CTRLB_CHSIZE_Pos          _UINT32_(0)                                          /* (SERCOM_SPIS_CTRLB) Character Size Position */
#define SERCOM_SPIS_CTRLB_CHSIZE_Msk          (_UINT32_(0x7) << SERCOM_SPIS_CTRLB_CHSIZE_Pos)      /* (SERCOM_SPIS_CTRLB) Character Size Mask */
#define SERCOM_SPIS_CTRLB_CHSIZE(value)       (SERCOM_SPIS_CTRLB_CHSIZE_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLB_CHSIZE_Pos)) /* Assignment of value for CHSIZE in the SERCOM_SPIS_CTRLB register */
#define   SERCOM_SPIS_CTRLB_CHSIZE_8_BIT_Val  _UINT32_(0x0)                                        /* (SERCOM_SPIS_CTRLB) 8-bits character  */
#define   SERCOM_SPIS_CTRLB_CHSIZE_9_BIT_Val  _UINT32_(0x1)                                        /* (SERCOM_SPIS_CTRLB) 9-bits character  */
#define SERCOM_SPIS_CTRLB_CHSIZE_8_BIT        (SERCOM_SPIS_CTRLB_CHSIZE_8_BIT_Val << SERCOM_SPIS_CTRLB_CHSIZE_Pos) /* (SERCOM_SPIS_CTRLB) 8-bits character Position */
#define SERCOM_SPIS_CTRLB_CHSIZE_9_BIT        (SERCOM_SPIS_CTRLB_CHSIZE_9_BIT_Val << SERCOM_SPIS_CTRLB_CHSIZE_Pos) /* (SERCOM_SPIS_CTRLB) 9-bits character Position */
#define SERCOM_SPIS_CTRLB_PLOADEN_Pos         _UINT32_(6)                                          /* (SERCOM_SPIS_CTRLB) Data Preload Enable Position */
#define SERCOM_SPIS_CTRLB_PLOADEN_Msk         (_UINT32_(0x1) << SERCOM_SPIS_CTRLB_PLOADEN_Pos)     /* (SERCOM_SPIS_CTRLB) Data Preload Enable Mask */
#define SERCOM_SPIS_CTRLB_PLOADEN(value)      (SERCOM_SPIS_CTRLB_PLOADEN_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLB_PLOADEN_Pos)) /* Assignment of value for PLOADEN in the SERCOM_SPIS_CTRLB register */
#define SERCOM_SPIS_CTRLB_SSDE_Pos            _UINT32_(9)                                          /* (SERCOM_SPIS_CTRLB) Slave Select Low Detect Enable Position */
#define SERCOM_SPIS_CTRLB_SSDE_Msk            (_UINT32_(0x1) << SERCOM_SPIS_CTRLB_SSDE_Pos)        /* (SERCOM_SPIS_CTRLB) Slave Select Low Detect Enable Mask */
#define SERCOM_SPIS_CTRLB_SSDE(value)         (SERCOM_SPIS_CTRLB_SSDE_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLB_SSDE_Pos)) /* Assignment of value for SSDE in the SERCOM_SPIS_CTRLB register */
#define SERCOM_SPIS_CTRLB_MSSEN_Pos           _UINT32_(13)                                         /* (SERCOM_SPIS_CTRLB) Master Slave Select Enable Position */
#define SERCOM_SPIS_CTRLB_MSSEN_Msk           (_UINT32_(0x1) << SERCOM_SPIS_CTRLB_MSSEN_Pos)       /* (SERCOM_SPIS_CTRLB) Master Slave Select Enable Mask */
#define SERCOM_SPIS_CTRLB_MSSEN(value)        (SERCOM_SPIS_CTRLB_MSSEN_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLB_MSSEN_Pos)) /* Assignment of value for MSSEN in the SERCOM_SPIS_CTRLB register */
#define SERCOM_SPIS_CTRLB_AMODE_Pos           _UINT32_(14)                                         /* (SERCOM_SPIS_CTRLB) Address Mode Position */
#define SERCOM_SPIS_CTRLB_AMODE_Msk           (_UINT32_(0x3) << SERCOM_SPIS_CTRLB_AMODE_Pos)       /* (SERCOM_SPIS_CTRLB) Address Mode Mask */
#define SERCOM_SPIS_CTRLB_AMODE(value)        (SERCOM_SPIS_CTRLB_AMODE_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLB_AMODE_Pos)) /* Assignment of value for AMODE in the SERCOM_SPIS_CTRLB register */
#define   SERCOM_SPIS_CTRLB_AMODE_MASK_Val    _UINT32_(0x0)                                        /* (SERCOM_SPIS_CTRLB) ADDRMASK is used as a mask to the AADR register  */
#define   SERCOM_SPIS_CTRLB_AMODE_2ADDRS_Val  _UINT32_(0x1)                                        /* (SERCOM_SPIS_CTRLB) The slave responds to the two unique addresses in ADDR and ADDRMASK  */
#define   SERCOM_SPIS_CTRLB_AMODE_RANGE_Val   _UINT32_(0x2)                                        /* (SERCOM_SPIS_CTRLB) The slave responds to the range of addresses between and including ADDR and ADDRMASK. ADDR is the upper limit  */
#define SERCOM_SPIS_CTRLB_AMODE_MASK          (SERCOM_SPIS_CTRLB_AMODE_MASK_Val << SERCOM_SPIS_CTRLB_AMODE_Pos) /* (SERCOM_SPIS_CTRLB) ADDRMASK is used as a mask to the AADR register Position */
#define SERCOM_SPIS_CTRLB_AMODE_2ADDRS        (SERCOM_SPIS_CTRLB_AMODE_2ADDRS_Val << SERCOM_SPIS_CTRLB_AMODE_Pos) /* (SERCOM_SPIS_CTRLB) The slave responds to the two unique addresses in ADDR and ADDRMASK Position */
#define SERCOM_SPIS_CTRLB_AMODE_RANGE         (SERCOM_SPIS_CTRLB_AMODE_RANGE_Val << SERCOM_SPIS_CTRLB_AMODE_Pos) /* (SERCOM_SPIS_CTRLB) The slave responds to the range of addresses between and including ADDR and ADDRMASK. ADDR is the upper limit Position */
#define SERCOM_SPIS_CTRLB_RXEN_Pos            _UINT32_(17)                                         /* (SERCOM_SPIS_CTRLB) Receiver Enable Position */
#define SERCOM_SPIS_CTRLB_RXEN_Msk            (_UINT32_(0x1) << SERCOM_SPIS_CTRLB_RXEN_Pos)        /* (SERCOM_SPIS_CTRLB) Receiver Enable Mask */
#define SERCOM_SPIS_CTRLB_RXEN(value)         (SERCOM_SPIS_CTRLB_RXEN_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLB_RXEN_Pos)) /* Assignment of value for RXEN in the SERCOM_SPIS_CTRLB register */
#define SERCOM_SPIS_CTRLB_FIFOCLR_Pos         _UINT32_(22)                                         /* (SERCOM_SPIS_CTRLB) FIFO Clear Position */
#define SERCOM_SPIS_CTRLB_FIFOCLR_Msk         (_UINT32_(0x3) << SERCOM_SPIS_CTRLB_FIFOCLR_Pos)     /* (SERCOM_SPIS_CTRLB) FIFO Clear Mask */
#define SERCOM_SPIS_CTRLB_FIFOCLR(value)      (SERCOM_SPIS_CTRLB_FIFOCLR_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLB_FIFOCLR_Pos)) /* Assignment of value for FIFOCLR in the SERCOM_SPIS_CTRLB register */
#define   SERCOM_SPIS_CTRLB_FIFOCLR_NONE_Val  _UINT32_(0x0)                                        /* (SERCOM_SPIS_CTRLB) No action  */
#define   SERCOM_SPIS_CTRLB_FIFOCLR_TXFIFO_Val _UINT32_(0x1)                                        /* (SERCOM_SPIS_CTRLB) Clear TX FIFO  */
#define   SERCOM_SPIS_CTRLB_FIFOCLR_RXFIFO_Val _UINT32_(0x2)                                        /* (SERCOM_SPIS_CTRLB) Clear RX FIFO  */
#define   SERCOM_SPIS_CTRLB_FIFOCLR_BOTH_Val  _UINT32_(0x3)                                        /* (SERCOM_SPIS_CTRLB) Clear both TX and RF FIFOs  */
#define SERCOM_SPIS_CTRLB_FIFOCLR_NONE        (SERCOM_SPIS_CTRLB_FIFOCLR_NONE_Val << SERCOM_SPIS_CTRLB_FIFOCLR_Pos) /* (SERCOM_SPIS_CTRLB) No action Position */
#define SERCOM_SPIS_CTRLB_FIFOCLR_TXFIFO      (SERCOM_SPIS_CTRLB_FIFOCLR_TXFIFO_Val << SERCOM_SPIS_CTRLB_FIFOCLR_Pos) /* (SERCOM_SPIS_CTRLB) Clear TX FIFO Position */
#define SERCOM_SPIS_CTRLB_FIFOCLR_RXFIFO      (SERCOM_SPIS_CTRLB_FIFOCLR_RXFIFO_Val << SERCOM_SPIS_CTRLB_FIFOCLR_Pos) /* (SERCOM_SPIS_CTRLB) Clear RX FIFO Position */
#define SERCOM_SPIS_CTRLB_FIFOCLR_BOTH        (SERCOM_SPIS_CTRLB_FIFOCLR_BOTH_Val << SERCOM_SPIS_CTRLB_FIFOCLR_Pos) /* (SERCOM_SPIS_CTRLB) Clear both TX and RF FIFOs Position */
#define SERCOM_SPIS_CTRLB_Msk                 _UINT32_(0x00C2E247)                                 /* (SERCOM_SPIS_CTRLB) Register Mask  */


/* -------- SERCOM_USART_INT_CTRLB : (SERCOM Offset: 0x04) (R/W 32) USART Control B -------- */
#define SERCOM_USART_INT_CTRLB_RESETVALUE     _UINT32_(0x00)                                       /*  (SERCOM_USART_INT_CTRLB) USART Control B  Reset Value */

#define SERCOM_USART_INT_CTRLB_CHSIZE_Pos     _UINT32_(0)                                          /* (SERCOM_USART_INT_CTRLB) Character Size Position */
#define SERCOM_USART_INT_CTRLB_CHSIZE_Msk     (_UINT32_(0x7) << SERCOM_USART_INT_CTRLB_CHSIZE_Pos) /* (SERCOM_USART_INT_CTRLB) Character Size Mask */
#define SERCOM_USART_INT_CTRLB_CHSIZE(value)  (SERCOM_USART_INT_CTRLB_CHSIZE_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLB_CHSIZE_Pos)) /* Assignment of value for CHSIZE in the SERCOM_USART_INT_CTRLB register */
#define   SERCOM_USART_INT_CTRLB_CHSIZE_8_BIT_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLB) 8-bits character  */
#define   SERCOM_USART_INT_CTRLB_CHSIZE_9_BIT_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLB) 9-bits character  */
#define   SERCOM_USART_INT_CTRLB_CHSIZE_5_BIT_Val _UINT32_(0x5)                                        /* (SERCOM_USART_INT_CTRLB) 5-bits character  */
#define   SERCOM_USART_INT_CTRLB_CHSIZE_6_BIT_Val _UINT32_(0x6)                                        /* (SERCOM_USART_INT_CTRLB) 6-bits character  */
#define   SERCOM_USART_INT_CTRLB_CHSIZE_7_BIT_Val _UINT32_(0x7)                                        /* (SERCOM_USART_INT_CTRLB) 7-bits character  */
#define SERCOM_USART_INT_CTRLB_CHSIZE_8_BIT   (SERCOM_USART_INT_CTRLB_CHSIZE_8_BIT_Val << SERCOM_USART_INT_CTRLB_CHSIZE_Pos) /* (SERCOM_USART_INT_CTRLB) 8-bits character Position */
#define SERCOM_USART_INT_CTRLB_CHSIZE_9_BIT   (SERCOM_USART_INT_CTRLB_CHSIZE_9_BIT_Val << SERCOM_USART_INT_CTRLB_CHSIZE_Pos) /* (SERCOM_USART_INT_CTRLB) 9-bits character Position */
#define SERCOM_USART_INT_CTRLB_CHSIZE_5_BIT   (SERCOM_USART_INT_CTRLB_CHSIZE_5_BIT_Val << SERCOM_USART_INT_CTRLB_CHSIZE_Pos) /* (SERCOM_USART_INT_CTRLB) 5-bits character Position */
#define SERCOM_USART_INT_CTRLB_CHSIZE_6_BIT   (SERCOM_USART_INT_CTRLB_CHSIZE_6_BIT_Val << SERCOM_USART_INT_CTRLB_CHSIZE_Pos) /* (SERCOM_USART_INT_CTRLB) 6-bits character Position */
#define SERCOM_USART_INT_CTRLB_CHSIZE_7_BIT   (SERCOM_USART_INT_CTRLB_CHSIZE_7_BIT_Val << SERCOM_USART_INT_CTRLB_CHSIZE_Pos) /* (SERCOM_USART_INT_CTRLB) 7-bits character Position */
#define SERCOM_USART_INT_CTRLB_SBMODE_Pos     _UINT32_(6)                                          /* (SERCOM_USART_INT_CTRLB) Stop Bit Mode Position */
#define SERCOM_USART_INT_CTRLB_SBMODE_Msk     (_UINT32_(0x1) << SERCOM_USART_INT_CTRLB_SBMODE_Pos) /* (SERCOM_USART_INT_CTRLB) Stop Bit Mode Mask */
#define SERCOM_USART_INT_CTRLB_SBMODE(value)  (SERCOM_USART_INT_CTRLB_SBMODE_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLB_SBMODE_Pos)) /* Assignment of value for SBMODE in the SERCOM_USART_INT_CTRLB register */
#define   SERCOM_USART_INT_CTRLB_SBMODE_1_BIT_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLB) One stop bit  */
#define   SERCOM_USART_INT_CTRLB_SBMODE_2_BIT_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLB) Two stop bits  */
#define SERCOM_USART_INT_CTRLB_SBMODE_1_BIT   (SERCOM_USART_INT_CTRLB_SBMODE_1_BIT_Val << SERCOM_USART_INT_CTRLB_SBMODE_Pos) /* (SERCOM_USART_INT_CTRLB) One stop bit Position */
#define SERCOM_USART_INT_CTRLB_SBMODE_2_BIT   (SERCOM_USART_INT_CTRLB_SBMODE_2_BIT_Val << SERCOM_USART_INT_CTRLB_SBMODE_Pos) /* (SERCOM_USART_INT_CTRLB) Two stop bits Position */
#define SERCOM_USART_INT_CTRLB_COLDEN_Pos     _UINT32_(8)                                          /* (SERCOM_USART_INT_CTRLB) Collision Detection Enable Position */
#define SERCOM_USART_INT_CTRLB_COLDEN_Msk     (_UINT32_(0x1) << SERCOM_USART_INT_CTRLB_COLDEN_Pos) /* (SERCOM_USART_INT_CTRLB) Collision Detection Enable Mask */
#define SERCOM_USART_INT_CTRLB_COLDEN(value)  (SERCOM_USART_INT_CTRLB_COLDEN_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLB_COLDEN_Pos)) /* Assignment of value for COLDEN in the SERCOM_USART_INT_CTRLB register */
#define SERCOM_USART_INT_CTRLB_SFDE_Pos       _UINT32_(9)                                          /* (SERCOM_USART_INT_CTRLB) Start of Frame Detection Enable Position */
#define SERCOM_USART_INT_CTRLB_SFDE_Msk       (_UINT32_(0x1) << SERCOM_USART_INT_CTRLB_SFDE_Pos)   /* (SERCOM_USART_INT_CTRLB) Start of Frame Detection Enable Mask */
#define SERCOM_USART_INT_CTRLB_SFDE(value)    (SERCOM_USART_INT_CTRLB_SFDE_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLB_SFDE_Pos)) /* Assignment of value for SFDE in the SERCOM_USART_INT_CTRLB register */
#define SERCOM_USART_INT_CTRLB_ENC_Pos        _UINT32_(10)                                         /* (SERCOM_USART_INT_CTRLB) Encoding Format Position */
#define SERCOM_USART_INT_CTRLB_ENC_Msk        (_UINT32_(0x1) << SERCOM_USART_INT_CTRLB_ENC_Pos)    /* (SERCOM_USART_INT_CTRLB) Encoding Format Mask */
#define SERCOM_USART_INT_CTRLB_ENC(value)     (SERCOM_USART_INT_CTRLB_ENC_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLB_ENC_Pos)) /* Assignment of value for ENC in the SERCOM_USART_INT_CTRLB register */
#define   SERCOM_USART_INT_CTRLB_ENC_DISABLE_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLB) Data is not encoded  */
#define   SERCOM_USART_INT_CTRLB_ENC_IRDA_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLB) Data is IrDA encoded  */
#define SERCOM_USART_INT_CTRLB_ENC_DISABLE    (SERCOM_USART_INT_CTRLB_ENC_DISABLE_Val << SERCOM_USART_INT_CTRLB_ENC_Pos) /* (SERCOM_USART_INT_CTRLB) Data is not encoded Position */
#define SERCOM_USART_INT_CTRLB_ENC_IRDA       (SERCOM_USART_INT_CTRLB_ENC_IRDA_Val << SERCOM_USART_INT_CTRLB_ENC_Pos) /* (SERCOM_USART_INT_CTRLB) Data is IrDA encoded Position */
#define SERCOM_USART_INT_CTRLB_PMODE_Pos      _UINT32_(13)                                         /* (SERCOM_USART_INT_CTRLB) Parity Mode Position */
#define SERCOM_USART_INT_CTRLB_PMODE_Msk      (_UINT32_(0x1) << SERCOM_USART_INT_CTRLB_PMODE_Pos)  /* (SERCOM_USART_INT_CTRLB) Parity Mode Mask */
#define SERCOM_USART_INT_CTRLB_PMODE(value)   (SERCOM_USART_INT_CTRLB_PMODE_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLB_PMODE_Pos)) /* Assignment of value for PMODE in the SERCOM_USART_INT_CTRLB register */
#define   SERCOM_USART_INT_CTRLB_PMODE_EVEN_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLB) Even parity  */
#define   SERCOM_USART_INT_CTRLB_PMODE_ODD_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLB) Odd parity  */
#define SERCOM_USART_INT_CTRLB_PMODE_EVEN     (SERCOM_USART_INT_CTRLB_PMODE_EVEN_Val << SERCOM_USART_INT_CTRLB_PMODE_Pos) /* (SERCOM_USART_INT_CTRLB) Even parity Position */
#define SERCOM_USART_INT_CTRLB_PMODE_ODD      (SERCOM_USART_INT_CTRLB_PMODE_ODD_Val << SERCOM_USART_INT_CTRLB_PMODE_Pos) /* (SERCOM_USART_INT_CTRLB) Odd parity Position */
#define SERCOM_USART_INT_CTRLB_TXEN_Pos       _UINT32_(16)                                         /* (SERCOM_USART_INT_CTRLB) Transmitter Enable Position */
#define SERCOM_USART_INT_CTRLB_TXEN_Msk       (_UINT32_(0x1) << SERCOM_USART_INT_CTRLB_TXEN_Pos)   /* (SERCOM_USART_INT_CTRLB) Transmitter Enable Mask */
#define SERCOM_USART_INT_CTRLB_TXEN(value)    (SERCOM_USART_INT_CTRLB_TXEN_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLB_TXEN_Pos)) /* Assignment of value for TXEN in the SERCOM_USART_INT_CTRLB register */
#define SERCOM_USART_INT_CTRLB_RXEN_Pos       _UINT32_(17)                                         /* (SERCOM_USART_INT_CTRLB) Receiver Enable Position */
#define SERCOM_USART_INT_CTRLB_RXEN_Msk       (_UINT32_(0x1) << SERCOM_USART_INT_CTRLB_RXEN_Pos)   /* (SERCOM_USART_INT_CTRLB) Receiver Enable Mask */
#define SERCOM_USART_INT_CTRLB_RXEN(value)    (SERCOM_USART_INT_CTRLB_RXEN_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLB_RXEN_Pos)) /* Assignment of value for RXEN in the SERCOM_USART_INT_CTRLB register */
#define SERCOM_USART_INT_CTRLB_FIFOCLR_Pos    _UINT32_(22)                                         /* (SERCOM_USART_INT_CTRLB) FIFO Clear Position */
#define SERCOM_USART_INT_CTRLB_FIFOCLR_Msk    (_UINT32_(0x3) << SERCOM_USART_INT_CTRLB_FIFOCLR_Pos) /* (SERCOM_USART_INT_CTRLB) FIFO Clear Mask */
#define SERCOM_USART_INT_CTRLB_FIFOCLR(value) (SERCOM_USART_INT_CTRLB_FIFOCLR_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLB_FIFOCLR_Pos)) /* Assignment of value for FIFOCLR in the SERCOM_USART_INT_CTRLB register */
#define   SERCOM_USART_INT_CTRLB_FIFOCLR_NONE_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLB) No action  */
#define   SERCOM_USART_INT_CTRLB_FIFOCLR_TXFIFO_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLB) Clear TX FIFO  */
#define   SERCOM_USART_INT_CTRLB_FIFOCLR_RXFIFO_Val _UINT32_(0x2)                                        /* (SERCOM_USART_INT_CTRLB) Clear RX FIFO  */
#define   SERCOM_USART_INT_CTRLB_FIFOCLR_BOTH_Val _UINT32_(0x3)                                        /* (SERCOM_USART_INT_CTRLB) Clear both TX and RF FIFOs  */
#define SERCOM_USART_INT_CTRLB_FIFOCLR_NONE   (SERCOM_USART_INT_CTRLB_FIFOCLR_NONE_Val << SERCOM_USART_INT_CTRLB_FIFOCLR_Pos) /* (SERCOM_USART_INT_CTRLB) No action Position */
#define SERCOM_USART_INT_CTRLB_FIFOCLR_TXFIFO (SERCOM_USART_INT_CTRLB_FIFOCLR_TXFIFO_Val << SERCOM_USART_INT_CTRLB_FIFOCLR_Pos) /* (SERCOM_USART_INT_CTRLB) Clear TX FIFO Position */
#define SERCOM_USART_INT_CTRLB_FIFOCLR_RXFIFO (SERCOM_USART_INT_CTRLB_FIFOCLR_RXFIFO_Val << SERCOM_USART_INT_CTRLB_FIFOCLR_Pos) /* (SERCOM_USART_INT_CTRLB) Clear RX FIFO Position */
#define SERCOM_USART_INT_CTRLB_FIFOCLR_BOTH   (SERCOM_USART_INT_CTRLB_FIFOCLR_BOTH_Val << SERCOM_USART_INT_CTRLB_FIFOCLR_Pos) /* (SERCOM_USART_INT_CTRLB) Clear both TX and RF FIFOs Position */
#define SERCOM_USART_INT_CTRLB_LINCMD_Pos     _UINT32_(24)                                         /* (SERCOM_USART_INT_CTRLB) LIN Command Position */
#define SERCOM_USART_INT_CTRLB_LINCMD_Msk     (_UINT32_(0x3) << SERCOM_USART_INT_CTRLB_LINCMD_Pos) /* (SERCOM_USART_INT_CTRLB) LIN Command Mask */
#define SERCOM_USART_INT_CTRLB_LINCMD(value)  (SERCOM_USART_INT_CTRLB_LINCMD_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLB_LINCMD_Pos)) /* Assignment of value for LINCMD in the SERCOM_USART_INT_CTRLB register */
#define   SERCOM_USART_INT_CTRLB_LINCMD_NONE_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLB) Normal USART transmission  */
#define   SERCOM_USART_INT_CTRLB_LINCMD_SOFTWARE_CONTROL_TRANSMIT_CMD_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLB) Break field is transmitted when DATA is written  */
#define   SERCOM_USART_INT_CTRLB_LINCMD_AUTO_TRANSMIT_CMD_Val _UINT32_(0x2)                                        /* (SERCOM_USART_INT_CTRLB) Break, synch and identifier are automaticcaly transmitted when DATA is written with the identifier  */
#define SERCOM_USART_INT_CTRLB_LINCMD_NONE    (SERCOM_USART_INT_CTRLB_LINCMD_NONE_Val << SERCOM_USART_INT_CTRLB_LINCMD_Pos) /* (SERCOM_USART_INT_CTRLB) Normal USART transmission Position */
#define SERCOM_USART_INT_CTRLB_LINCMD_SOFTWARE_CONTROL_TRANSMIT_CMD (SERCOM_USART_INT_CTRLB_LINCMD_SOFTWARE_CONTROL_TRANSMIT_CMD_Val << SERCOM_USART_INT_CTRLB_LINCMD_Pos) /* (SERCOM_USART_INT_CTRLB) Break field is transmitted when DATA is written Position */
#define SERCOM_USART_INT_CTRLB_LINCMD_AUTO_TRANSMIT_CMD (SERCOM_USART_INT_CTRLB_LINCMD_AUTO_TRANSMIT_CMD_Val << SERCOM_USART_INT_CTRLB_LINCMD_Pos) /* (SERCOM_USART_INT_CTRLB) Break, synch and identifier are automaticcaly transmitted when DATA is written with the identifier Position */
#define SERCOM_USART_INT_CTRLB_Msk            _UINT32_(0x03C32747)                                 /* (SERCOM_USART_INT_CTRLB) Register Mask  */


/* -------- SERCOM_I2CM_CTRLC : (SERCOM Offset: 0x08) (R/W 32) I2CM Control C -------- */
#define SERCOM_I2CM_CTRLC_RESETVALUE          _UINT32_(0x00)                                       /*  (SERCOM_I2CM_CTRLC) I2CM Control C  Reset Value */

#define SERCOM_I2CM_CTRLC_DATA32B_Pos         _UINT32_(24)                                         /* (SERCOM_I2CM_CTRLC) Data 32 Bit Position */
#define SERCOM_I2CM_CTRLC_DATA32B_Msk         (_UINT32_(0x1) << SERCOM_I2CM_CTRLC_DATA32B_Pos)     /* (SERCOM_I2CM_CTRLC) Data 32 Bit Mask */
#define SERCOM_I2CM_CTRLC_DATA32B(value)      (SERCOM_I2CM_CTRLC_DATA32B_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLC_DATA32B_Pos)) /* Assignment of value for DATA32B in the SERCOM_I2CM_CTRLC register */
#define SERCOM_I2CM_CTRLC_FIFOEN_Pos          _UINT32_(27)                                         /* (SERCOM_I2CM_CTRLC) FIFO Enable Position */
#define SERCOM_I2CM_CTRLC_FIFOEN_Msk          (_UINT32_(0x1) << SERCOM_I2CM_CTRLC_FIFOEN_Pos)      /* (SERCOM_I2CM_CTRLC) FIFO Enable Mask */
#define SERCOM_I2CM_CTRLC_FIFOEN(value)       (SERCOM_I2CM_CTRLC_FIFOEN_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLC_FIFOEN_Pos)) /* Assignment of value for FIFOEN in the SERCOM_I2CM_CTRLC register */
#define SERCOM_I2CM_CTRLC_RXTRHOLD_Pos        _UINT32_(28)                                         /* (SERCOM_I2CM_CTRLC) Receive FIFO Threshold Position */
#define SERCOM_I2CM_CTRLC_RXTRHOLD_Msk        (_UINT32_(0x3) << SERCOM_I2CM_CTRLC_RXTRHOLD_Pos)    /* (SERCOM_I2CM_CTRLC) Receive FIFO Threshold Mask */
#define SERCOM_I2CM_CTRLC_RXTRHOLD(value)     (SERCOM_I2CM_CTRLC_RXTRHOLD_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLC_RXTRHOLD_Pos)) /* Assignment of value for RXTRHOLD in the SERCOM_I2CM_CTRLC register */
#define   SERCOM_I2CM_CTRLC_RXTRHOLD_DEFAULT_Val _UINT32_(0x0)                                        /* (SERCOM_I2CM_CTRLC) Interrupt and DMA triggers are generated when DATA is present in the FIFO  */
#define   SERCOM_I2CM_CTRLC_RXTRHOLD_HALF_Val _UINT32_(0x1)                                        /* (SERCOM_I2CM_CTRLC) Interrupt and DMA triggers are generated when FIFO is half-full  */
#define   SERCOM_I2CM_CTRLC_RXTRHOLD_FULL_Val _UINT32_(0x2)                                        /* (SERCOM_I2CM_CTRLC) Interrupt and DMA triggers are generated when FIFO is full  */
#define SERCOM_I2CM_CTRLC_RXTRHOLD_DEFAULT    (SERCOM_I2CM_CTRLC_RXTRHOLD_DEFAULT_Val << SERCOM_I2CM_CTRLC_RXTRHOLD_Pos) /* (SERCOM_I2CM_CTRLC) Interrupt and DMA triggers are generated when DATA is present in the FIFO Position */
#define SERCOM_I2CM_CTRLC_RXTRHOLD_HALF       (SERCOM_I2CM_CTRLC_RXTRHOLD_HALF_Val << SERCOM_I2CM_CTRLC_RXTRHOLD_Pos) /* (SERCOM_I2CM_CTRLC) Interrupt and DMA triggers are generated when FIFO is half-full Position */
#define SERCOM_I2CM_CTRLC_RXTRHOLD_FULL       (SERCOM_I2CM_CTRLC_RXTRHOLD_FULL_Val << SERCOM_I2CM_CTRLC_RXTRHOLD_Pos) /* (SERCOM_I2CM_CTRLC) Interrupt and DMA triggers are generated when FIFO is full Position */
#define SERCOM_I2CM_CTRLC_TXTRHOLD_Pos        _UINT32_(30)                                         /* (SERCOM_I2CM_CTRLC) Transmit FIFO Threshold Position */
#define SERCOM_I2CM_CTRLC_TXTRHOLD_Msk        (_UINT32_(0x3) << SERCOM_I2CM_CTRLC_TXTRHOLD_Pos)    /* (SERCOM_I2CM_CTRLC) Transmit FIFO Threshold Mask */
#define SERCOM_I2CM_CTRLC_TXTRHOLD(value)     (SERCOM_I2CM_CTRLC_TXTRHOLD_Msk & (_UINT32_(value) << SERCOM_I2CM_CTRLC_TXTRHOLD_Pos)) /* Assignment of value for TXTRHOLD in the SERCOM_I2CM_CTRLC register */
#define   SERCOM_I2CM_CTRLC_TXTRHOLD_DEFAULT_Val _UINT32_(0x0)                                        /* (SERCOM_I2CM_CTRLC) Interrupt and DMA triggers are generated as long as the FIFO is not full  */
#define   SERCOM_I2CM_CTRLC_TXTRHOLD_HALF_Val _UINT32_(0x1)                                        /* (SERCOM_I2CM_CTRLC) Interrupt and DMA triggers are generated when half FIFO space is free  */
#define   SERCOM_I2CM_CTRLC_TXTRHOLD_EMPTY_Val _UINT32_(0x2)                                        /* (SERCOM_I2CM_CTRLC) Interrupt and DMA triggers are generated as long as the FIFO is not full  */
#define SERCOM_I2CM_CTRLC_TXTRHOLD_DEFAULT    (SERCOM_I2CM_CTRLC_TXTRHOLD_DEFAULT_Val << SERCOM_I2CM_CTRLC_TXTRHOLD_Pos) /* (SERCOM_I2CM_CTRLC) Interrupt and DMA triggers are generated as long as the FIFO is not full Position */
#define SERCOM_I2CM_CTRLC_TXTRHOLD_HALF       (SERCOM_I2CM_CTRLC_TXTRHOLD_HALF_Val << SERCOM_I2CM_CTRLC_TXTRHOLD_Pos) /* (SERCOM_I2CM_CTRLC) Interrupt and DMA triggers are generated when half FIFO space is free Position */
#define SERCOM_I2CM_CTRLC_TXTRHOLD_EMPTY      (SERCOM_I2CM_CTRLC_TXTRHOLD_EMPTY_Val << SERCOM_I2CM_CTRLC_TXTRHOLD_Pos) /* (SERCOM_I2CM_CTRLC) Interrupt and DMA triggers are generated as long as the FIFO is not full Position */
#define SERCOM_I2CM_CTRLC_Msk                 _UINT32_(0xF9000000)                                 /* (SERCOM_I2CM_CTRLC) Register Mask  */


/* -------- SERCOM_I2CS_CTRLC : (SERCOM Offset: 0x08) (R/W 32) I2CS Control C -------- */
#define SERCOM_I2CS_CTRLC_RESETVALUE          _UINT32_(0x00)                                       /*  (SERCOM_I2CS_CTRLC) I2CS Control C  Reset Value */

#define SERCOM_I2CS_CTRLC_SDASETUP_Pos        _UINT32_(0)                                          /* (SERCOM_I2CS_CTRLC) SDA Setup Time Position */
#define SERCOM_I2CS_CTRLC_SDASETUP_Msk        (_UINT32_(0xF) << SERCOM_I2CS_CTRLC_SDASETUP_Pos)    /* (SERCOM_I2CS_CTRLC) SDA Setup Time Mask */
#define SERCOM_I2CS_CTRLC_SDASETUP(value)     (SERCOM_I2CS_CTRLC_SDASETUP_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLC_SDASETUP_Pos)) /* Assignment of value for SDASETUP in the SERCOM_I2CS_CTRLC register */
#define SERCOM_I2CS_CTRLC_DATA32B_Pos         _UINT32_(24)                                         /* (SERCOM_I2CS_CTRLC) Data 32 Bit Position */
#define SERCOM_I2CS_CTRLC_DATA32B_Msk         (_UINT32_(0x1) << SERCOM_I2CS_CTRLC_DATA32B_Pos)     /* (SERCOM_I2CS_CTRLC) Data 32 Bit Mask */
#define SERCOM_I2CS_CTRLC_DATA32B(value)      (SERCOM_I2CS_CTRLC_DATA32B_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLC_DATA32B_Pos)) /* Assignment of value for DATA32B in the SERCOM_I2CS_CTRLC register */
#define SERCOM_I2CS_CTRLC_FIFOEN_Pos          _UINT32_(27)                                         /* (SERCOM_I2CS_CTRLC) FIFO Enable Position */
#define SERCOM_I2CS_CTRLC_FIFOEN_Msk          (_UINT32_(0x1) << SERCOM_I2CS_CTRLC_FIFOEN_Pos)      /* (SERCOM_I2CS_CTRLC) FIFO Enable Mask */
#define SERCOM_I2CS_CTRLC_FIFOEN(value)       (SERCOM_I2CS_CTRLC_FIFOEN_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLC_FIFOEN_Pos)) /* Assignment of value for FIFOEN in the SERCOM_I2CS_CTRLC register */
#define SERCOM_I2CS_CTRLC_RXTRHOLD_Pos        _UINT32_(28)                                         /* (SERCOM_I2CS_CTRLC) Receive FIFO Threshold Position */
#define SERCOM_I2CS_CTRLC_RXTRHOLD_Msk        (_UINT32_(0x3) << SERCOM_I2CS_CTRLC_RXTRHOLD_Pos)    /* (SERCOM_I2CS_CTRLC) Receive FIFO Threshold Mask */
#define SERCOM_I2CS_CTRLC_RXTRHOLD(value)     (SERCOM_I2CS_CTRLC_RXTRHOLD_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLC_RXTRHOLD_Pos)) /* Assignment of value for RXTRHOLD in the SERCOM_I2CS_CTRLC register */
#define   SERCOM_I2CS_CTRLC_RXTRHOLD_DEFAULT_Val _UINT32_(0x0)                                        /* (SERCOM_I2CS_CTRLC) Interrupt and DMA triggers are generated when DATA is present in the FIFO  */
#define   SERCOM_I2CS_CTRLC_RXTRHOLD_HALF_Val _UINT32_(0x1)                                        /* (SERCOM_I2CS_CTRLC) Interrupt and DMA triggers are generated when FIFO is half-full  */
#define   SERCOM_I2CS_CTRLC_RXTRHOLD_FULL_Val _UINT32_(0x2)                                        /* (SERCOM_I2CS_CTRLC) Interrupt and DMA triggers are generated when FIFO is full  */
#define SERCOM_I2CS_CTRLC_RXTRHOLD_DEFAULT    (SERCOM_I2CS_CTRLC_RXTRHOLD_DEFAULT_Val << SERCOM_I2CS_CTRLC_RXTRHOLD_Pos) /* (SERCOM_I2CS_CTRLC) Interrupt and DMA triggers are generated when DATA is present in the FIFO Position */
#define SERCOM_I2CS_CTRLC_RXTRHOLD_HALF       (SERCOM_I2CS_CTRLC_RXTRHOLD_HALF_Val << SERCOM_I2CS_CTRLC_RXTRHOLD_Pos) /* (SERCOM_I2CS_CTRLC) Interrupt and DMA triggers are generated when FIFO is half-full Position */
#define SERCOM_I2CS_CTRLC_RXTRHOLD_FULL       (SERCOM_I2CS_CTRLC_RXTRHOLD_FULL_Val << SERCOM_I2CS_CTRLC_RXTRHOLD_Pos) /* (SERCOM_I2CS_CTRLC) Interrupt and DMA triggers are generated when FIFO is full Position */
#define SERCOM_I2CS_CTRLC_TXTRHOLD_Pos        _UINT32_(30)                                         /* (SERCOM_I2CS_CTRLC) Transmit FIFO Threshold Position */
#define SERCOM_I2CS_CTRLC_TXTRHOLD_Msk        (_UINT32_(0x3) << SERCOM_I2CS_CTRLC_TXTRHOLD_Pos)    /* (SERCOM_I2CS_CTRLC) Transmit FIFO Threshold Mask */
#define SERCOM_I2CS_CTRLC_TXTRHOLD(value)     (SERCOM_I2CS_CTRLC_TXTRHOLD_Msk & (_UINT32_(value) << SERCOM_I2CS_CTRLC_TXTRHOLD_Pos)) /* Assignment of value for TXTRHOLD in the SERCOM_I2CS_CTRLC register */
#define   SERCOM_I2CS_CTRLC_TXTRHOLD_DEFAULT_Val _UINT32_(0x0)                                        /* (SERCOM_I2CS_CTRLC) Interrupt and DMA triggers are generated as long as the FIFO is not full  */
#define   SERCOM_I2CS_CTRLC_TXTRHOLD_HALF_Val _UINT32_(0x1)                                        /* (SERCOM_I2CS_CTRLC) Interrupt and DMA triggers are generated when half FIFO space is free  */
#define   SERCOM_I2CS_CTRLC_TXTRHOLD_EMPTY_Val _UINT32_(0x2)                                        /* (SERCOM_I2CS_CTRLC) Interrupt and DMA triggers are generated as long as the FIFO is not full  */
#define SERCOM_I2CS_CTRLC_TXTRHOLD_DEFAULT    (SERCOM_I2CS_CTRLC_TXTRHOLD_DEFAULT_Val << SERCOM_I2CS_CTRLC_TXTRHOLD_Pos) /* (SERCOM_I2CS_CTRLC) Interrupt and DMA triggers are generated as long as the FIFO is not full Position */
#define SERCOM_I2CS_CTRLC_TXTRHOLD_HALF       (SERCOM_I2CS_CTRLC_TXTRHOLD_HALF_Val << SERCOM_I2CS_CTRLC_TXTRHOLD_Pos) /* (SERCOM_I2CS_CTRLC) Interrupt and DMA triggers are generated when half FIFO space is free Position */
#define SERCOM_I2CS_CTRLC_TXTRHOLD_EMPTY      (SERCOM_I2CS_CTRLC_TXTRHOLD_EMPTY_Val << SERCOM_I2CS_CTRLC_TXTRHOLD_Pos) /* (SERCOM_I2CS_CTRLC) Interrupt and DMA triggers are generated as long as the FIFO is not full Position */
#define SERCOM_I2CS_CTRLC_Msk                 _UINT32_(0xF900000F)                                 /* (SERCOM_I2CS_CTRLC) Register Mask  */


/* -------- SERCOM_SPIM_CTRLC : (SERCOM Offset: 0x08) (R/W 32) SPIM Control C -------- */
#define SERCOM_SPIM_CTRLC_RESETVALUE          _UINT32_(0x00)                                       /*  (SERCOM_SPIM_CTRLC) SPIM Control C  Reset Value */

#define SERCOM_SPIM_CTRLC_ICSPACE_Pos         _UINT32_(0)                                          /* (SERCOM_SPIM_CTRLC) Inter-Character Spacing Position */
#define SERCOM_SPIM_CTRLC_ICSPACE_Msk         (_UINT32_(0x3F) << SERCOM_SPIM_CTRLC_ICSPACE_Pos)    /* (SERCOM_SPIM_CTRLC) Inter-Character Spacing Mask */
#define SERCOM_SPIM_CTRLC_ICSPACE(value)      (SERCOM_SPIM_CTRLC_ICSPACE_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLC_ICSPACE_Pos)) /* Assignment of value for ICSPACE in the SERCOM_SPIM_CTRLC register */
#define SERCOM_SPIM_CTRLC_FSES_Pos            _UINT32_(8)                                          /* (SERCOM_SPIM_CTRLC) Frame Synch Edge Select Position */
#define SERCOM_SPIM_CTRLC_FSES_Msk            (_UINT32_(0x1) << SERCOM_SPIM_CTRLC_FSES_Pos)        /* (SERCOM_SPIM_CTRLC) Frame Synch Edge Select Mask */
#define SERCOM_SPIM_CTRLC_FSES(value)         (SERCOM_SPIM_CTRLC_FSES_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLC_FSES_Pos)) /* Assignment of value for FSES in the SERCOM_SPIM_CTRLC register */
#define SERCOM_SPIM_CTRLC_FSLEN_Pos           _UINT32_(9)                                          /* (SERCOM_SPIM_CTRLC) Frame Synch Length Position */
#define SERCOM_SPIM_CTRLC_FSLEN_Msk           (_UINT32_(0x1) << SERCOM_SPIM_CTRLC_FSLEN_Pos)       /* (SERCOM_SPIM_CTRLC) Frame Synch Length Mask */
#define SERCOM_SPIM_CTRLC_FSLEN(value)        (SERCOM_SPIM_CTRLC_FSLEN_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLC_FSLEN_Pos)) /* Assignment of value for FSLEN in the SERCOM_SPIM_CTRLC register */
#define   SERCOM_SPIM_CTRLC_FSLEN_STROBE_Val  _UINT32_(0x0)                                        /* (SERCOM_SPIM_CTRLC) One SCK pulse  */
#define   SERCOM_SPIM_CTRLC_FSLEN_LEVEL_Val   _UINT32_(0x1)                                        /* (SERCOM_SPIM_CTRLC) One frame duration  */
#define SERCOM_SPIM_CTRLC_FSLEN_STROBE        (SERCOM_SPIM_CTRLC_FSLEN_STROBE_Val << SERCOM_SPIM_CTRLC_FSLEN_Pos) /* (SERCOM_SPIM_CTRLC) One SCK pulse Position */
#define SERCOM_SPIM_CTRLC_FSLEN_LEVEL         (SERCOM_SPIM_CTRLC_FSLEN_LEVEL_Val << SERCOM_SPIM_CTRLC_FSLEN_Pos) /* (SERCOM_SPIM_CTRLC) One frame duration Position */
#define SERCOM_SPIM_CTRLC_FSPOL_Pos           _UINT32_(10)                                         /* (SERCOM_SPIM_CTRLC) Frame Synch Polarity Position */
#define SERCOM_SPIM_CTRLC_FSPOL_Msk           (_UINT32_(0x1) << SERCOM_SPIM_CTRLC_FSPOL_Pos)       /* (SERCOM_SPIM_CTRLC) Frame Synch Polarity Mask */
#define SERCOM_SPIM_CTRLC_FSPOL(value)        (SERCOM_SPIM_CTRLC_FSPOL_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLC_FSPOL_Pos)) /* Assignment of value for FSPOL in the SERCOM_SPIM_CTRLC register */
#define   SERCOM_SPIM_CTRLC_FSPOL_HIGH_Val    _UINT32_(0x0)                                        /* (SERCOM_SPIM_CTRLC) VCC-level valid polarity  */
#define   SERCOM_SPIM_CTRLC_FSPOL_LOW_Val     _UINT32_(0x1)                                        /* (SERCOM_SPIM_CTRLC) GND-level valid polarity  */
#define SERCOM_SPIM_CTRLC_FSPOL_HIGH          (SERCOM_SPIM_CTRLC_FSPOL_HIGH_Val << SERCOM_SPIM_CTRLC_FSPOL_Pos) /* (SERCOM_SPIM_CTRLC) VCC-level valid polarity Position */
#define SERCOM_SPIM_CTRLC_FSPOL_LOW           (SERCOM_SPIM_CTRLC_FSPOL_LOW_Val << SERCOM_SPIM_CTRLC_FSPOL_Pos) /* (SERCOM_SPIM_CTRLC) GND-level valid polarity Position */
#define SERCOM_SPIM_CTRLC_IGNTUR_Pos          _UINT32_(11)                                         /* (SERCOM_SPIM_CTRLC) Ignore Transmit Underrun Position */
#define SERCOM_SPIM_CTRLC_IGNTUR_Msk          (_UINT32_(0x1) << SERCOM_SPIM_CTRLC_IGNTUR_Pos)      /* (SERCOM_SPIM_CTRLC) Ignore Transmit Underrun Mask */
#define SERCOM_SPIM_CTRLC_IGNTUR(value)       (SERCOM_SPIM_CTRLC_IGNTUR_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLC_IGNTUR_Pos)) /* Assignment of value for IGNTUR in the SERCOM_SPIM_CTRLC register */
#define SERCOM_SPIM_CTRLC_FRMEN_Pos           _UINT32_(16)                                         /* (SERCOM_SPIM_CTRLC) Frame mode enable Position */
#define SERCOM_SPIM_CTRLC_FRMEN_Msk           (_UINT32_(0x1) << SERCOM_SPIM_CTRLC_FRMEN_Pos)       /* (SERCOM_SPIM_CTRLC) Frame mode enable Mask */
#define SERCOM_SPIM_CTRLC_FRMEN(value)        (SERCOM_SPIM_CTRLC_FRMEN_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLC_FRMEN_Pos)) /* Assignment of value for FRMEN in the SERCOM_SPIM_CTRLC register */
#define SERCOM_SPIM_CTRLC_FMODE_Pos           _UINT32_(17)                                         /* (SERCOM_SPIM_CTRLC) Frame mode Position */
#define SERCOM_SPIM_CTRLC_FMODE_Msk           (_UINT32_(0x1) << SERCOM_SPIM_CTRLC_FMODE_Pos)       /* (SERCOM_SPIM_CTRLC) Frame mode Mask */
#define SERCOM_SPIM_CTRLC_FMODE(value)        (SERCOM_SPIM_CTRLC_FMODE_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLC_FMODE_Pos)) /* Assignment of value for FMODE in the SERCOM_SPIM_CTRLC register */
#define   SERCOM_SPIM_CTRLC_FMODE_MASTER_Val  _UINT32_(0x0)                                        /* (SERCOM_SPIM_CTRLC) Frame Master  */
#define   SERCOM_SPIM_CTRLC_FMODE_SLAVE_Val   _UINT32_(0x1)                                        /* (SERCOM_SPIM_CTRLC) Frame Slave  */
#define SERCOM_SPIM_CTRLC_FMODE_MASTER        (SERCOM_SPIM_CTRLC_FMODE_MASTER_Val << SERCOM_SPIM_CTRLC_FMODE_Pos) /* (SERCOM_SPIM_CTRLC) Frame Master Position */
#define SERCOM_SPIM_CTRLC_FMODE_SLAVE         (SERCOM_SPIM_CTRLC_FMODE_SLAVE_Val << SERCOM_SPIM_CTRLC_FMODE_Pos) /* (SERCOM_SPIM_CTRLC) Frame Slave Position */
#define SERCOM_SPIM_CTRLC_DATA32B_Pos         _UINT32_(24)                                         /* (SERCOM_SPIM_CTRLC) Data 32 Bit Position */
#define SERCOM_SPIM_CTRLC_DATA32B_Msk         (_UINT32_(0x1) << SERCOM_SPIM_CTRLC_DATA32B_Pos)     /* (SERCOM_SPIM_CTRLC) Data 32 Bit Mask */
#define SERCOM_SPIM_CTRLC_DATA32B(value)      (SERCOM_SPIM_CTRLC_DATA32B_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLC_DATA32B_Pos)) /* Assignment of value for DATA32B in the SERCOM_SPIM_CTRLC register */
#define SERCOM_SPIM_CTRLC_FIFOEN_Pos          _UINT32_(27)                                         /* (SERCOM_SPIM_CTRLC) FIFO Enable Position */
#define SERCOM_SPIM_CTRLC_FIFOEN_Msk          (_UINT32_(0x1) << SERCOM_SPIM_CTRLC_FIFOEN_Pos)      /* (SERCOM_SPIM_CTRLC) FIFO Enable Mask */
#define SERCOM_SPIM_CTRLC_FIFOEN(value)       (SERCOM_SPIM_CTRLC_FIFOEN_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLC_FIFOEN_Pos)) /* Assignment of value for FIFOEN in the SERCOM_SPIM_CTRLC register */
#define SERCOM_SPIM_CTRLC_RXTRHOLD_Pos        _UINT32_(28)                                         /* (SERCOM_SPIM_CTRLC) Receive FIFO Threshold Position */
#define SERCOM_SPIM_CTRLC_RXTRHOLD_Msk        (_UINT32_(0x3) << SERCOM_SPIM_CTRLC_RXTRHOLD_Pos)    /* (SERCOM_SPIM_CTRLC) Receive FIFO Threshold Mask */
#define SERCOM_SPIM_CTRLC_RXTRHOLD(value)     (SERCOM_SPIM_CTRLC_RXTRHOLD_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLC_RXTRHOLD_Pos)) /* Assignment of value for RXTRHOLD in the SERCOM_SPIM_CTRLC register */
#define   SERCOM_SPIM_CTRLC_RXTRHOLD_DEFAULT_Val _UINT32_(0x0)                                        /* (SERCOM_SPIM_CTRLC) Interrupt and DMA triggers are generated when DATA is present in the FIFO  */
#define   SERCOM_SPIM_CTRLC_RXTRHOLD_HALF_Val _UINT32_(0x1)                                        /* (SERCOM_SPIM_CTRLC) Interrupt and DMA triggers are generated when FIFO is half-full  */
#define   SERCOM_SPIM_CTRLC_RXTRHOLD_FULL_Val _UINT32_(0x2)                                        /* (SERCOM_SPIM_CTRLC) Interrupt and DMA triggers are generated when FIFO is full  */
#define SERCOM_SPIM_CTRLC_RXTRHOLD_DEFAULT    (SERCOM_SPIM_CTRLC_RXTRHOLD_DEFAULT_Val << SERCOM_SPIM_CTRLC_RXTRHOLD_Pos) /* (SERCOM_SPIM_CTRLC) Interrupt and DMA triggers are generated when DATA is present in the FIFO Position */
#define SERCOM_SPIM_CTRLC_RXTRHOLD_HALF       (SERCOM_SPIM_CTRLC_RXTRHOLD_HALF_Val << SERCOM_SPIM_CTRLC_RXTRHOLD_Pos) /* (SERCOM_SPIM_CTRLC) Interrupt and DMA triggers are generated when FIFO is half-full Position */
#define SERCOM_SPIM_CTRLC_RXTRHOLD_FULL       (SERCOM_SPIM_CTRLC_RXTRHOLD_FULL_Val << SERCOM_SPIM_CTRLC_RXTRHOLD_Pos) /* (SERCOM_SPIM_CTRLC) Interrupt and DMA triggers are generated when FIFO is full Position */
#define SERCOM_SPIM_CTRLC_TXTRHOLD_Pos        _UINT32_(30)                                         /* (SERCOM_SPIM_CTRLC) Transmit FIFO Threshold Position */
#define SERCOM_SPIM_CTRLC_TXTRHOLD_Msk        (_UINT32_(0x3) << SERCOM_SPIM_CTRLC_TXTRHOLD_Pos)    /* (SERCOM_SPIM_CTRLC) Transmit FIFO Threshold Mask */
#define SERCOM_SPIM_CTRLC_TXTRHOLD(value)     (SERCOM_SPIM_CTRLC_TXTRHOLD_Msk & (_UINT32_(value) << SERCOM_SPIM_CTRLC_TXTRHOLD_Pos)) /* Assignment of value for TXTRHOLD in the SERCOM_SPIM_CTRLC register */
#define   SERCOM_SPIM_CTRLC_TXTRHOLD_DEFAULT_Val _UINT32_(0x0)                                        /* (SERCOM_SPIM_CTRLC) Interrupt and DMA triggers are generated as long as the FIFO is not full  */
#define   SERCOM_SPIM_CTRLC_TXTRHOLD_HALF_Val _UINT32_(0x1)                                        /* (SERCOM_SPIM_CTRLC) Interrupt and DMA triggers are generated when half FIFO space is free  */
#define   SERCOM_SPIM_CTRLC_TXTRHOLD_EMPTY_Val _UINT32_(0x2)                                        /* (SERCOM_SPIM_CTRLC) Interrupt and DMA triggers are generated as long as the FIFO is empty  */
#define SERCOM_SPIM_CTRLC_TXTRHOLD_DEFAULT    (SERCOM_SPIM_CTRLC_TXTRHOLD_DEFAULT_Val << SERCOM_SPIM_CTRLC_TXTRHOLD_Pos) /* (SERCOM_SPIM_CTRLC) Interrupt and DMA triggers are generated as long as the FIFO is not full Position */
#define SERCOM_SPIM_CTRLC_TXTRHOLD_HALF       (SERCOM_SPIM_CTRLC_TXTRHOLD_HALF_Val << SERCOM_SPIM_CTRLC_TXTRHOLD_Pos) /* (SERCOM_SPIM_CTRLC) Interrupt and DMA triggers are generated when half FIFO space is free Position */
#define SERCOM_SPIM_CTRLC_TXTRHOLD_EMPTY      (SERCOM_SPIM_CTRLC_TXTRHOLD_EMPTY_Val << SERCOM_SPIM_CTRLC_TXTRHOLD_Pos) /* (SERCOM_SPIM_CTRLC) Interrupt and DMA triggers are generated as long as the FIFO is empty Position */
#define SERCOM_SPIM_CTRLC_Msk                 _UINT32_(0xF9030F3F)                                 /* (SERCOM_SPIM_CTRLC) Register Mask  */


/* -------- SERCOM_SPIS_CTRLC : (SERCOM Offset: 0x08) (R/W 32) SPIS Control C -------- */
#define SERCOM_SPIS_CTRLC_RESETVALUE          _UINT32_(0x00)                                       /*  (SERCOM_SPIS_CTRLC) SPIS Control C  Reset Value */

#define SERCOM_SPIS_CTRLC_ICSPACE_Pos         _UINT32_(0)                                          /* (SERCOM_SPIS_CTRLC) Inter-Character Spacing Position */
#define SERCOM_SPIS_CTRLC_ICSPACE_Msk         (_UINT32_(0x3F) << SERCOM_SPIS_CTRLC_ICSPACE_Pos)    /* (SERCOM_SPIS_CTRLC) Inter-Character Spacing Mask */
#define SERCOM_SPIS_CTRLC_ICSPACE(value)      (SERCOM_SPIS_CTRLC_ICSPACE_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLC_ICSPACE_Pos)) /* Assignment of value for ICSPACE in the SERCOM_SPIS_CTRLC register */
#define SERCOM_SPIS_CTRLC_FSES_Pos            _UINT32_(8)                                          /* (SERCOM_SPIS_CTRLC) Frame Synch Edge Select Position */
#define SERCOM_SPIS_CTRLC_FSES_Msk            (_UINT32_(0x1) << SERCOM_SPIS_CTRLC_FSES_Pos)        /* (SERCOM_SPIS_CTRLC) Frame Synch Edge Select Mask */
#define SERCOM_SPIS_CTRLC_FSES(value)         (SERCOM_SPIS_CTRLC_FSES_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLC_FSES_Pos)) /* Assignment of value for FSES in the SERCOM_SPIS_CTRLC register */
#define SERCOM_SPIS_CTRLC_FSLEN_Pos           _UINT32_(9)                                          /* (SERCOM_SPIS_CTRLC) Frame Synch Length Position */
#define SERCOM_SPIS_CTRLC_FSLEN_Msk           (_UINT32_(0x1) << SERCOM_SPIS_CTRLC_FSLEN_Pos)       /* (SERCOM_SPIS_CTRLC) Frame Synch Length Mask */
#define SERCOM_SPIS_CTRLC_FSLEN(value)        (SERCOM_SPIS_CTRLC_FSLEN_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLC_FSLEN_Pos)) /* Assignment of value for FSLEN in the SERCOM_SPIS_CTRLC register */
#define   SERCOM_SPIS_CTRLC_FSLEN_STROBE_Val  _UINT32_(0x0)                                        /* (SERCOM_SPIS_CTRLC) One SCK pulse  */
#define   SERCOM_SPIS_CTRLC_FSLEN_LEVEL_Val   _UINT32_(0x1)                                        /* (SERCOM_SPIS_CTRLC) One frame duration  */
#define SERCOM_SPIS_CTRLC_FSLEN_STROBE        (SERCOM_SPIS_CTRLC_FSLEN_STROBE_Val << SERCOM_SPIS_CTRLC_FSLEN_Pos) /* (SERCOM_SPIS_CTRLC) One SCK pulse Position */
#define SERCOM_SPIS_CTRLC_FSLEN_LEVEL         (SERCOM_SPIS_CTRLC_FSLEN_LEVEL_Val << SERCOM_SPIS_CTRLC_FSLEN_Pos) /* (SERCOM_SPIS_CTRLC) One frame duration Position */
#define SERCOM_SPIS_CTRLC_FSPOL_Pos           _UINT32_(10)                                         /* (SERCOM_SPIS_CTRLC) Frame Synch Polarity Position */
#define SERCOM_SPIS_CTRLC_FSPOL_Msk           (_UINT32_(0x1) << SERCOM_SPIS_CTRLC_FSPOL_Pos)       /* (SERCOM_SPIS_CTRLC) Frame Synch Polarity Mask */
#define SERCOM_SPIS_CTRLC_FSPOL(value)        (SERCOM_SPIS_CTRLC_FSPOL_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLC_FSPOL_Pos)) /* Assignment of value for FSPOL in the SERCOM_SPIS_CTRLC register */
#define   SERCOM_SPIS_CTRLC_FSPOL_HIGH_Val    _UINT32_(0x0)                                        /* (SERCOM_SPIS_CTRLC) VCC-level valid polarity  */
#define   SERCOM_SPIS_CTRLC_FSPOL_LOW_Val     _UINT32_(0x1)                                        /* (SERCOM_SPIS_CTRLC) GND-level valid polarity  */
#define SERCOM_SPIS_CTRLC_FSPOL_HIGH          (SERCOM_SPIS_CTRLC_FSPOL_HIGH_Val << SERCOM_SPIS_CTRLC_FSPOL_Pos) /* (SERCOM_SPIS_CTRLC) VCC-level valid polarity Position */
#define SERCOM_SPIS_CTRLC_FSPOL_LOW           (SERCOM_SPIS_CTRLC_FSPOL_LOW_Val << SERCOM_SPIS_CTRLC_FSPOL_Pos) /* (SERCOM_SPIS_CTRLC) GND-level valid polarity Position */
#define SERCOM_SPIS_CTRLC_IGNTUR_Pos          _UINT32_(11)                                         /* (SERCOM_SPIS_CTRLC) Ignore Transmit Underrun Position */
#define SERCOM_SPIS_CTRLC_IGNTUR_Msk          (_UINT32_(0x1) << SERCOM_SPIS_CTRLC_IGNTUR_Pos)      /* (SERCOM_SPIS_CTRLC) Ignore Transmit Underrun Mask */
#define SERCOM_SPIS_CTRLC_IGNTUR(value)       (SERCOM_SPIS_CTRLC_IGNTUR_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLC_IGNTUR_Pos)) /* Assignment of value for IGNTUR in the SERCOM_SPIS_CTRLC register */
#define SERCOM_SPIS_CTRLC_FRMEN_Pos           _UINT32_(16)                                         /* (SERCOM_SPIS_CTRLC) Frame mode enable Position */
#define SERCOM_SPIS_CTRLC_FRMEN_Msk           (_UINT32_(0x1) << SERCOM_SPIS_CTRLC_FRMEN_Pos)       /* (SERCOM_SPIS_CTRLC) Frame mode enable Mask */
#define SERCOM_SPIS_CTRLC_FRMEN(value)        (SERCOM_SPIS_CTRLC_FRMEN_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLC_FRMEN_Pos)) /* Assignment of value for FRMEN in the SERCOM_SPIS_CTRLC register */
#define SERCOM_SPIS_CTRLC_FMODE_Pos           _UINT32_(17)                                         /* (SERCOM_SPIS_CTRLC) Frame mode Position */
#define SERCOM_SPIS_CTRLC_FMODE_Msk           (_UINT32_(0x1) << SERCOM_SPIS_CTRLC_FMODE_Pos)       /* (SERCOM_SPIS_CTRLC) Frame mode Mask */
#define SERCOM_SPIS_CTRLC_FMODE(value)        (SERCOM_SPIS_CTRLC_FMODE_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLC_FMODE_Pos)) /* Assignment of value for FMODE in the SERCOM_SPIS_CTRLC register */
#define   SERCOM_SPIS_CTRLC_FMODE_MASTER_Val  _UINT32_(0x0)                                        /* (SERCOM_SPIS_CTRLC) Frame Master  */
#define   SERCOM_SPIS_CTRLC_FMODE_SLAVE_Val   _UINT32_(0x1)                                        /* (SERCOM_SPIS_CTRLC) Frame Slave  */
#define SERCOM_SPIS_CTRLC_FMODE_MASTER        (SERCOM_SPIS_CTRLC_FMODE_MASTER_Val << SERCOM_SPIS_CTRLC_FMODE_Pos) /* (SERCOM_SPIS_CTRLC) Frame Master Position */
#define SERCOM_SPIS_CTRLC_FMODE_SLAVE         (SERCOM_SPIS_CTRLC_FMODE_SLAVE_Val << SERCOM_SPIS_CTRLC_FMODE_Pos) /* (SERCOM_SPIS_CTRLC) Frame Slave Position */
#define SERCOM_SPIS_CTRLC_DATA32B_Pos         _UINT32_(24)                                         /* (SERCOM_SPIS_CTRLC) Data 32 Bit Position */
#define SERCOM_SPIS_CTRLC_DATA32B_Msk         (_UINT32_(0x1) << SERCOM_SPIS_CTRLC_DATA32B_Pos)     /* (SERCOM_SPIS_CTRLC) Data 32 Bit Mask */
#define SERCOM_SPIS_CTRLC_DATA32B(value)      (SERCOM_SPIS_CTRLC_DATA32B_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLC_DATA32B_Pos)) /* Assignment of value for DATA32B in the SERCOM_SPIS_CTRLC register */
#define SERCOM_SPIS_CTRLC_FIFOEN_Pos          _UINT32_(27)                                         /* (SERCOM_SPIS_CTRLC) FIFO Enable Position */
#define SERCOM_SPIS_CTRLC_FIFOEN_Msk          (_UINT32_(0x1) << SERCOM_SPIS_CTRLC_FIFOEN_Pos)      /* (SERCOM_SPIS_CTRLC) FIFO Enable Mask */
#define SERCOM_SPIS_CTRLC_FIFOEN(value)       (SERCOM_SPIS_CTRLC_FIFOEN_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLC_FIFOEN_Pos)) /* Assignment of value for FIFOEN in the SERCOM_SPIS_CTRLC register */
#define SERCOM_SPIS_CTRLC_RXTRHOLD_Pos        _UINT32_(28)                                         /* (SERCOM_SPIS_CTRLC) Receive FIFO Threshold Position */
#define SERCOM_SPIS_CTRLC_RXTRHOLD_Msk        (_UINT32_(0x3) << SERCOM_SPIS_CTRLC_RXTRHOLD_Pos)    /* (SERCOM_SPIS_CTRLC) Receive FIFO Threshold Mask */
#define SERCOM_SPIS_CTRLC_RXTRHOLD(value)     (SERCOM_SPIS_CTRLC_RXTRHOLD_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLC_RXTRHOLD_Pos)) /* Assignment of value for RXTRHOLD in the SERCOM_SPIS_CTRLC register */
#define   SERCOM_SPIS_CTRLC_RXTRHOLD_DEFAULT_Val _UINT32_(0x0)                                        /* (SERCOM_SPIS_CTRLC) Interrupt and DMA triggers are generated when DATA is present in the FIFO  */
#define   SERCOM_SPIS_CTRLC_RXTRHOLD_HALF_Val _UINT32_(0x1)                                        /* (SERCOM_SPIS_CTRLC) Interrupt and DMA triggers are generated when FIFO is half-full  */
#define   SERCOM_SPIS_CTRLC_RXTRHOLD_FULL_Val _UINT32_(0x2)                                        /* (SERCOM_SPIS_CTRLC) Interrupt and DMA triggers are generated when FIFO is full  */
#define SERCOM_SPIS_CTRLC_RXTRHOLD_DEFAULT    (SERCOM_SPIS_CTRLC_RXTRHOLD_DEFAULT_Val << SERCOM_SPIS_CTRLC_RXTRHOLD_Pos) /* (SERCOM_SPIS_CTRLC) Interrupt and DMA triggers are generated when DATA is present in the FIFO Position */
#define SERCOM_SPIS_CTRLC_RXTRHOLD_HALF       (SERCOM_SPIS_CTRLC_RXTRHOLD_HALF_Val << SERCOM_SPIS_CTRLC_RXTRHOLD_Pos) /* (SERCOM_SPIS_CTRLC) Interrupt and DMA triggers are generated when FIFO is half-full Position */
#define SERCOM_SPIS_CTRLC_RXTRHOLD_FULL       (SERCOM_SPIS_CTRLC_RXTRHOLD_FULL_Val << SERCOM_SPIS_CTRLC_RXTRHOLD_Pos) /* (SERCOM_SPIS_CTRLC) Interrupt and DMA triggers are generated when FIFO is full Position */
#define SERCOM_SPIS_CTRLC_TXTRHOLD_Pos        _UINT32_(30)                                         /* (SERCOM_SPIS_CTRLC) Transmit FIFO Threshold Position */
#define SERCOM_SPIS_CTRLC_TXTRHOLD_Msk        (_UINT32_(0x3) << SERCOM_SPIS_CTRLC_TXTRHOLD_Pos)    /* (SERCOM_SPIS_CTRLC) Transmit FIFO Threshold Mask */
#define SERCOM_SPIS_CTRLC_TXTRHOLD(value)     (SERCOM_SPIS_CTRLC_TXTRHOLD_Msk & (_UINT32_(value) << SERCOM_SPIS_CTRLC_TXTRHOLD_Pos)) /* Assignment of value for TXTRHOLD in the SERCOM_SPIS_CTRLC register */
#define   SERCOM_SPIS_CTRLC_TXTRHOLD_DEFAULT_Val _UINT32_(0x0)                                        /* (SERCOM_SPIS_CTRLC) Interrupt and DMA triggers are generated as long as the FIFO is not full  */
#define   SERCOM_SPIS_CTRLC_TXTRHOLD_HALF_Val _UINT32_(0x1)                                        /* (SERCOM_SPIS_CTRLC) Interrupt and DMA triggers are generated when half FIFO space is free  */
#define   SERCOM_SPIS_CTRLC_TXTRHOLD_EMPTY_Val _UINT32_(0x2)                                        /* (SERCOM_SPIS_CTRLC) Interrupt and DMA triggers are generated as long as the FIFO is empty  */
#define SERCOM_SPIS_CTRLC_TXTRHOLD_DEFAULT    (SERCOM_SPIS_CTRLC_TXTRHOLD_DEFAULT_Val << SERCOM_SPIS_CTRLC_TXTRHOLD_Pos) /* (SERCOM_SPIS_CTRLC) Interrupt and DMA triggers are generated as long as the FIFO is not full Position */
#define SERCOM_SPIS_CTRLC_TXTRHOLD_HALF       (SERCOM_SPIS_CTRLC_TXTRHOLD_HALF_Val << SERCOM_SPIS_CTRLC_TXTRHOLD_Pos) /* (SERCOM_SPIS_CTRLC) Interrupt and DMA triggers are generated when half FIFO space is free Position */
#define SERCOM_SPIS_CTRLC_TXTRHOLD_EMPTY      (SERCOM_SPIS_CTRLC_TXTRHOLD_EMPTY_Val << SERCOM_SPIS_CTRLC_TXTRHOLD_Pos) /* (SERCOM_SPIS_CTRLC) Interrupt and DMA triggers are generated as long as the FIFO is empty Position */
#define SERCOM_SPIS_CTRLC_Msk                 _UINT32_(0xF9030F3F)                                 /* (SERCOM_SPIS_CTRLC) Register Mask  */


/* -------- SERCOM_USART_INT_CTRLC : (SERCOM Offset: 0x08) (R/W 32) USART Control C -------- */
#define SERCOM_USART_INT_CTRLC_RESETVALUE     _UINT32_(0x00)                                       /*  (SERCOM_USART_INT_CTRLC) USART Control C  Reset Value */

#define SERCOM_USART_INT_CTRLC_GTIME_Pos      _UINT32_(0)                                          /* (SERCOM_USART_INT_CTRLC) Guard Time Position */
#define SERCOM_USART_INT_CTRLC_GTIME_Msk      (_UINT32_(0x7) << SERCOM_USART_INT_CTRLC_GTIME_Pos)  /* (SERCOM_USART_INT_CTRLC) Guard Time Mask */
#define SERCOM_USART_INT_CTRLC_GTIME(value)   (SERCOM_USART_INT_CTRLC_GTIME_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLC_GTIME_Pos)) /* Assignment of value for GTIME in the SERCOM_USART_INT_CTRLC register */
#define SERCOM_USART_INT_CTRLC_BRKLEN_Pos     _UINT32_(8)                                          /* (SERCOM_USART_INT_CTRLC) LIN Master Break Length Position */
#define SERCOM_USART_INT_CTRLC_BRKLEN_Msk     (_UINT32_(0x3) << SERCOM_USART_INT_CTRLC_BRKLEN_Pos) /* (SERCOM_USART_INT_CTRLC) LIN Master Break Length Mask */
#define SERCOM_USART_INT_CTRLC_BRKLEN(value)  (SERCOM_USART_INT_CTRLC_BRKLEN_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLC_BRKLEN_Pos)) /* Assignment of value for BRKLEN in the SERCOM_USART_INT_CTRLC register */
#define   SERCOM_USART_INT_CTRLC_BRKLEN_13BITS_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLC) Break field transmission is 13 bit times  */
#define   SERCOM_USART_INT_CTRLC_BRKLEN_17BITS_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLC) Break field transmission is 17 bit times  */
#define   SERCOM_USART_INT_CTRLC_BRKLEN_21BITS_Val _UINT32_(0x2)                                        /* (SERCOM_USART_INT_CTRLC) Break field transmission is 21 bit times  */
#define   SERCOM_USART_INT_CTRLC_BRKLEN_26BITS_Val _UINT32_(0x3)                                        /* (SERCOM_USART_INT_CTRLC) Break field transmission is 26 bit times  */
#define SERCOM_USART_INT_CTRLC_BRKLEN_13BITS  (SERCOM_USART_INT_CTRLC_BRKLEN_13BITS_Val << SERCOM_USART_INT_CTRLC_BRKLEN_Pos) /* (SERCOM_USART_INT_CTRLC) Break field transmission is 13 bit times Position */
#define SERCOM_USART_INT_CTRLC_BRKLEN_17BITS  (SERCOM_USART_INT_CTRLC_BRKLEN_17BITS_Val << SERCOM_USART_INT_CTRLC_BRKLEN_Pos) /* (SERCOM_USART_INT_CTRLC) Break field transmission is 17 bit times Position */
#define SERCOM_USART_INT_CTRLC_BRKLEN_21BITS  (SERCOM_USART_INT_CTRLC_BRKLEN_21BITS_Val << SERCOM_USART_INT_CTRLC_BRKLEN_Pos) /* (SERCOM_USART_INT_CTRLC) Break field transmission is 21 bit times Position */
#define SERCOM_USART_INT_CTRLC_BRKLEN_26BITS  (SERCOM_USART_INT_CTRLC_BRKLEN_26BITS_Val << SERCOM_USART_INT_CTRLC_BRKLEN_Pos) /* (SERCOM_USART_INT_CTRLC) Break field transmission is 26 bit times Position */
#define SERCOM_USART_INT_CTRLC_HDRDLY_Pos     _UINT32_(10)                                         /* (SERCOM_USART_INT_CTRLC) LIN Master Header Delay Position */
#define SERCOM_USART_INT_CTRLC_HDRDLY_Msk     (_UINT32_(0x3) << SERCOM_USART_INT_CTRLC_HDRDLY_Pos) /* (SERCOM_USART_INT_CTRLC) LIN Master Header Delay Mask */
#define SERCOM_USART_INT_CTRLC_HDRDLY(value)  (SERCOM_USART_INT_CTRLC_HDRDLY_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLC_HDRDLY_Pos)) /* Assignment of value for HDRDLY in the SERCOM_USART_INT_CTRLC register */
#define   SERCOM_USART_INT_CTRLC_HDRDLY_1BIT_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLC) Delay between break and sync transmission is 1-bit time  */
#define   SERCOM_USART_INT_CTRLC_HDRDLY_4BITS_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLC) Delay between break and sync transmission is 4-bit time  */
#define   SERCOM_USART_INT_CTRLC_HDRDLY_8BITS_Val _UINT32_(0x2)                                        /* (SERCOM_USART_INT_CTRLC) Delay between break and sync transmission is 8-bit time  */
#define   SERCOM_USART_INT_CTRLC_HDRDLY_14BITS_Val _UINT32_(0x3)                                        /* (SERCOM_USART_INT_CTRLC) Delay between break and sync transmission is 14-bit time  */
#define SERCOM_USART_INT_CTRLC_HDRDLY_1BIT    (SERCOM_USART_INT_CTRLC_HDRDLY_1BIT_Val << SERCOM_USART_INT_CTRLC_HDRDLY_Pos) /* (SERCOM_USART_INT_CTRLC) Delay between break and sync transmission is 1-bit time Position */
#define SERCOM_USART_INT_CTRLC_HDRDLY_4BITS   (SERCOM_USART_INT_CTRLC_HDRDLY_4BITS_Val << SERCOM_USART_INT_CTRLC_HDRDLY_Pos) /* (SERCOM_USART_INT_CTRLC) Delay between break and sync transmission is 4-bit time Position */
#define SERCOM_USART_INT_CTRLC_HDRDLY_8BITS   (SERCOM_USART_INT_CTRLC_HDRDLY_8BITS_Val << SERCOM_USART_INT_CTRLC_HDRDLY_Pos) /* (SERCOM_USART_INT_CTRLC) Delay between break and sync transmission is 8-bit time Position */
#define SERCOM_USART_INT_CTRLC_HDRDLY_14BITS  (SERCOM_USART_INT_CTRLC_HDRDLY_14BITS_Val << SERCOM_USART_INT_CTRLC_HDRDLY_Pos) /* (SERCOM_USART_INT_CTRLC) Delay between break and sync transmission is 14-bit time Position */
#define SERCOM_USART_INT_CTRLC_INACK_Pos      _UINT32_(16)                                         /* (SERCOM_USART_INT_CTRLC) Inhibit Not Acknowledge Position */
#define SERCOM_USART_INT_CTRLC_INACK_Msk      (_UINT32_(0x1) << SERCOM_USART_INT_CTRLC_INACK_Pos)  /* (SERCOM_USART_INT_CTRLC) Inhibit Not Acknowledge Mask */
#define SERCOM_USART_INT_CTRLC_INACK(value)   (SERCOM_USART_INT_CTRLC_INACK_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLC_INACK_Pos)) /* Assignment of value for INACK in the SERCOM_USART_INT_CTRLC register */
#define SERCOM_USART_INT_CTRLC_DSNACK_Pos     _UINT32_(17)                                         /* (SERCOM_USART_INT_CTRLC) Disable Successive NACK Position */
#define SERCOM_USART_INT_CTRLC_DSNACK_Msk     (_UINT32_(0x1) << SERCOM_USART_INT_CTRLC_DSNACK_Pos) /* (SERCOM_USART_INT_CTRLC) Disable Successive NACK Mask */
#define SERCOM_USART_INT_CTRLC_DSNACK(value)  (SERCOM_USART_INT_CTRLC_DSNACK_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLC_DSNACK_Pos)) /* Assignment of value for DSNACK in the SERCOM_USART_INT_CTRLC register */
#define SERCOM_USART_INT_CTRLC_MAXITER_Pos    _UINT32_(20)                                         /* (SERCOM_USART_INT_CTRLC) Maximum Iterations Position */
#define SERCOM_USART_INT_CTRLC_MAXITER_Msk    (_UINT32_(0x7) << SERCOM_USART_INT_CTRLC_MAXITER_Pos) /* (SERCOM_USART_INT_CTRLC) Maximum Iterations Mask */
#define SERCOM_USART_INT_CTRLC_MAXITER(value) (SERCOM_USART_INT_CTRLC_MAXITER_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLC_MAXITER_Pos)) /* Assignment of value for MAXITER in the SERCOM_USART_INT_CTRLC register */
#define SERCOM_USART_INT_CTRLC_DATA32B_Pos    _UINT32_(24)                                         /* (SERCOM_USART_INT_CTRLC) Data 32 Bit Position */
#define SERCOM_USART_INT_CTRLC_DATA32B_Msk    (_UINT32_(0x3) << SERCOM_USART_INT_CTRLC_DATA32B_Pos) /* (SERCOM_USART_INT_CTRLC) Data 32 Bit Mask */
#define SERCOM_USART_INT_CTRLC_DATA32B(value) (SERCOM_USART_INT_CTRLC_DATA32B_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLC_DATA32B_Pos)) /* Assignment of value for DATA32B in the SERCOM_USART_INT_CTRLC register */
#define SERCOM_USART_INT_CTRLC_FIFOEN_Pos     _UINT32_(27)                                         /* (SERCOM_USART_INT_CTRLC) FIFO Enable Position */
#define SERCOM_USART_INT_CTRLC_FIFOEN_Msk     (_UINT32_(0x1) << SERCOM_USART_INT_CTRLC_FIFOEN_Pos) /* (SERCOM_USART_INT_CTRLC) FIFO Enable Mask */
#define SERCOM_USART_INT_CTRLC_FIFOEN(value)  (SERCOM_USART_INT_CTRLC_FIFOEN_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLC_FIFOEN_Pos)) /* Assignment of value for FIFOEN in the SERCOM_USART_INT_CTRLC register */
#define SERCOM_USART_INT_CTRLC_RXTRHOLD_Pos   _UINT32_(28)                                         /* (SERCOM_USART_INT_CTRLC) Receive FIFO Threshold Position */
#define SERCOM_USART_INT_CTRLC_RXTRHOLD_Msk   (_UINT32_(0x3) << SERCOM_USART_INT_CTRLC_RXTRHOLD_Pos) /* (SERCOM_USART_INT_CTRLC) Receive FIFO Threshold Mask */
#define SERCOM_USART_INT_CTRLC_RXTRHOLD(value) (SERCOM_USART_INT_CTRLC_RXTRHOLD_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLC_RXTRHOLD_Pos)) /* Assignment of value for RXTRHOLD in the SERCOM_USART_INT_CTRLC register */
#define   SERCOM_USART_INT_CTRLC_RXTRHOLD_DEFAULT_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLC) Interrupt and DMA triggers are generated when DATA is present in the FIFO  */
#define   SERCOM_USART_INT_CTRLC_RXTRHOLD_HALF_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLC) Interrupt and DMA triggers are generated when FIFO is half-full  */
#define   SERCOM_USART_INT_CTRLC_RXTRHOLD_FULL_Val _UINT32_(0x2)                                        /* (SERCOM_USART_INT_CTRLC) Interrupt and DMA triggers are generated when FIFO is full  */
#define SERCOM_USART_INT_CTRLC_RXTRHOLD_DEFAULT (SERCOM_USART_INT_CTRLC_RXTRHOLD_DEFAULT_Val << SERCOM_USART_INT_CTRLC_RXTRHOLD_Pos) /* (SERCOM_USART_INT_CTRLC) Interrupt and DMA triggers are generated when DATA is present in the FIFO Position */
#define SERCOM_USART_INT_CTRLC_RXTRHOLD_HALF  (SERCOM_USART_INT_CTRLC_RXTRHOLD_HALF_Val << SERCOM_USART_INT_CTRLC_RXTRHOLD_Pos) /* (SERCOM_USART_INT_CTRLC) Interrupt and DMA triggers are generated when FIFO is half-full Position */
#define SERCOM_USART_INT_CTRLC_RXTRHOLD_FULL  (SERCOM_USART_INT_CTRLC_RXTRHOLD_FULL_Val << SERCOM_USART_INT_CTRLC_RXTRHOLD_Pos) /* (SERCOM_USART_INT_CTRLC) Interrupt and DMA triggers are generated when FIFO is full Position */
#define SERCOM_USART_INT_CTRLC_TXTRHOLD_Pos   _UINT32_(30)                                         /* (SERCOM_USART_INT_CTRLC) Transmit FIFO Threshold Position */
#define SERCOM_USART_INT_CTRLC_TXTRHOLD_Msk   (_UINT32_(0x3) << SERCOM_USART_INT_CTRLC_TXTRHOLD_Pos) /* (SERCOM_USART_INT_CTRLC) Transmit FIFO Threshold Mask */
#define SERCOM_USART_INT_CTRLC_TXTRHOLD(value) (SERCOM_USART_INT_CTRLC_TXTRHOLD_Msk & (_UINT32_(value) << SERCOM_USART_INT_CTRLC_TXTRHOLD_Pos)) /* Assignment of value for TXTRHOLD in the SERCOM_USART_INT_CTRLC register */
#define   SERCOM_USART_INT_CTRLC_TXTRHOLD_DEFAULT_Val _UINT32_(0x0)                                        /* (SERCOM_USART_INT_CTRLC) Interrupt and DMA triggers are generated as long as the FIFO is not full  */
#define   SERCOM_USART_INT_CTRLC_TXTRHOLD_HALF_Val _UINT32_(0x1)                                        /* (SERCOM_USART_INT_CTRLC) Interrupt and DMA triggers are generated when half FIFO space is free  */
#define   SERCOM_USART_INT_CTRLC_TXTRHOLD_EMPTY_Val _UINT32_(0x2)                                        /* (SERCOM_USART_INT_CTRLC) Interrupt and DMA triggers are generated when the FIFO is empty  */
#define SERCOM_USART_INT_CTRLC_TXTRHOLD_DEFAULT (SERCOM_USART_INT_CTRLC_TXTRHOLD_DEFAULT_Val << SERCOM_USART_INT_CTRLC_TXTRHOLD_Pos) /* (SERCOM_USART_INT_CTRLC) Interrupt and DMA triggers are generated as long as the FIFO is not full Position */
#define SERCOM_USART_INT_CTRLC_TXTRHOLD_HALF  (SERCOM_USART_INT_CTRLC_TXTRHOLD_HALF_Val << SERCOM_USART_INT_CTRLC_TXTRHOLD_Pos) /* (SERCOM_USART_INT_CTRLC) Interrupt and DMA triggers are generated when half FIFO space is free Position */
#define SERCOM_USART_INT_CTRLC_TXTRHOLD_EMPTY (SERCOM_USART_INT_CTRLC_TXTRHOLD_EMPTY_Val << SERCOM_USART_INT_CTRLC_TXTRHOLD_Pos) /* (SERCOM_USART_INT_CTRLC) Interrupt and DMA triggers are generated when the FIFO is empty Position */
#define SERCOM_USART_INT_CTRLC_Msk            _UINT32_(0xFB730F07)                                 /* (SERCOM_USART_INT_CTRLC) Register Mask  */


/* -------- SERCOM_I2CM_BAUD : (SERCOM Offset: 0x0C) (R/W 32) I2CM Baud Rate -------- */
#define SERCOM_I2CM_BAUD_RESETVALUE           _UINT32_(0x00)                                       /*  (SERCOM_I2CM_BAUD) I2CM Baud Rate  Reset Value */

#define SERCOM_I2CM_BAUD_BAUD_Pos             _UINT32_(0)                                          /* (SERCOM_I2CM_BAUD) Baud Rate Value Position */
#define SERCOM_I2CM_BAUD_BAUD_Msk             (_UINT32_(0xFF) << SERCOM_I2CM_BAUD_BAUD_Pos)        /* (SERCOM_I2CM_BAUD) Baud Rate Value Mask */
#define SERCOM_I2CM_BAUD_BAUD(value)          (SERCOM_I2CM_BAUD_BAUD_Msk & (_UINT32_(value) << SERCOM_I2CM_BAUD_BAUD_Pos)) /* Assignment of value for BAUD in the SERCOM_I2CM_BAUD register */
#define SERCOM_I2CM_BAUD_BAUDLOW_Pos          _UINT32_(8)                                          /* (SERCOM_I2CM_BAUD) Baud Rate Value Low Position */
#define SERCOM_I2CM_BAUD_BAUDLOW_Msk          (_UINT32_(0xFF) << SERCOM_I2CM_BAUD_BAUDLOW_Pos)     /* (SERCOM_I2CM_BAUD) Baud Rate Value Low Mask */
#define SERCOM_I2CM_BAUD_BAUDLOW(value)       (SERCOM_I2CM_BAUD_BAUDLOW_Msk & (_UINT32_(value) << SERCOM_I2CM_BAUD_BAUDLOW_Pos)) /* Assignment of value for BAUDLOW in the SERCOM_I2CM_BAUD register */
#define SERCOM_I2CM_BAUD_HSBAUD_Pos           _UINT32_(16)                                         /* (SERCOM_I2CM_BAUD) High Speed Baud Rate Value Position */
#define SERCOM_I2CM_BAUD_HSBAUD_Msk           (_UINT32_(0xFF) << SERCOM_I2CM_BAUD_HSBAUD_Pos)      /* (SERCOM_I2CM_BAUD) High Speed Baud Rate Value Mask */
#define SERCOM_I2CM_BAUD_HSBAUD(value)        (SERCOM_I2CM_BAUD_HSBAUD_Msk & (_UINT32_(value) << SERCOM_I2CM_BAUD_HSBAUD_Pos)) /* Assignment of value for HSBAUD in the SERCOM_I2CM_BAUD register */
#define SERCOM_I2CM_BAUD_HSBAUDLOW_Pos        _UINT32_(24)                                         /* (SERCOM_I2CM_BAUD) High Speed Baud Rate Value Low Position */
#define SERCOM_I2CM_BAUD_HSBAUDLOW_Msk        (_UINT32_(0xFF) << SERCOM_I2CM_BAUD_HSBAUDLOW_Pos)   /* (SERCOM_I2CM_BAUD) High Speed Baud Rate Value Low Mask */
#define SERCOM_I2CM_BAUD_HSBAUDLOW(value)     (SERCOM_I2CM_BAUD_HSBAUDLOW_Msk & (_UINT32_(value) << SERCOM_I2CM_BAUD_HSBAUDLOW_Pos)) /* Assignment of value for HSBAUDLOW in the SERCOM_I2CM_BAUD register */
#define SERCOM_I2CM_BAUD_Msk                  _UINT32_(0xFFFFFFFF)                                 /* (SERCOM_I2CM_BAUD) Register Mask  */


/* -------- SERCOM_SPIM_BAUD : (SERCOM Offset: 0x0C) (R/W 8) SPIM Baud Rate -------- */
#define SERCOM_SPIM_BAUD_RESETVALUE           _UINT8_(0x00)                                        /*  (SERCOM_SPIM_BAUD) SPIM Baud Rate  Reset Value */

#define SERCOM_SPIM_BAUD_BAUD_Pos             _UINT8_(0)                                           /* (SERCOM_SPIM_BAUD) Baud Rate Value Position */
#define SERCOM_SPIM_BAUD_BAUD_Msk             (_UINT8_(0xFF) << SERCOM_SPIM_BAUD_BAUD_Pos)         /* (SERCOM_SPIM_BAUD) Baud Rate Value Mask */
#define SERCOM_SPIM_BAUD_BAUD(value)          (SERCOM_SPIM_BAUD_BAUD_Msk & (_UINT8_(value) << SERCOM_SPIM_BAUD_BAUD_Pos)) /* Assignment of value for BAUD in the SERCOM_SPIM_BAUD register */
#define SERCOM_SPIM_BAUD_Msk                  _UINT8_(0xFF)                                        /* (SERCOM_SPIM_BAUD) Register Mask  */


/* -------- SERCOM_SPIS_BAUD : (SERCOM Offset: 0x0C) (R/W 8) SPIS Baud Rate -------- */
#define SERCOM_SPIS_BAUD_RESETVALUE           _UINT8_(0x00)                                        /*  (SERCOM_SPIS_BAUD) SPIS Baud Rate  Reset Value */

#define SERCOM_SPIS_BAUD_BAUD_Pos             _UINT8_(0)                                           /* (SERCOM_SPIS_BAUD) Baud Rate Value Position */
#define SERCOM_SPIS_BAUD_BAUD_Msk             (_UINT8_(0xFF) << SERCOM_SPIS_BAUD_BAUD_Pos)         /* (SERCOM_SPIS_BAUD) Baud Rate Value Mask */
#define SERCOM_SPIS_BAUD_BAUD(value)          (SERCOM_SPIS_BAUD_BAUD_Msk & (_UINT8_(value) << SERCOM_SPIS_BAUD_BAUD_Pos)) /* Assignment of value for BAUD in the SERCOM_SPIS_BAUD register */
#define SERCOM_SPIS_BAUD_Msk                  _UINT8_(0xFF)                                        /* (SERCOM_SPIS_BAUD) Register Mask  */


/* -------- SERCOM_USART_INT_BAUD : (SERCOM Offset: 0x0C) (R/W 16) USART Baud Rate -------- */
#define SERCOM_USART_INT_BAUD_RESETVALUE      _UINT16_(0x00)                                       /*  (SERCOM_USART_INT_BAUD) USART Baud Rate  Reset Value */

#define SERCOM_USART_INT_BAUD_BAUD_Pos        _UINT16_(0)                                          /* (SERCOM_USART_INT_BAUD) Baud Rate Value Position */
#define SERCOM_USART_INT_BAUD_BAUD_Msk        (_UINT16_(0xFFFF) << SERCOM_USART_INT_BAUD_BAUD_Pos) /* (SERCOM_USART_INT_BAUD) Baud Rate Value Mask */
#define SERCOM_USART_INT_BAUD_BAUD(value)     (SERCOM_USART_INT_BAUD_BAUD_Msk & (_UINT16_(value) << SERCOM_USART_INT_BAUD_BAUD_Pos)) /* Assignment of value for BAUD in the SERCOM_USART_INT_BAUD register */
#define SERCOM_USART_INT_BAUD_Msk             _UINT16_(0xFFFF)                                     /* (SERCOM_USART_INT_BAUD) Register Mask  */

/* FRAC mode */
#define SERCOM_USART_INT_BAUD_FRAC_BAUD_Pos   _UINT16_(0)                                          /* (SERCOM_USART_INT_BAUD) Baud Rate Value Position */
#define SERCOM_USART_INT_BAUD_FRAC_BAUD_Msk   (_UINT16_(0x1FFF) << SERCOM_USART_INT_BAUD_FRAC_BAUD_Pos) /* (SERCOM_USART_INT_BAUD) Baud Rate Value Mask */
#define SERCOM_USART_INT_BAUD_FRAC_BAUD(value) (SERCOM_USART_INT_BAUD_FRAC_BAUD_Msk & (_UINT16_(value) << SERCOM_USART_INT_BAUD_FRAC_BAUD_Pos))
#define SERCOM_USART_INT_BAUD_FRAC_FP_Pos     _UINT16_(13)                                         /* (SERCOM_USART_INT_BAUD) Fractional Part Position */
#define SERCOM_USART_INT_BAUD_FRAC_FP_Msk     (_UINT16_(0x7) << SERCOM_USART_INT_BAUD_FRAC_FP_Pos) /* (SERCOM_USART_INT_BAUD) Fractional Part Mask */
#define SERCOM_USART_INT_BAUD_FRAC_FP(value)  (SERCOM_USART_INT_BAUD_FRAC_FP_Msk & (_UINT16_(value) << SERCOM_USART_INT_BAUD_FRAC_FP_Pos))
#define SERCOM_USART_INT_BAUD_FRAC_Msk        _UINT16_(0xFFFF)                                     /* (SERCOM_USART_INT_BAUD_FRAC) Register Mask  */

/* FRACFP mode */
#define SERCOM_USART_INT_BAUD_FRACFP_BAUD_Pos _UINT16_(0)                                          /* (SERCOM_USART_INT_BAUD) Baud Rate Value Position */
#define SERCOM_USART_INT_BAUD_FRACFP_BAUD_Msk (_UINT16_(0x1FFF) << SERCOM_USART_INT_BAUD_FRACFP_BAUD_Pos) /* (SERCOM_USART_INT_BAUD) Baud Rate Value Mask */
#define SERCOM_USART_INT_BAUD_FRACFP_BAUD(value) (SERCOM_USART_INT_BAUD_FRACFP_BAUD_Msk & (_UINT16_(value) << SERCOM_USART_INT_BAUD_FRACFP_BAUD_Pos))
#define SERCOM_USART_INT_BAUD_FRACFP_FP_Pos   _UINT16_(13)                                         /* (SERCOM_USART_INT_BAUD) Fractional Part Position */
#define SERCOM_USART_INT_BAUD_FRACFP_FP_Msk   (_UINT16_(0x7) << SERCOM_USART_INT_BAUD_FRACFP_FP_Pos) /* (SERCOM_USART_INT_BAUD) Fractional Part Mask */
#define SERCOM_USART_INT_BAUD_FRACFP_FP(value) (SERCOM_USART_INT_BAUD_FRACFP_FP_Msk & (_UINT16_(value) << SERCOM_USART_INT_BAUD_FRACFP_FP_Pos))
#define SERCOM_USART_INT_BAUD_FRACFP_Msk      _UINT16_(0xFFFF)                                     /* (SERCOM_USART_INT_BAUD_FRACFP) Register Mask  */

/* USARTFP mode */
#define SERCOM_USART_INT_BAUD_USARTFP_BAUD_Pos _UINT16_(0)                                          /* (SERCOM_USART_INT_BAUD) Baud Rate Value Position */
#define SERCOM_USART_INT_BAUD_USARTFP_BAUD_Msk (_UINT16_(0xFFFF) << SERCOM_USART_INT_BAUD_USARTFP_BAUD_Pos) /* (SERCOM_USART_INT_BAUD) Baud Rate Value Mask */
#define SERCOM_USART_INT_BAUD_USARTFP_BAUD(value) (SERCOM_USART_INT_BAUD_USARTFP_BAUD_Msk & (_UINT16_(value) << SERCOM_USART_INT_BAUD_USARTFP_BAUD_Pos))
#define SERCOM_USART_INT_BAUD_USARTFP_Msk     _UINT16_(0xFFFF)                                     /* (SERCOM_USART_INT_BAUD_USARTFP) Register Mask  */


/* -------- SERCOM_USART_INT_RXPL : (SERCOM Offset: 0x0E) (R/W 8) USART Receive Pulse Length -------- */
#define SERCOM_USART_INT_RXPL_RESETVALUE      _UINT8_(0x00)                                        /*  (SERCOM_USART_INT_RXPL) USART Receive Pulse Length  Reset Value */

#define SERCOM_USART_INT_RXPL_RXPL_Pos        _UINT8_(0)                                           /* (SERCOM_USART_INT_RXPL) Receive Pulse Length Position */
#define SERCOM_USART_INT_RXPL_RXPL_Msk        (_UINT8_(0xFF) << SERCOM_USART_INT_RXPL_RXPL_Pos)    /* (SERCOM_USART_INT_RXPL) Receive Pulse Length Mask */
#define SERCOM_USART_INT_RXPL_RXPL(value)     (SERCOM_USART_INT_RXPL_RXPL_Msk & (_UINT8_(value) << SERCOM_USART_INT_RXPL_RXPL_Pos)) /* Assignment of value for RXPL in the SERCOM_USART_INT_RXPL register */
#define SERCOM_USART_INT_RXPL_Msk             _UINT8_(0xFF)                                        /* (SERCOM_USART_INT_RXPL) Register Mask  */


/* -------- SERCOM_I2CM_INTENCLR : (SERCOM Offset: 0x14) (R/W 8) I2CM Interrupt Enable Clear -------- */
#define SERCOM_I2CM_INTENCLR_RESETVALUE       _UINT8_(0x00)                                        /*  (SERCOM_I2CM_INTENCLR) I2CM Interrupt Enable Clear  Reset Value */

#define SERCOM_I2CM_INTENCLR_MB_Pos           _UINT8_(0)                                           /* (SERCOM_I2CM_INTENCLR) Master On Bus Interrupt Disable Position */
#define SERCOM_I2CM_INTENCLR_MB_Msk           (_UINT8_(0x1) << SERCOM_I2CM_INTENCLR_MB_Pos)        /* (SERCOM_I2CM_INTENCLR) Master On Bus Interrupt Disable Mask */
#define SERCOM_I2CM_INTENCLR_MB(value)        (SERCOM_I2CM_INTENCLR_MB_Msk & (_UINT8_(value) << SERCOM_I2CM_INTENCLR_MB_Pos)) /* Assignment of value for MB in the SERCOM_I2CM_INTENCLR register */
#define SERCOM_I2CM_INTENCLR_SB_Pos           _UINT8_(1)                                           /* (SERCOM_I2CM_INTENCLR) Slave On Bus Interrupt Disable Position */
#define SERCOM_I2CM_INTENCLR_SB_Msk           (_UINT8_(0x1) << SERCOM_I2CM_INTENCLR_SB_Pos)        /* (SERCOM_I2CM_INTENCLR) Slave On Bus Interrupt Disable Mask */
#define SERCOM_I2CM_INTENCLR_SB(value)        (SERCOM_I2CM_INTENCLR_SB_Msk & (_UINT8_(value) << SERCOM_I2CM_INTENCLR_SB_Pos)) /* Assignment of value for SB in the SERCOM_I2CM_INTENCLR register */
#define SERCOM_I2CM_INTENCLR_TXFE_Pos         _UINT8_(3)                                           /* (SERCOM_I2CM_INTENCLR) Tx FIFO Empty Interrupt Disable Position */
#define SERCOM_I2CM_INTENCLR_TXFE_Msk         (_UINT8_(0x1) << SERCOM_I2CM_INTENCLR_TXFE_Pos)      /* (SERCOM_I2CM_INTENCLR) Tx FIFO Empty Interrupt Disable Mask */
#define SERCOM_I2CM_INTENCLR_TXFE(value)      (SERCOM_I2CM_INTENCLR_TXFE_Msk & (_UINT8_(value) << SERCOM_I2CM_INTENCLR_TXFE_Pos)) /* Assignment of value for TXFE in the SERCOM_I2CM_INTENCLR register */
#define SERCOM_I2CM_INTENCLR_RXFF_Pos         _UINT8_(4)                                           /* (SERCOM_I2CM_INTENCLR) Rx FIFO Full Interrupt Disable Position */
#define SERCOM_I2CM_INTENCLR_RXFF_Msk         (_UINT8_(0x1) << SERCOM_I2CM_INTENCLR_RXFF_Pos)      /* (SERCOM_I2CM_INTENCLR) Rx FIFO Full Interrupt Disable Mask */
#define SERCOM_I2CM_INTENCLR_RXFF(value)      (SERCOM_I2CM_INTENCLR_RXFF_Msk & (_UINT8_(value) << SERCOM_I2CM_INTENCLR_RXFF_Pos)) /* Assignment of value for RXFF in the SERCOM_I2CM_INTENCLR register */
#define SERCOM_I2CM_INTENCLR_ERROR_Pos        _UINT8_(7)                                           /* (SERCOM_I2CM_INTENCLR) Combined Error Interrupt Disable Position */
#define SERCOM_I2CM_INTENCLR_ERROR_Msk        (_UINT8_(0x1) << SERCOM_I2CM_INTENCLR_ERROR_Pos)     /* (SERCOM_I2CM_INTENCLR) Combined Error Interrupt Disable Mask */
#define SERCOM_I2CM_INTENCLR_ERROR(value)     (SERCOM_I2CM_INTENCLR_ERROR_Msk & (_UINT8_(value) << SERCOM_I2CM_INTENCLR_ERROR_Pos)) /* Assignment of value for ERROR in the SERCOM_I2CM_INTENCLR register */
#define SERCOM_I2CM_INTENCLR_Msk              _UINT8_(0x9B)                                        /* (SERCOM_I2CM_INTENCLR) Register Mask  */


/* -------- SERCOM_I2CS_INTENCLR : (SERCOM Offset: 0x14) (R/W 8) I2CS Interrupt Enable Clear -------- */
#define SERCOM_I2CS_INTENCLR_RESETVALUE       _UINT8_(0x00)                                        /*  (SERCOM_I2CS_INTENCLR) I2CS Interrupt Enable Clear  Reset Value */

#define SERCOM_I2CS_INTENCLR_PREC_Pos         _UINT8_(0)                                           /* (SERCOM_I2CS_INTENCLR) Stop Received Interrupt Disable Position */
#define SERCOM_I2CS_INTENCLR_PREC_Msk         (_UINT8_(0x1) << SERCOM_I2CS_INTENCLR_PREC_Pos)      /* (SERCOM_I2CS_INTENCLR) Stop Received Interrupt Disable Mask */
#define SERCOM_I2CS_INTENCLR_PREC(value)      (SERCOM_I2CS_INTENCLR_PREC_Msk & (_UINT8_(value) << SERCOM_I2CS_INTENCLR_PREC_Pos)) /* Assignment of value for PREC in the SERCOM_I2CS_INTENCLR register */
#define SERCOM_I2CS_INTENCLR_AMATCH_Pos       _UINT8_(1)                                           /* (SERCOM_I2CS_INTENCLR) Address Match Interrupt Disable Position */
#define SERCOM_I2CS_INTENCLR_AMATCH_Msk       (_UINT8_(0x1) << SERCOM_I2CS_INTENCLR_AMATCH_Pos)    /* (SERCOM_I2CS_INTENCLR) Address Match Interrupt Disable Mask */
#define SERCOM_I2CS_INTENCLR_AMATCH(value)    (SERCOM_I2CS_INTENCLR_AMATCH_Msk & (_UINT8_(value) << SERCOM_I2CS_INTENCLR_AMATCH_Pos)) /* Assignment of value for AMATCH in the SERCOM_I2CS_INTENCLR register */
#define SERCOM_I2CS_INTENCLR_DRDY_Pos         _UINT8_(2)                                           /* (SERCOM_I2CS_INTENCLR) Data Interrupt Disable Position */
#define SERCOM_I2CS_INTENCLR_DRDY_Msk         (_UINT8_(0x1) << SERCOM_I2CS_INTENCLR_DRDY_Pos)      /* (SERCOM_I2CS_INTENCLR) Data Interrupt Disable Mask */
#define SERCOM_I2CS_INTENCLR_DRDY(value)      (SERCOM_I2CS_INTENCLR_DRDY_Msk & (_UINT8_(value) << SERCOM_I2CS_INTENCLR_DRDY_Pos)) /* Assignment of value for DRDY in the SERCOM_I2CS_INTENCLR register */
#define SERCOM_I2CS_INTENCLR_TXFE_Pos         _UINT8_(3)                                           /* (SERCOM_I2CS_INTENCLR) Tx FIFO Empty Interrupt Disable Position */
#define SERCOM_I2CS_INTENCLR_TXFE_Msk         (_UINT8_(0x1) << SERCOM_I2CS_INTENCLR_TXFE_Pos)      /* (SERCOM_I2CS_INTENCLR) Tx FIFO Empty Interrupt Disable Mask */
#define SERCOM_I2CS_INTENCLR_TXFE(value)      (SERCOM_I2CS_INTENCLR_TXFE_Msk & (_UINT8_(value) << SERCOM_I2CS_INTENCLR_TXFE_Pos)) /* Assignment of value for TXFE in the SERCOM_I2CS_INTENCLR register */
#define SERCOM_I2CS_INTENCLR_RXFF_Pos         _UINT8_(4)                                           /* (SERCOM_I2CS_INTENCLR) Rx FIFO Full Interrupt Disable Position */
#define SERCOM_I2CS_INTENCLR_RXFF_Msk         (_UINT8_(0x1) << SERCOM_I2CS_INTENCLR_RXFF_Pos)      /* (SERCOM_I2CS_INTENCLR) Rx FIFO Full Interrupt Disable Mask */
#define SERCOM_I2CS_INTENCLR_RXFF(value)      (SERCOM_I2CS_INTENCLR_RXFF_Msk & (_UINT8_(value) << SERCOM_I2CS_INTENCLR_RXFF_Pos)) /* Assignment of value for RXFF in the SERCOM_I2CS_INTENCLR register */
#define SERCOM_I2CS_INTENCLR_ERROR_Pos        _UINT8_(7)                                           /* (SERCOM_I2CS_INTENCLR) Combined Error Interrupt Disable Position */
#define SERCOM_I2CS_INTENCLR_ERROR_Msk        (_UINT8_(0x1) << SERCOM_I2CS_INTENCLR_ERROR_Pos)     /* (SERCOM_I2CS_INTENCLR) Combined Error Interrupt Disable Mask */
#define SERCOM_I2CS_INTENCLR_ERROR(value)     (SERCOM_I2CS_INTENCLR_ERROR_Msk & (_UINT8_(value) << SERCOM_I2CS_INTENCLR_ERROR_Pos)) /* Assignment of value for ERROR in the SERCOM_I2CS_INTENCLR register */
#define SERCOM_I2CS_INTENCLR_Msk              _UINT8_(0x9F)                                        /* (SERCOM_I2CS_INTENCLR) Register Mask  */


/* -------- SERCOM_SPIM_INTENCLR : (SERCOM Offset: 0x14) (R/W 8) SPIM Interrupt Enable Clear -------- */
#define SERCOM_SPIM_INTENCLR_RESETVALUE       _UINT8_(0x00)                                        /*  (SERCOM_SPIM_INTENCLR) SPIM Interrupt Enable Clear  Reset Value */

#define SERCOM_SPIM_INTENCLR_DRE_Pos          _UINT8_(0)                                           /* (SERCOM_SPIM_INTENCLR) Data Register Empty Interrupt Disable Position */
#define SERCOM_SPIM_INTENCLR_DRE_Msk          (_UINT8_(0x1) << SERCOM_SPIM_INTENCLR_DRE_Pos)       /* (SERCOM_SPIM_INTENCLR) Data Register Empty Interrupt Disable Mask */
#define SERCOM_SPIM_INTENCLR_DRE(value)       (SERCOM_SPIM_INTENCLR_DRE_Msk & (_UINT8_(value) << SERCOM_SPIM_INTENCLR_DRE_Pos)) /* Assignment of value for DRE in the SERCOM_SPIM_INTENCLR register */
#define SERCOM_SPIM_INTENCLR_TXC_Pos          _UINT8_(1)                                           /* (SERCOM_SPIM_INTENCLR) Transmit Complete Interrupt Disable Position */
#define SERCOM_SPIM_INTENCLR_TXC_Msk          (_UINT8_(0x1) << SERCOM_SPIM_INTENCLR_TXC_Pos)       /* (SERCOM_SPIM_INTENCLR) Transmit Complete Interrupt Disable Mask */
#define SERCOM_SPIM_INTENCLR_TXC(value)       (SERCOM_SPIM_INTENCLR_TXC_Msk & (_UINT8_(value) << SERCOM_SPIM_INTENCLR_TXC_Pos)) /* Assignment of value for TXC in the SERCOM_SPIM_INTENCLR register */
#define SERCOM_SPIM_INTENCLR_RXC_Pos          _UINT8_(2)                                           /* (SERCOM_SPIM_INTENCLR) Receive Complete Interrupt Disable Position */
#define SERCOM_SPIM_INTENCLR_RXC_Msk          (_UINT8_(0x1) << SERCOM_SPIM_INTENCLR_RXC_Pos)       /* (SERCOM_SPIM_INTENCLR) Receive Complete Interrupt Disable Mask */
#define SERCOM_SPIM_INTENCLR_RXC(value)       (SERCOM_SPIM_INTENCLR_RXC_Msk & (_UINT8_(value) << SERCOM_SPIM_INTENCLR_RXC_Pos)) /* Assignment of value for RXC in the SERCOM_SPIM_INTENCLR register */
#define SERCOM_SPIM_INTENCLR_SSL_Pos          _UINT8_(3)                                           /* (SERCOM_SPIM_INTENCLR) Slave Select Low Interrupt Disable Position */
#define SERCOM_SPIM_INTENCLR_SSL_Msk          (_UINT8_(0x1) << SERCOM_SPIM_INTENCLR_SSL_Pos)       /* (SERCOM_SPIM_INTENCLR) Slave Select Low Interrupt Disable Mask */
#define SERCOM_SPIM_INTENCLR_SSL(value)       (SERCOM_SPIM_INTENCLR_SSL_Msk & (_UINT8_(value) << SERCOM_SPIM_INTENCLR_SSL_Pos)) /* Assignment of value for SSL in the SERCOM_SPIM_INTENCLR register */
#define SERCOM_SPIM_INTENCLR_ERROR_Pos        _UINT8_(7)                                           /* (SERCOM_SPIM_INTENCLR) Combined Error Interrupt Disable Position */
#define SERCOM_SPIM_INTENCLR_ERROR_Msk        (_UINT8_(0x1) << SERCOM_SPIM_INTENCLR_ERROR_Pos)     /* (SERCOM_SPIM_INTENCLR) Combined Error Interrupt Disable Mask */
#define SERCOM_SPIM_INTENCLR_ERROR(value)     (SERCOM_SPIM_INTENCLR_ERROR_Msk & (_UINT8_(value) << SERCOM_SPIM_INTENCLR_ERROR_Pos)) /* Assignment of value for ERROR in the SERCOM_SPIM_INTENCLR register */
#define SERCOM_SPIM_INTENCLR_Msk              _UINT8_(0x8F)                                        /* (SERCOM_SPIM_INTENCLR) Register Mask  */


/* -------- SERCOM_SPIS_INTENCLR : (SERCOM Offset: 0x14) (R/W 8) SPIS Interrupt Enable Clear -------- */
#define SERCOM_SPIS_INTENCLR_RESETVALUE       _UINT8_(0x00)                                        /*  (SERCOM_SPIS_INTENCLR) SPIS Interrupt Enable Clear  Reset Value */

#define SERCOM_SPIS_INTENCLR_DRE_Pos          _UINT8_(0)                                           /* (SERCOM_SPIS_INTENCLR) Data Register Empty Interrupt Disable Position */
#define SERCOM_SPIS_INTENCLR_DRE_Msk          (_UINT8_(0x1) << SERCOM_SPIS_INTENCLR_DRE_Pos)       /* (SERCOM_SPIS_INTENCLR) Data Register Empty Interrupt Disable Mask */
#define SERCOM_SPIS_INTENCLR_DRE(value)       (SERCOM_SPIS_INTENCLR_DRE_Msk & (_UINT8_(value) << SERCOM_SPIS_INTENCLR_DRE_Pos)) /* Assignment of value for DRE in the SERCOM_SPIS_INTENCLR register */
#define SERCOM_SPIS_INTENCLR_TXC_Pos          _UINT8_(1)                                           /* (SERCOM_SPIS_INTENCLR) Transmit Complete Interrupt Disable Position */
#define SERCOM_SPIS_INTENCLR_TXC_Msk          (_UINT8_(0x1) << SERCOM_SPIS_INTENCLR_TXC_Pos)       /* (SERCOM_SPIS_INTENCLR) Transmit Complete Interrupt Disable Mask */
#define SERCOM_SPIS_INTENCLR_TXC(value)       (SERCOM_SPIS_INTENCLR_TXC_Msk & (_UINT8_(value) << SERCOM_SPIS_INTENCLR_TXC_Pos)) /* Assignment of value for TXC in the SERCOM_SPIS_INTENCLR register */
#define SERCOM_SPIS_INTENCLR_RXC_Pos          _UINT8_(2)                                           /* (SERCOM_SPIS_INTENCLR) Receive Complete Interrupt Disable Position */
#define SERCOM_SPIS_INTENCLR_RXC_Msk          (_UINT8_(0x1) << SERCOM_SPIS_INTENCLR_RXC_Pos)       /* (SERCOM_SPIS_INTENCLR) Receive Complete Interrupt Disable Mask */
#define SERCOM_SPIS_INTENCLR_RXC(value)       (SERCOM_SPIS_INTENCLR_RXC_Msk & (_UINT8_(value) << SERCOM_SPIS_INTENCLR_RXC_Pos)) /* Assignment of value for RXC in the SERCOM_SPIS_INTENCLR register */
#define SERCOM_SPIS_INTENCLR_SSL_Pos          _UINT8_(3)                                           /* (SERCOM_SPIS_INTENCLR) Slave Select Low Interrupt Disable Position */
#define SERCOM_SPIS_INTENCLR_SSL_Msk          (_UINT8_(0x1) << SERCOM_SPIS_INTENCLR_SSL_Pos)       /* (SERCOM_SPIS_INTENCLR) Slave Select Low Interrupt Disable Mask */
#define SERCOM_SPIS_INTENCLR_SSL(value)       (SERCOM_SPIS_INTENCLR_SSL_Msk & (_UINT8_(value) << SERCOM_SPIS_INTENCLR_SSL_Pos)) /* Assignment of value for SSL in the SERCOM_SPIS_INTENCLR register */
#define SERCOM_SPIS_INTENCLR_ERROR_Pos        _UINT8_(7)                                           /* (SERCOM_SPIS_INTENCLR) Combined Error Interrupt Disable Position */
#define SERCOM_SPIS_INTENCLR_ERROR_Msk        (_UINT8_(0x1) << SERCOM_SPIS_INTENCLR_ERROR_Pos)     /* (SERCOM_SPIS_INTENCLR) Combined Error Interrupt Disable Mask */
#define SERCOM_SPIS_INTENCLR_ERROR(value)     (SERCOM_SPIS_INTENCLR_ERROR_Msk & (_UINT8_(value) << SERCOM_SPIS_INTENCLR_ERROR_Pos)) /* Assignment of value for ERROR in the SERCOM_SPIS_INTENCLR register */
#define SERCOM_SPIS_INTENCLR_Msk              _UINT8_(0x8F)                                        /* (SERCOM_SPIS_INTENCLR) Register Mask  */


/* -------- SERCOM_USART_INT_INTENCLR : (SERCOM Offset: 0x14) (R/W 8) USART Interrupt Enable Clear -------- */
#define SERCOM_USART_INT_INTENCLR_RESETVALUE  _UINT8_(0x00)                                        /*  (SERCOM_USART_INT_INTENCLR) USART Interrupt Enable Clear  Reset Value */

#define SERCOM_USART_INT_INTENCLR_DRE_Pos     _UINT8_(0)                                           /* (SERCOM_USART_INT_INTENCLR) Data Register Empty Interrupt Disable Position */
#define SERCOM_USART_INT_INTENCLR_DRE_Msk     (_UINT8_(0x1) << SERCOM_USART_INT_INTENCLR_DRE_Pos)  /* (SERCOM_USART_INT_INTENCLR) Data Register Empty Interrupt Disable Mask */
#define SERCOM_USART_INT_INTENCLR_DRE(value)  (SERCOM_USART_INT_INTENCLR_DRE_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTENCLR_DRE_Pos)) /* Assignment of value for DRE in the SERCOM_USART_INT_INTENCLR register */
#define SERCOM_USART_INT_INTENCLR_TXC_Pos     _UINT8_(1)                                           /* (SERCOM_USART_INT_INTENCLR) Transmit Complete Interrupt Disable Position */
#define SERCOM_USART_INT_INTENCLR_TXC_Msk     (_UINT8_(0x1) << SERCOM_USART_INT_INTENCLR_TXC_Pos)  /* (SERCOM_USART_INT_INTENCLR) Transmit Complete Interrupt Disable Mask */
#define SERCOM_USART_INT_INTENCLR_TXC(value)  (SERCOM_USART_INT_INTENCLR_TXC_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTENCLR_TXC_Pos)) /* Assignment of value for TXC in the SERCOM_USART_INT_INTENCLR register */
#define SERCOM_USART_INT_INTENCLR_RXC_Pos     _UINT8_(2)                                           /* (SERCOM_USART_INT_INTENCLR) Receive Complete Interrupt Disable Position */
#define SERCOM_USART_INT_INTENCLR_RXC_Msk     (_UINT8_(0x1) << SERCOM_USART_INT_INTENCLR_RXC_Pos)  /* (SERCOM_USART_INT_INTENCLR) Receive Complete Interrupt Disable Mask */
#define SERCOM_USART_INT_INTENCLR_RXC(value)  (SERCOM_USART_INT_INTENCLR_RXC_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTENCLR_RXC_Pos)) /* Assignment of value for RXC in the SERCOM_USART_INT_INTENCLR register */
#define SERCOM_USART_INT_INTENCLR_RXS_Pos     _UINT8_(3)                                           /* (SERCOM_USART_INT_INTENCLR) Receive Start Interrupt Disable Position */
#define SERCOM_USART_INT_INTENCLR_RXS_Msk     (_UINT8_(0x1) << SERCOM_USART_INT_INTENCLR_RXS_Pos)  /* (SERCOM_USART_INT_INTENCLR) Receive Start Interrupt Disable Mask */
#define SERCOM_USART_INT_INTENCLR_RXS(value)  (SERCOM_USART_INT_INTENCLR_RXS_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTENCLR_RXS_Pos)) /* Assignment of value for RXS in the SERCOM_USART_INT_INTENCLR register */
#define SERCOM_USART_INT_INTENCLR_CTSIC_Pos   _UINT8_(4)                                           /* (SERCOM_USART_INT_INTENCLR) Clear To Send Input Change Interrupt Disable Position */
#define SERCOM_USART_INT_INTENCLR_CTSIC_Msk   (_UINT8_(0x1) << SERCOM_USART_INT_INTENCLR_CTSIC_Pos) /* (SERCOM_USART_INT_INTENCLR) Clear To Send Input Change Interrupt Disable Mask */
#define SERCOM_USART_INT_INTENCLR_CTSIC(value) (SERCOM_USART_INT_INTENCLR_CTSIC_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTENCLR_CTSIC_Pos)) /* Assignment of value for CTSIC in the SERCOM_USART_INT_INTENCLR register */
#define SERCOM_USART_INT_INTENCLR_RXBRK_Pos   _UINT8_(5)                                           /* (SERCOM_USART_INT_INTENCLR) Break Received Interrupt Disable Position */
#define SERCOM_USART_INT_INTENCLR_RXBRK_Msk   (_UINT8_(0x1) << SERCOM_USART_INT_INTENCLR_RXBRK_Pos) /* (SERCOM_USART_INT_INTENCLR) Break Received Interrupt Disable Mask */
#define SERCOM_USART_INT_INTENCLR_RXBRK(value) (SERCOM_USART_INT_INTENCLR_RXBRK_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTENCLR_RXBRK_Pos)) /* Assignment of value for RXBRK in the SERCOM_USART_INT_INTENCLR register */
#define SERCOM_USART_INT_INTENCLR_ERROR_Pos   _UINT8_(7)                                           /* (SERCOM_USART_INT_INTENCLR) Combined Error Interrupt Disable Position */
#define SERCOM_USART_INT_INTENCLR_ERROR_Msk   (_UINT8_(0x1) << SERCOM_USART_INT_INTENCLR_ERROR_Pos) /* (SERCOM_USART_INT_INTENCLR) Combined Error Interrupt Disable Mask */
#define SERCOM_USART_INT_INTENCLR_ERROR(value) (SERCOM_USART_INT_INTENCLR_ERROR_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTENCLR_ERROR_Pos)) /* Assignment of value for ERROR in the SERCOM_USART_INT_INTENCLR register */
#define SERCOM_USART_INT_INTENCLR_Msk         _UINT8_(0xBF)                                        /* (SERCOM_USART_INT_INTENCLR) Register Mask  */


/* -------- SERCOM_I2CM_INTENSET : (SERCOM Offset: 0x16) (R/W 8) I2CM Interrupt Enable Set -------- */
#define SERCOM_I2CM_INTENSET_RESETVALUE       _UINT8_(0x00)                                        /*  (SERCOM_I2CM_INTENSET) I2CM Interrupt Enable Set  Reset Value */

#define SERCOM_I2CM_INTENSET_MB_Pos           _UINT8_(0)                                           /* (SERCOM_I2CM_INTENSET) Master On Bus Interrupt Enable Position */
#define SERCOM_I2CM_INTENSET_MB_Msk           (_UINT8_(0x1) << SERCOM_I2CM_INTENSET_MB_Pos)        /* (SERCOM_I2CM_INTENSET) Master On Bus Interrupt Enable Mask */
#define SERCOM_I2CM_INTENSET_MB(value)        (SERCOM_I2CM_INTENSET_MB_Msk & (_UINT8_(value) << SERCOM_I2CM_INTENSET_MB_Pos)) /* Assignment of value for MB in the SERCOM_I2CM_INTENSET register */
#define SERCOM_I2CM_INTENSET_SB_Pos           _UINT8_(1)                                           /* (SERCOM_I2CM_INTENSET) Slave On Bus Interrupt Enable Position */
#define SERCOM_I2CM_INTENSET_SB_Msk           (_UINT8_(0x1) << SERCOM_I2CM_INTENSET_SB_Pos)        /* (SERCOM_I2CM_INTENSET) Slave On Bus Interrupt Enable Mask */
#define SERCOM_I2CM_INTENSET_SB(value)        (SERCOM_I2CM_INTENSET_SB_Msk & (_UINT8_(value) << SERCOM_I2CM_INTENSET_SB_Pos)) /* Assignment of value for SB in the SERCOM_I2CM_INTENSET register */
#define SERCOM_I2CM_INTENSET_TXFE_Pos         _UINT8_(3)                                           /* (SERCOM_I2CM_INTENSET) Tx FIFO Empty Interrupt Enable Position */
#define SERCOM_I2CM_INTENSET_TXFE_Msk         (_UINT8_(0x1) << SERCOM_I2CM_INTENSET_TXFE_Pos)      /* (SERCOM_I2CM_INTENSET) Tx FIFO Empty Interrupt Enable Mask */
#define SERCOM_I2CM_INTENSET_TXFE(value)      (SERCOM_I2CM_INTENSET_TXFE_Msk & (_UINT8_(value) << SERCOM_I2CM_INTENSET_TXFE_Pos)) /* Assignment of value for TXFE in the SERCOM_I2CM_INTENSET register */
#define SERCOM_I2CM_INTENSET_RXFF_Pos         _UINT8_(4)                                           /* (SERCOM_I2CM_INTENSET) Rx FIFO Full Interrupt Enable Position */
#define SERCOM_I2CM_INTENSET_RXFF_Msk         (_UINT8_(0x1) << SERCOM_I2CM_INTENSET_RXFF_Pos)      /* (SERCOM_I2CM_INTENSET) Rx FIFO Full Interrupt Enable Mask */
#define SERCOM_I2CM_INTENSET_RXFF(value)      (SERCOM_I2CM_INTENSET_RXFF_Msk & (_UINT8_(value) << SERCOM_I2CM_INTENSET_RXFF_Pos)) /* Assignment of value for RXFF in the SERCOM_I2CM_INTENSET register */
#define SERCOM_I2CM_INTENSET_ERROR_Pos        _UINT8_(7)                                           /* (SERCOM_I2CM_INTENSET) Combined Error Interrupt Enable Position */
#define SERCOM_I2CM_INTENSET_ERROR_Msk        (_UINT8_(0x1) << SERCOM_I2CM_INTENSET_ERROR_Pos)     /* (SERCOM_I2CM_INTENSET) Combined Error Interrupt Enable Mask */
#define SERCOM_I2CM_INTENSET_ERROR(value)     (SERCOM_I2CM_INTENSET_ERROR_Msk & (_UINT8_(value) << SERCOM_I2CM_INTENSET_ERROR_Pos)) /* Assignment of value for ERROR in the SERCOM_I2CM_INTENSET register */
#define SERCOM_I2CM_INTENSET_Msk              _UINT8_(0x9B)                                        /* (SERCOM_I2CM_INTENSET) Register Mask  */


/* -------- SERCOM_I2CS_INTENSET : (SERCOM Offset: 0x16) (R/W 8) I2CS Interrupt Enable Set -------- */
#define SERCOM_I2CS_INTENSET_RESETVALUE       _UINT8_(0x00)                                        /*  (SERCOM_I2CS_INTENSET) I2CS Interrupt Enable Set  Reset Value */

#define SERCOM_I2CS_INTENSET_PREC_Pos         _UINT8_(0)                                           /* (SERCOM_I2CS_INTENSET) Stop Received Interrupt Enable Position */
#define SERCOM_I2CS_INTENSET_PREC_Msk         (_UINT8_(0x1) << SERCOM_I2CS_INTENSET_PREC_Pos)      /* (SERCOM_I2CS_INTENSET) Stop Received Interrupt Enable Mask */
#define SERCOM_I2CS_INTENSET_PREC(value)      (SERCOM_I2CS_INTENSET_PREC_Msk & (_UINT8_(value) << SERCOM_I2CS_INTENSET_PREC_Pos)) /* Assignment of value for PREC in the SERCOM_I2CS_INTENSET register */
#define SERCOM_I2CS_INTENSET_AMATCH_Pos       _UINT8_(1)                                           /* (SERCOM_I2CS_INTENSET) Address Match Interrupt Enable Position */
#define SERCOM_I2CS_INTENSET_AMATCH_Msk       (_UINT8_(0x1) << SERCOM_I2CS_INTENSET_AMATCH_Pos)    /* (SERCOM_I2CS_INTENSET) Address Match Interrupt Enable Mask */
#define SERCOM_I2CS_INTENSET_AMATCH(value)    (SERCOM_I2CS_INTENSET_AMATCH_Msk & (_UINT8_(value) << SERCOM_I2CS_INTENSET_AMATCH_Pos)) /* Assignment of value for AMATCH in the SERCOM_I2CS_INTENSET register */
#define SERCOM_I2CS_INTENSET_DRDY_Pos         _UINT8_(2)                                           /* (SERCOM_I2CS_INTENSET) Data Interrupt Enable Position */
#define SERCOM_I2CS_INTENSET_DRDY_Msk         (_UINT8_(0x1) << SERCOM_I2CS_INTENSET_DRDY_Pos)      /* (SERCOM_I2CS_INTENSET) Data Interrupt Enable Mask */
#define SERCOM_I2CS_INTENSET_DRDY(value)      (SERCOM_I2CS_INTENSET_DRDY_Msk & (_UINT8_(value) << SERCOM_I2CS_INTENSET_DRDY_Pos)) /* Assignment of value for DRDY in the SERCOM_I2CS_INTENSET register */
#define SERCOM_I2CS_INTENSET_TXFE_Pos         _UINT8_(3)                                           /* (SERCOM_I2CS_INTENSET) Tx FIFO Empty Interrupt Enable Position */
#define SERCOM_I2CS_INTENSET_TXFE_Msk         (_UINT8_(0x1) << SERCOM_I2CS_INTENSET_TXFE_Pos)      /* (SERCOM_I2CS_INTENSET) Tx FIFO Empty Interrupt Enable Mask */
#define SERCOM_I2CS_INTENSET_TXFE(value)      (SERCOM_I2CS_INTENSET_TXFE_Msk & (_UINT8_(value) << SERCOM_I2CS_INTENSET_TXFE_Pos)) /* Assignment of value for TXFE in the SERCOM_I2CS_INTENSET register */
#define SERCOM_I2CS_INTENSET_RXFF_Pos         _UINT8_(4)                                           /* (SERCOM_I2CS_INTENSET) Rx FIFO Full Interrupt Enable Position */
#define SERCOM_I2CS_INTENSET_RXFF_Msk         (_UINT8_(0x1) << SERCOM_I2CS_INTENSET_RXFF_Pos)      /* (SERCOM_I2CS_INTENSET) Rx FIFO Full Interrupt Enable Mask */
#define SERCOM_I2CS_INTENSET_RXFF(value)      (SERCOM_I2CS_INTENSET_RXFF_Msk & (_UINT8_(value) << SERCOM_I2CS_INTENSET_RXFF_Pos)) /* Assignment of value for RXFF in the SERCOM_I2CS_INTENSET register */
#define SERCOM_I2CS_INTENSET_ERROR_Pos        _UINT8_(7)                                           /* (SERCOM_I2CS_INTENSET) Combined Error Interrupt Enable Position */
#define SERCOM_I2CS_INTENSET_ERROR_Msk        (_UINT8_(0x1) << SERCOM_I2CS_INTENSET_ERROR_Pos)     /* (SERCOM_I2CS_INTENSET) Combined Error Interrupt Enable Mask */
#define SERCOM_I2CS_INTENSET_ERROR(value)     (SERCOM_I2CS_INTENSET_ERROR_Msk & (_UINT8_(value) << SERCOM_I2CS_INTENSET_ERROR_Pos)) /* Assignment of value for ERROR in the SERCOM_I2CS_INTENSET register */
#define SERCOM_I2CS_INTENSET_Msk              _UINT8_(0x9F)                                        /* (SERCOM_I2CS_INTENSET) Register Mask  */


/* -------- SERCOM_SPIM_INTENSET : (SERCOM Offset: 0x16) (R/W 8) SPIM Interrupt Enable Set -------- */
#define SERCOM_SPIM_INTENSET_RESETVALUE       _UINT8_(0x00)                                        /*  (SERCOM_SPIM_INTENSET) SPIM Interrupt Enable Set  Reset Value */

#define SERCOM_SPIM_INTENSET_DRE_Pos          _UINT8_(0)                                           /* (SERCOM_SPIM_INTENSET) Data Register Empty Interrupt Enable Position */
#define SERCOM_SPIM_INTENSET_DRE_Msk          (_UINT8_(0x1) << SERCOM_SPIM_INTENSET_DRE_Pos)       /* (SERCOM_SPIM_INTENSET) Data Register Empty Interrupt Enable Mask */
#define SERCOM_SPIM_INTENSET_DRE(value)       (SERCOM_SPIM_INTENSET_DRE_Msk & (_UINT8_(value) << SERCOM_SPIM_INTENSET_DRE_Pos)) /* Assignment of value for DRE in the SERCOM_SPIM_INTENSET register */
#define SERCOM_SPIM_INTENSET_TXC_Pos          _UINT8_(1)                                           /* (SERCOM_SPIM_INTENSET) Transmit Complete Interrupt Enable Position */
#define SERCOM_SPIM_INTENSET_TXC_Msk          (_UINT8_(0x1) << SERCOM_SPIM_INTENSET_TXC_Pos)       /* (SERCOM_SPIM_INTENSET) Transmit Complete Interrupt Enable Mask */
#define SERCOM_SPIM_INTENSET_TXC(value)       (SERCOM_SPIM_INTENSET_TXC_Msk & (_UINT8_(value) << SERCOM_SPIM_INTENSET_TXC_Pos)) /* Assignment of value for TXC in the SERCOM_SPIM_INTENSET register */
#define SERCOM_SPIM_INTENSET_RXC_Pos          _UINT8_(2)                                           /* (SERCOM_SPIM_INTENSET) Receive Complete Interrupt Enable Position */
#define SERCOM_SPIM_INTENSET_RXC_Msk          (_UINT8_(0x1) << SERCOM_SPIM_INTENSET_RXC_Pos)       /* (SERCOM_SPIM_INTENSET) Receive Complete Interrupt Enable Mask */
#define SERCOM_SPIM_INTENSET_RXC(value)       (SERCOM_SPIM_INTENSET_RXC_Msk & (_UINT8_(value) << SERCOM_SPIM_INTENSET_RXC_Pos)) /* Assignment of value for RXC in the SERCOM_SPIM_INTENSET register */
#define SERCOM_SPIM_INTENSET_SSL_Pos          _UINT8_(3)                                           /* (SERCOM_SPIM_INTENSET) Slave Select Low Interrupt Enable Position */
#define SERCOM_SPIM_INTENSET_SSL_Msk          (_UINT8_(0x1) << SERCOM_SPIM_INTENSET_SSL_Pos)       /* (SERCOM_SPIM_INTENSET) Slave Select Low Interrupt Enable Mask */
#define SERCOM_SPIM_INTENSET_SSL(value)       (SERCOM_SPIM_INTENSET_SSL_Msk & (_UINT8_(value) << SERCOM_SPIM_INTENSET_SSL_Pos)) /* Assignment of value for SSL in the SERCOM_SPIM_INTENSET register */
#define SERCOM_SPIM_INTENSET_ERROR_Pos        _UINT8_(7)                                           /* (SERCOM_SPIM_INTENSET) Combined Error Interrupt Enable Position */
#define SERCOM_SPIM_INTENSET_ERROR_Msk        (_UINT8_(0x1) << SERCOM_SPIM_INTENSET_ERROR_Pos)     /* (SERCOM_SPIM_INTENSET) Combined Error Interrupt Enable Mask */
#define SERCOM_SPIM_INTENSET_ERROR(value)     (SERCOM_SPIM_INTENSET_ERROR_Msk & (_UINT8_(value) << SERCOM_SPIM_INTENSET_ERROR_Pos)) /* Assignment of value for ERROR in the SERCOM_SPIM_INTENSET register */
#define SERCOM_SPIM_INTENSET_Msk              _UINT8_(0x8F)                                        /* (SERCOM_SPIM_INTENSET) Register Mask  */


/* -------- SERCOM_SPIS_INTENSET : (SERCOM Offset: 0x16) (R/W 8) SPIS Interrupt Enable Set -------- */
#define SERCOM_SPIS_INTENSET_RESETVALUE       _UINT8_(0x00)                                        /*  (SERCOM_SPIS_INTENSET) SPIS Interrupt Enable Set  Reset Value */

#define SERCOM_SPIS_INTENSET_DRE_Pos          _UINT8_(0)                                           /* (SERCOM_SPIS_INTENSET) Data Register Empty Interrupt Enable Position */
#define SERCOM_SPIS_INTENSET_DRE_Msk          (_UINT8_(0x1) << SERCOM_SPIS_INTENSET_DRE_Pos)       /* (SERCOM_SPIS_INTENSET) Data Register Empty Interrupt Enable Mask */
#define SERCOM_SPIS_INTENSET_DRE(value)       (SERCOM_SPIS_INTENSET_DRE_Msk & (_UINT8_(value) << SERCOM_SPIS_INTENSET_DRE_Pos)) /* Assignment of value for DRE in the SERCOM_SPIS_INTENSET register */
#define SERCOM_SPIS_INTENSET_TXC_Pos          _UINT8_(1)                                           /* (SERCOM_SPIS_INTENSET) Transmit Complete Interrupt Enable Position */
#define SERCOM_SPIS_INTENSET_TXC_Msk          (_UINT8_(0x1) << SERCOM_SPIS_INTENSET_TXC_Pos)       /* (SERCOM_SPIS_INTENSET) Transmit Complete Interrupt Enable Mask */
#define SERCOM_SPIS_INTENSET_TXC(value)       (SERCOM_SPIS_INTENSET_TXC_Msk & (_UINT8_(value) << SERCOM_SPIS_INTENSET_TXC_Pos)) /* Assignment of value for TXC in the SERCOM_SPIS_INTENSET register */
#define SERCOM_SPIS_INTENSET_RXC_Pos          _UINT8_(2)                                           /* (SERCOM_SPIS_INTENSET) Receive Complete Interrupt Enable Position */
#define SERCOM_SPIS_INTENSET_RXC_Msk          (_UINT8_(0x1) << SERCOM_SPIS_INTENSET_RXC_Pos)       /* (SERCOM_SPIS_INTENSET) Receive Complete Interrupt Enable Mask */
#define SERCOM_SPIS_INTENSET_RXC(value)       (SERCOM_SPIS_INTENSET_RXC_Msk & (_UINT8_(value) << SERCOM_SPIS_INTENSET_RXC_Pos)) /* Assignment of value for RXC in the SERCOM_SPIS_INTENSET register */
#define SERCOM_SPIS_INTENSET_SSL_Pos          _UINT8_(3)                                           /* (SERCOM_SPIS_INTENSET) Slave Select Low Interrupt Enable Position */
#define SERCOM_SPIS_INTENSET_SSL_Msk          (_UINT8_(0x1) << SERCOM_SPIS_INTENSET_SSL_Pos)       /* (SERCOM_SPIS_INTENSET) Slave Select Low Interrupt Enable Mask */
#define SERCOM_SPIS_INTENSET_SSL(value)       (SERCOM_SPIS_INTENSET_SSL_Msk & (_UINT8_(value) << SERCOM_SPIS_INTENSET_SSL_Pos)) /* Assignment of value for SSL in the SERCOM_SPIS_INTENSET register */
#define SERCOM_SPIS_INTENSET_ERROR_Pos        _UINT8_(7)                                           /* (SERCOM_SPIS_INTENSET) Combined Error Interrupt Enable Position */
#define SERCOM_SPIS_INTENSET_ERROR_Msk        (_UINT8_(0x1) << SERCOM_SPIS_INTENSET_ERROR_Pos)     /* (SERCOM_SPIS_INTENSET) Combined Error Interrupt Enable Mask */
#define SERCOM_SPIS_INTENSET_ERROR(value)     (SERCOM_SPIS_INTENSET_ERROR_Msk & (_UINT8_(value) << SERCOM_SPIS_INTENSET_ERROR_Pos)) /* Assignment of value for ERROR in the SERCOM_SPIS_INTENSET register */
#define SERCOM_SPIS_INTENSET_Msk              _UINT8_(0x8F)                                        /* (SERCOM_SPIS_INTENSET) Register Mask  */


/* -------- SERCOM_USART_INT_INTENSET : (SERCOM Offset: 0x16) (R/W 8) USART Interrupt Enable Set -------- */
#define SERCOM_USART_INT_INTENSET_RESETVALUE  _UINT8_(0x00)                                        /*  (SERCOM_USART_INT_INTENSET) USART Interrupt Enable Set  Reset Value */

#define SERCOM_USART_INT_INTENSET_DRE_Pos     _UINT8_(0)                                           /* (SERCOM_USART_INT_INTENSET) Data Register Empty Interrupt Enable Position */
#define SERCOM_USART_INT_INTENSET_DRE_Msk     (_UINT8_(0x1) << SERCOM_USART_INT_INTENSET_DRE_Pos)  /* (SERCOM_USART_INT_INTENSET) Data Register Empty Interrupt Enable Mask */
#define SERCOM_USART_INT_INTENSET_DRE(value)  (SERCOM_USART_INT_INTENSET_DRE_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTENSET_DRE_Pos)) /* Assignment of value for DRE in the SERCOM_USART_INT_INTENSET register */
#define SERCOM_USART_INT_INTENSET_TXC_Pos     _UINT8_(1)                                           /* (SERCOM_USART_INT_INTENSET) Transmit Complete Interrupt Enable Position */
#define SERCOM_USART_INT_INTENSET_TXC_Msk     (_UINT8_(0x1) << SERCOM_USART_INT_INTENSET_TXC_Pos)  /* (SERCOM_USART_INT_INTENSET) Transmit Complete Interrupt Enable Mask */
#define SERCOM_USART_INT_INTENSET_TXC(value)  (SERCOM_USART_INT_INTENSET_TXC_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTENSET_TXC_Pos)) /* Assignment of value for TXC in the SERCOM_USART_INT_INTENSET register */
#define SERCOM_USART_INT_INTENSET_RXC_Pos     _UINT8_(2)                                           /* (SERCOM_USART_INT_INTENSET) Receive Complete Interrupt Enable Position */
#define SERCOM_USART_INT_INTENSET_RXC_Msk     (_UINT8_(0x1) << SERCOM_USART_INT_INTENSET_RXC_Pos)  /* (SERCOM_USART_INT_INTENSET) Receive Complete Interrupt Enable Mask */
#define SERCOM_USART_INT_INTENSET_RXC(value)  (SERCOM_USART_INT_INTENSET_RXC_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTENSET_RXC_Pos)) /* Assignment of value for RXC in the SERCOM_USART_INT_INTENSET register */
#define SERCOM_USART_INT_INTENSET_RXS_Pos     _UINT8_(3)                                           /* (SERCOM_USART_INT_INTENSET) Receive Start Interrupt Enable Position */
#define SERCOM_USART_INT_INTENSET_RXS_Msk     (_UINT8_(0x1) << SERCOM_USART_INT_INTENSET_RXS_Pos)  /* (SERCOM_USART_INT_INTENSET) Receive Start Interrupt Enable Mask */
#define SERCOM_USART_INT_INTENSET_RXS(value)  (SERCOM_USART_INT_INTENSET_RXS_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTENSET_RXS_Pos)) /* Assignment of value for RXS in the SERCOM_USART_INT_INTENSET register */
#define SERCOM_USART_INT_INTENSET_CTSIC_Pos   _UINT8_(4)                                           /* (SERCOM_USART_INT_INTENSET) Clear To Send Input Change Interrupt Enable Position */
#define SERCOM_USART_INT_INTENSET_CTSIC_Msk   (_UINT8_(0x1) << SERCOM_USART_INT_INTENSET_CTSIC_Pos) /* (SERCOM_USART_INT_INTENSET) Clear To Send Input Change Interrupt Enable Mask */
#define SERCOM_USART_INT_INTENSET_CTSIC(value) (SERCOM_USART_INT_INTENSET_CTSIC_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTENSET_CTSIC_Pos)) /* Assignment of value for CTSIC in the SERCOM_USART_INT_INTENSET register */
#define SERCOM_USART_INT_INTENSET_RXBRK_Pos   _UINT8_(5)                                           /* (SERCOM_USART_INT_INTENSET) Break Received Interrupt Enable Position */
#define SERCOM_USART_INT_INTENSET_RXBRK_Msk   (_UINT8_(0x1) << SERCOM_USART_INT_INTENSET_RXBRK_Pos) /* (SERCOM_USART_INT_INTENSET) Break Received Interrupt Enable Mask */
#define SERCOM_USART_INT_INTENSET_RXBRK(value) (SERCOM_USART_INT_INTENSET_RXBRK_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTENSET_RXBRK_Pos)) /* Assignment of value for RXBRK in the SERCOM_USART_INT_INTENSET register */
#define SERCOM_USART_INT_INTENSET_ERROR_Pos   _UINT8_(7)                                           /* (SERCOM_USART_INT_INTENSET) Combined Error Interrupt Enable Position */
#define SERCOM_USART_INT_INTENSET_ERROR_Msk   (_UINT8_(0x1) << SERCOM_USART_INT_INTENSET_ERROR_Pos) /* (SERCOM_USART_INT_INTENSET) Combined Error Interrupt Enable Mask */
#define SERCOM_USART_INT_INTENSET_ERROR(value) (SERCOM_USART_INT_INTENSET_ERROR_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTENSET_ERROR_Pos)) /* Assignment of value for ERROR in the SERCOM_USART_INT_INTENSET register */
#define SERCOM_USART_INT_INTENSET_Msk         _UINT8_(0xBF)                                        /* (SERCOM_USART_INT_INTENSET) Register Mask  */


/* -------- SERCOM_I2CM_INTFLAG : (SERCOM Offset: 0x18) (R/W 8) I2CM Interrupt Flag Status and Clear -------- */
#define SERCOM_I2CM_INTFLAG_RESETVALUE        _UINT8_(0x00)                                        /*  (SERCOM_I2CM_INTFLAG) I2CM Interrupt Flag Status and Clear  Reset Value */

#define SERCOM_I2CM_INTFLAG_MB_Pos            _UINT8_(0)                                           /* (SERCOM_I2CM_INTFLAG) Master On Bus Interrupt Position */
#define SERCOM_I2CM_INTFLAG_MB_Msk            (_UINT8_(0x1) << SERCOM_I2CM_INTFLAG_MB_Pos)         /* (SERCOM_I2CM_INTFLAG) Master On Bus Interrupt Mask */
#define SERCOM_I2CM_INTFLAG_MB(value)         (SERCOM_I2CM_INTFLAG_MB_Msk & (_UINT8_(value) << SERCOM_I2CM_INTFLAG_MB_Pos)) /* Assignment of value for MB in the SERCOM_I2CM_INTFLAG register */
#define SERCOM_I2CM_INTFLAG_SB_Pos            _UINT8_(1)                                           /* (SERCOM_I2CM_INTFLAG) Slave On Bus Interrupt Position */
#define SERCOM_I2CM_INTFLAG_SB_Msk            (_UINT8_(0x1) << SERCOM_I2CM_INTFLAG_SB_Pos)         /* (SERCOM_I2CM_INTFLAG) Slave On Bus Interrupt Mask */
#define SERCOM_I2CM_INTFLAG_SB(value)         (SERCOM_I2CM_INTFLAG_SB_Msk & (_UINT8_(value) << SERCOM_I2CM_INTFLAG_SB_Pos)) /* Assignment of value for SB in the SERCOM_I2CM_INTFLAG register */
#define SERCOM_I2CM_INTFLAG_TXFE_Pos          _UINT8_(3)                                           /* (SERCOM_I2CM_INTFLAG) Tx FIFO Empty Interrupt Position */
#define SERCOM_I2CM_INTFLAG_TXFE_Msk          (_UINT8_(0x1) << SERCOM_I2CM_INTFLAG_TXFE_Pos)       /* (SERCOM_I2CM_INTFLAG) Tx FIFO Empty Interrupt Mask */
#define SERCOM_I2CM_INTFLAG_TXFE(value)       (SERCOM_I2CM_INTFLAG_TXFE_Msk & (_UINT8_(value) << SERCOM_I2CM_INTFLAG_TXFE_Pos)) /* Assignment of value for TXFE in the SERCOM_I2CM_INTFLAG register */
#define SERCOM_I2CM_INTFLAG_RXFF_Pos          _UINT8_(4)                                           /* (SERCOM_I2CM_INTFLAG) Rx FIFO Full Interrupt Position */
#define SERCOM_I2CM_INTFLAG_RXFF_Msk          (_UINT8_(0x1) << SERCOM_I2CM_INTFLAG_RXFF_Pos)       /* (SERCOM_I2CM_INTFLAG) Rx FIFO Full Interrupt Mask */
#define SERCOM_I2CM_INTFLAG_RXFF(value)       (SERCOM_I2CM_INTFLAG_RXFF_Msk & (_UINT8_(value) << SERCOM_I2CM_INTFLAG_RXFF_Pos)) /* Assignment of value for RXFF in the SERCOM_I2CM_INTFLAG register */
#define SERCOM_I2CM_INTFLAG_ERROR_Pos         _UINT8_(7)                                           /* (SERCOM_I2CM_INTFLAG) Combined Error Interrupt Position */
#define SERCOM_I2CM_INTFLAG_ERROR_Msk         (_UINT8_(0x1) << SERCOM_I2CM_INTFLAG_ERROR_Pos)      /* (SERCOM_I2CM_INTFLAG) Combined Error Interrupt Mask */
#define SERCOM_I2CM_INTFLAG_ERROR(value)      (SERCOM_I2CM_INTFLAG_ERROR_Msk & (_UINT8_(value) << SERCOM_I2CM_INTFLAG_ERROR_Pos)) /* Assignment of value for ERROR in the SERCOM_I2CM_INTFLAG register */
#define SERCOM_I2CM_INTFLAG_Msk               _UINT8_(0x9B)                                        /* (SERCOM_I2CM_INTFLAG) Register Mask  */


/* -------- SERCOM_I2CS_INTFLAG : (SERCOM Offset: 0x18) (R/W 8) I2CS Interrupt Flag Status and Clear -------- */
#define SERCOM_I2CS_INTFLAG_RESETVALUE        _UINT8_(0x00)                                        /*  (SERCOM_I2CS_INTFLAG) I2CS Interrupt Flag Status and Clear  Reset Value */

#define SERCOM_I2CS_INTFLAG_PREC_Pos          _UINT8_(0)                                           /* (SERCOM_I2CS_INTFLAG) Stop Received Interrupt Position */
#define SERCOM_I2CS_INTFLAG_PREC_Msk          (_UINT8_(0x1) << SERCOM_I2CS_INTFLAG_PREC_Pos)       /* (SERCOM_I2CS_INTFLAG) Stop Received Interrupt Mask */
#define SERCOM_I2CS_INTFLAG_PREC(value)       (SERCOM_I2CS_INTFLAG_PREC_Msk & (_UINT8_(value) << SERCOM_I2CS_INTFLAG_PREC_Pos)) /* Assignment of value for PREC in the SERCOM_I2CS_INTFLAG register */
#define SERCOM_I2CS_INTFLAG_AMATCH_Pos        _UINT8_(1)                                           /* (SERCOM_I2CS_INTFLAG) Address Match Interrupt Position */
#define SERCOM_I2CS_INTFLAG_AMATCH_Msk        (_UINT8_(0x1) << SERCOM_I2CS_INTFLAG_AMATCH_Pos)     /* (SERCOM_I2CS_INTFLAG) Address Match Interrupt Mask */
#define SERCOM_I2CS_INTFLAG_AMATCH(value)     (SERCOM_I2CS_INTFLAG_AMATCH_Msk & (_UINT8_(value) << SERCOM_I2CS_INTFLAG_AMATCH_Pos)) /* Assignment of value for AMATCH in the SERCOM_I2CS_INTFLAG register */
#define SERCOM_I2CS_INTFLAG_DRDY_Pos          _UINT8_(2)                                           /* (SERCOM_I2CS_INTFLAG) Data Interrupt Position */
#define SERCOM_I2CS_INTFLAG_DRDY_Msk          (_UINT8_(0x1) << SERCOM_I2CS_INTFLAG_DRDY_Pos)       /* (SERCOM_I2CS_INTFLAG) Data Interrupt Mask */
#define SERCOM_I2CS_INTFLAG_DRDY(value)       (SERCOM_I2CS_INTFLAG_DRDY_Msk & (_UINT8_(value) << SERCOM_I2CS_INTFLAG_DRDY_Pos)) /* Assignment of value for DRDY in the SERCOM_I2CS_INTFLAG register */
#define SERCOM_I2CS_INTFLAG_TXFE_Pos          _UINT8_(3)                                           /* (SERCOM_I2CS_INTFLAG) Tx FIFO Empty Interrupt Position */
#define SERCOM_I2CS_INTFLAG_TXFE_Msk          (_UINT8_(0x1) << SERCOM_I2CS_INTFLAG_TXFE_Pos)       /* (SERCOM_I2CS_INTFLAG) Tx FIFO Empty Interrupt Mask */
#define SERCOM_I2CS_INTFLAG_TXFE(value)       (SERCOM_I2CS_INTFLAG_TXFE_Msk & (_UINT8_(value) << SERCOM_I2CS_INTFLAG_TXFE_Pos)) /* Assignment of value for TXFE in the SERCOM_I2CS_INTFLAG register */
#define SERCOM_I2CS_INTFLAG_RXFF_Pos          _UINT8_(4)                                           /* (SERCOM_I2CS_INTFLAG) Rx FIFO Full Interrupt Position */
#define SERCOM_I2CS_INTFLAG_RXFF_Msk          (_UINT8_(0x1) << SERCOM_I2CS_INTFLAG_RXFF_Pos)       /* (SERCOM_I2CS_INTFLAG) Rx FIFO Full Interrupt Mask */
#define SERCOM_I2CS_INTFLAG_RXFF(value)       (SERCOM_I2CS_INTFLAG_RXFF_Msk & (_UINT8_(value) << SERCOM_I2CS_INTFLAG_RXFF_Pos)) /* Assignment of value for RXFF in the SERCOM_I2CS_INTFLAG register */
#define SERCOM_I2CS_INTFLAG_ERROR_Pos         _UINT8_(7)                                           /* (SERCOM_I2CS_INTFLAG) Combined Error Interrupt Position */
#define SERCOM_I2CS_INTFLAG_ERROR_Msk         (_UINT8_(0x1) << SERCOM_I2CS_INTFLAG_ERROR_Pos)      /* (SERCOM_I2CS_INTFLAG) Combined Error Interrupt Mask */
#define SERCOM_I2CS_INTFLAG_ERROR(value)      (SERCOM_I2CS_INTFLAG_ERROR_Msk & (_UINT8_(value) << SERCOM_I2CS_INTFLAG_ERROR_Pos)) /* Assignment of value for ERROR in the SERCOM_I2CS_INTFLAG register */
#define SERCOM_I2CS_INTFLAG_Msk               _UINT8_(0x9F)                                        /* (SERCOM_I2CS_INTFLAG) Register Mask  */


/* -------- SERCOM_SPIM_INTFLAG : (SERCOM Offset: 0x18) (R/W 8) SPIM Interrupt Flag Status and Clear -------- */
#define SERCOM_SPIM_INTFLAG_RESETVALUE        _UINT8_(0x00)                                        /*  (SERCOM_SPIM_INTFLAG) SPIM Interrupt Flag Status and Clear  Reset Value */

#define SERCOM_SPIM_INTFLAG_DRE_Pos           _UINT8_(0)                                           /* (SERCOM_SPIM_INTFLAG) Data Register Empty Interrupt Position */
#define SERCOM_SPIM_INTFLAG_DRE_Msk           (_UINT8_(0x1) << SERCOM_SPIM_INTFLAG_DRE_Pos)        /* (SERCOM_SPIM_INTFLAG) Data Register Empty Interrupt Mask */
#define SERCOM_SPIM_INTFLAG_DRE(value)        (SERCOM_SPIM_INTFLAG_DRE_Msk & (_UINT8_(value) << SERCOM_SPIM_INTFLAG_DRE_Pos)) /* Assignment of value for DRE in the SERCOM_SPIM_INTFLAG register */
#define SERCOM_SPIM_INTFLAG_TXC_Pos           _UINT8_(1)                                           /* (SERCOM_SPIM_INTFLAG) Transmit Complete Interrupt Position */
#define SERCOM_SPIM_INTFLAG_TXC_Msk           (_UINT8_(0x1) << SERCOM_SPIM_INTFLAG_TXC_Pos)        /* (SERCOM_SPIM_INTFLAG) Transmit Complete Interrupt Mask */
#define SERCOM_SPIM_INTFLAG_TXC(value)        (SERCOM_SPIM_INTFLAG_TXC_Msk & (_UINT8_(value) << SERCOM_SPIM_INTFLAG_TXC_Pos)) /* Assignment of value for TXC in the SERCOM_SPIM_INTFLAG register */
#define SERCOM_SPIM_INTFLAG_RXC_Pos           _UINT8_(2)                                           /* (SERCOM_SPIM_INTFLAG) Receive Complete Interrupt Position */
#define SERCOM_SPIM_INTFLAG_RXC_Msk           (_UINT8_(0x1) << SERCOM_SPIM_INTFLAG_RXC_Pos)        /* (SERCOM_SPIM_INTFLAG) Receive Complete Interrupt Mask */
#define SERCOM_SPIM_INTFLAG_RXC(value)        (SERCOM_SPIM_INTFLAG_RXC_Msk & (_UINT8_(value) << SERCOM_SPIM_INTFLAG_RXC_Pos)) /* Assignment of value for RXC in the SERCOM_SPIM_INTFLAG register */
#define SERCOM_SPIM_INTFLAG_SSL_Pos           _UINT8_(3)                                           /* (SERCOM_SPIM_INTFLAG) Slave Select Low Interrupt Flag Position */
#define SERCOM_SPIM_INTFLAG_SSL_Msk           (_UINT8_(0x1) << SERCOM_SPIM_INTFLAG_SSL_Pos)        /* (SERCOM_SPIM_INTFLAG) Slave Select Low Interrupt Flag Mask */
#define SERCOM_SPIM_INTFLAG_SSL(value)        (SERCOM_SPIM_INTFLAG_SSL_Msk & (_UINT8_(value) << SERCOM_SPIM_INTFLAG_SSL_Pos)) /* Assignment of value for SSL in the SERCOM_SPIM_INTFLAG register */
#define SERCOM_SPIM_INTFLAG_ERROR_Pos         _UINT8_(7)                                           /* (SERCOM_SPIM_INTFLAG) Combined Error Interrupt Position */
#define SERCOM_SPIM_INTFLAG_ERROR_Msk         (_UINT8_(0x1) << SERCOM_SPIM_INTFLAG_ERROR_Pos)      /* (SERCOM_SPIM_INTFLAG) Combined Error Interrupt Mask */
#define SERCOM_SPIM_INTFLAG_ERROR(value)      (SERCOM_SPIM_INTFLAG_ERROR_Msk & (_UINT8_(value) << SERCOM_SPIM_INTFLAG_ERROR_Pos)) /* Assignment of value for ERROR in the SERCOM_SPIM_INTFLAG register */
#define SERCOM_SPIM_INTFLAG_Msk               _UINT8_(0x8F)                                        /* (SERCOM_SPIM_INTFLAG) Register Mask  */


/* -------- SERCOM_SPIS_INTFLAG : (SERCOM Offset: 0x18) (R/W 8) SPIS Interrupt Flag Status and Clear -------- */
#define SERCOM_SPIS_INTFLAG_RESETVALUE        _UINT8_(0x00)                                        /*  (SERCOM_SPIS_INTFLAG) SPIS Interrupt Flag Status and Clear  Reset Value */

#define SERCOM_SPIS_INTFLAG_DRE_Pos           _UINT8_(0)                                           /* (SERCOM_SPIS_INTFLAG) Data Register Empty Interrupt Position */
#define SERCOM_SPIS_INTFLAG_DRE_Msk           (_UINT8_(0x1) << SERCOM_SPIS_INTFLAG_DRE_Pos)        /* (SERCOM_SPIS_INTFLAG) Data Register Empty Interrupt Mask */
#define SERCOM_SPIS_INTFLAG_DRE(value)        (SERCOM_SPIS_INTFLAG_DRE_Msk & (_UINT8_(value) << SERCOM_SPIS_INTFLAG_DRE_Pos)) /* Assignment of value for DRE in the SERCOM_SPIS_INTFLAG register */
#define SERCOM_SPIS_INTFLAG_TXC_Pos           _UINT8_(1)                                           /* (SERCOM_SPIS_INTFLAG) Transmit Complete Interrupt Position */
#define SERCOM_SPIS_INTFLAG_TXC_Msk           (_UINT8_(0x1) << SERCOM_SPIS_INTFLAG_TXC_Pos)        /* (SERCOM_SPIS_INTFLAG) Transmit Complete Interrupt Mask */
#define SERCOM_SPIS_INTFLAG_TXC(value)        (SERCOM_SPIS_INTFLAG_TXC_Msk & (_UINT8_(value) << SERCOM_SPIS_INTFLAG_TXC_Pos)) /* Assignment of value for TXC in the SERCOM_SPIS_INTFLAG register */
#define SERCOM_SPIS_INTFLAG_RXC_Pos           _UINT8_(2)                                           /* (SERCOM_SPIS_INTFLAG) Receive Complete Interrupt Position */
#define SERCOM_SPIS_INTFLAG_RXC_Msk           (_UINT8_(0x1) << SERCOM_SPIS_INTFLAG_RXC_Pos)        /* (SERCOM_SPIS_INTFLAG) Receive Complete Interrupt Mask */
#define SERCOM_SPIS_INTFLAG_RXC(value)        (SERCOM_SPIS_INTFLAG_RXC_Msk & (_UINT8_(value) << SERCOM_SPIS_INTFLAG_RXC_Pos)) /* Assignment of value for RXC in the SERCOM_SPIS_INTFLAG register */
#define SERCOM_SPIS_INTFLAG_SSL_Pos           _UINT8_(3)                                           /* (SERCOM_SPIS_INTFLAG) Slave Select Low Interrupt Flag Position */
#define SERCOM_SPIS_INTFLAG_SSL_Msk           (_UINT8_(0x1) << SERCOM_SPIS_INTFLAG_SSL_Pos)        /* (SERCOM_SPIS_INTFLAG) Slave Select Low Interrupt Flag Mask */
#define SERCOM_SPIS_INTFLAG_SSL(value)        (SERCOM_SPIS_INTFLAG_SSL_Msk & (_UINT8_(value) << SERCOM_SPIS_INTFLAG_SSL_Pos)) /* Assignment of value for SSL in the SERCOM_SPIS_INTFLAG register */
#define SERCOM_SPIS_INTFLAG_ERROR_Pos         _UINT8_(7)                                           /* (SERCOM_SPIS_INTFLAG) Combined Error Interrupt Position */
#define SERCOM_SPIS_INTFLAG_ERROR_Msk         (_UINT8_(0x1) << SERCOM_SPIS_INTFLAG_ERROR_Pos)      /* (SERCOM_SPIS_INTFLAG) Combined Error Interrupt Mask */
#define SERCOM_SPIS_INTFLAG_ERROR(value)      (SERCOM_SPIS_INTFLAG_ERROR_Msk & (_UINT8_(value) << SERCOM_SPIS_INTFLAG_ERROR_Pos)) /* Assignment of value for ERROR in the SERCOM_SPIS_INTFLAG register */
#define SERCOM_SPIS_INTFLAG_Msk               _UINT8_(0x8F)                                        /* (SERCOM_SPIS_INTFLAG) Register Mask  */


/* -------- SERCOM_USART_INT_INTFLAG : (SERCOM Offset: 0x18) (R/W 8) USART Interrupt Flag Status and Clear -------- */
#define SERCOM_USART_INT_INTFLAG_RESETVALUE   _UINT8_(0x00)                                        /*  (SERCOM_USART_INT_INTFLAG) USART Interrupt Flag Status and Clear  Reset Value */

#define SERCOM_USART_INT_INTFLAG_DRE_Pos      _UINT8_(0)                                           /* (SERCOM_USART_INT_INTFLAG) Data Register Empty Interrupt Position */
#define SERCOM_USART_INT_INTFLAG_DRE_Msk      (_UINT8_(0x1) << SERCOM_USART_INT_INTFLAG_DRE_Pos)   /* (SERCOM_USART_INT_INTFLAG) Data Register Empty Interrupt Mask */
#define SERCOM_USART_INT_INTFLAG_DRE(value)   (SERCOM_USART_INT_INTFLAG_DRE_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTFLAG_DRE_Pos)) /* Assignment of value for DRE in the SERCOM_USART_INT_INTFLAG register */
#define SERCOM_USART_INT_INTFLAG_TXC_Pos      _UINT8_(1)                                           /* (SERCOM_USART_INT_INTFLAG) Transmit Complete Interrupt Position */
#define SERCOM_USART_INT_INTFLAG_TXC_Msk      (_UINT8_(0x1) << SERCOM_USART_INT_INTFLAG_TXC_Pos)   /* (SERCOM_USART_INT_INTFLAG) Transmit Complete Interrupt Mask */
#define SERCOM_USART_INT_INTFLAG_TXC(value)   (SERCOM_USART_INT_INTFLAG_TXC_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTFLAG_TXC_Pos)) /* Assignment of value for TXC in the SERCOM_USART_INT_INTFLAG register */
#define SERCOM_USART_INT_INTFLAG_RXC_Pos      _UINT8_(2)                                           /* (SERCOM_USART_INT_INTFLAG) Receive Complete Interrupt Position */
#define SERCOM_USART_INT_INTFLAG_RXC_Msk      (_UINT8_(0x1) << SERCOM_USART_INT_INTFLAG_RXC_Pos)   /* (SERCOM_USART_INT_INTFLAG) Receive Complete Interrupt Mask */
#define SERCOM_USART_INT_INTFLAG_RXC(value)   (SERCOM_USART_INT_INTFLAG_RXC_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTFLAG_RXC_Pos)) /* Assignment of value for RXC in the SERCOM_USART_INT_INTFLAG register */
#define SERCOM_USART_INT_INTFLAG_RXS_Pos      _UINT8_(3)                                           /* (SERCOM_USART_INT_INTFLAG) Receive Start Interrupt Position */
#define SERCOM_USART_INT_INTFLAG_RXS_Msk      (_UINT8_(0x1) << SERCOM_USART_INT_INTFLAG_RXS_Pos)   /* (SERCOM_USART_INT_INTFLAG) Receive Start Interrupt Mask */
#define SERCOM_USART_INT_INTFLAG_RXS(value)   (SERCOM_USART_INT_INTFLAG_RXS_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTFLAG_RXS_Pos)) /* Assignment of value for RXS in the SERCOM_USART_INT_INTFLAG register */
#define SERCOM_USART_INT_INTFLAG_CTSIC_Pos    _UINT8_(4)                                           /* (SERCOM_USART_INT_INTFLAG) Clear To Send Input Change Interrupt Position */
#define SERCOM_USART_INT_INTFLAG_CTSIC_Msk    (_UINT8_(0x1) << SERCOM_USART_INT_INTFLAG_CTSIC_Pos) /* (SERCOM_USART_INT_INTFLAG) Clear To Send Input Change Interrupt Mask */
#define SERCOM_USART_INT_INTFLAG_CTSIC(value) (SERCOM_USART_INT_INTFLAG_CTSIC_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTFLAG_CTSIC_Pos)) /* Assignment of value for CTSIC in the SERCOM_USART_INT_INTFLAG register */
#define SERCOM_USART_INT_INTFLAG_RXBRK_Pos    _UINT8_(5)                                           /* (SERCOM_USART_INT_INTFLAG) Break Received Interrupt Position */
#define SERCOM_USART_INT_INTFLAG_RXBRK_Msk    (_UINT8_(0x1) << SERCOM_USART_INT_INTFLAG_RXBRK_Pos) /* (SERCOM_USART_INT_INTFLAG) Break Received Interrupt Mask */
#define SERCOM_USART_INT_INTFLAG_RXBRK(value) (SERCOM_USART_INT_INTFLAG_RXBRK_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTFLAG_RXBRK_Pos)) /* Assignment of value for RXBRK in the SERCOM_USART_INT_INTFLAG register */
#define SERCOM_USART_INT_INTFLAG_ERROR_Pos    _UINT8_(7)                                           /* (SERCOM_USART_INT_INTFLAG) Combined Error Interrupt Position */
#define SERCOM_USART_INT_INTFLAG_ERROR_Msk    (_UINT8_(0x1) << SERCOM_USART_INT_INTFLAG_ERROR_Pos) /* (SERCOM_USART_INT_INTFLAG) Combined Error Interrupt Mask */
#define SERCOM_USART_INT_INTFLAG_ERROR(value) (SERCOM_USART_INT_INTFLAG_ERROR_Msk & (_UINT8_(value) << SERCOM_USART_INT_INTFLAG_ERROR_Pos)) /* Assignment of value for ERROR in the SERCOM_USART_INT_INTFLAG register */
#define SERCOM_USART_INT_INTFLAG_Msk          _UINT8_(0xBF)                                        /* (SERCOM_USART_INT_INTFLAG) Register Mask  */


/* -------- SERCOM_I2CM_STATUS : (SERCOM Offset: 0x1A) (R/W 16) I2CM Status -------- */
#define SERCOM_I2CM_STATUS_RESETVALUE         _UINT16_(0x00)                                       /*  (SERCOM_I2CM_STATUS) I2CM Status  Reset Value */

#define SERCOM_I2CM_STATUS_BUSERR_Pos         _UINT16_(0)                                          /* (SERCOM_I2CM_STATUS) Bus Error Position */
#define SERCOM_I2CM_STATUS_BUSERR_Msk         (_UINT16_(0x1) << SERCOM_I2CM_STATUS_BUSERR_Pos)     /* (SERCOM_I2CM_STATUS) Bus Error Mask */
#define SERCOM_I2CM_STATUS_BUSERR(value)      (SERCOM_I2CM_STATUS_BUSERR_Msk & (_UINT16_(value) << SERCOM_I2CM_STATUS_BUSERR_Pos)) /* Assignment of value for BUSERR in the SERCOM_I2CM_STATUS register */
#define SERCOM_I2CM_STATUS_ARBLOST_Pos        _UINT16_(1)                                          /* (SERCOM_I2CM_STATUS) Arbitration Lost Position */
#define SERCOM_I2CM_STATUS_ARBLOST_Msk        (_UINT16_(0x1) << SERCOM_I2CM_STATUS_ARBLOST_Pos)    /* (SERCOM_I2CM_STATUS) Arbitration Lost Mask */
#define SERCOM_I2CM_STATUS_ARBLOST(value)     (SERCOM_I2CM_STATUS_ARBLOST_Msk & (_UINT16_(value) << SERCOM_I2CM_STATUS_ARBLOST_Pos)) /* Assignment of value for ARBLOST in the SERCOM_I2CM_STATUS register */
#define SERCOM_I2CM_STATUS_RXNACK_Pos         _UINT16_(2)                                          /* (SERCOM_I2CM_STATUS) Received Not Acknowledge Position */
#define SERCOM_I2CM_STATUS_RXNACK_Msk         (_UINT16_(0x1) << SERCOM_I2CM_STATUS_RXNACK_Pos)     /* (SERCOM_I2CM_STATUS) Received Not Acknowledge Mask */
#define SERCOM_I2CM_STATUS_RXNACK(value)      (SERCOM_I2CM_STATUS_RXNACK_Msk & (_UINT16_(value) << SERCOM_I2CM_STATUS_RXNACK_Pos)) /* Assignment of value for RXNACK in the SERCOM_I2CM_STATUS register */
#define SERCOM_I2CM_STATUS_BUSSTATE_Pos       _UINT16_(4)                                          /* (SERCOM_I2CM_STATUS) Bus State Position */
#define SERCOM_I2CM_STATUS_BUSSTATE_Msk       (_UINT16_(0x3) << SERCOM_I2CM_STATUS_BUSSTATE_Pos)   /* (SERCOM_I2CM_STATUS) Bus State Mask */
#define SERCOM_I2CM_STATUS_BUSSTATE(value)    (SERCOM_I2CM_STATUS_BUSSTATE_Msk & (_UINT16_(value) << SERCOM_I2CM_STATUS_BUSSTATE_Pos)) /* Assignment of value for BUSSTATE in the SERCOM_I2CM_STATUS register */
#define SERCOM_I2CM_STATUS_LOWTOUT_Pos        _UINT16_(6)                                          /* (SERCOM_I2CM_STATUS) SCL Low Timeout Position */
#define SERCOM_I2CM_STATUS_LOWTOUT_Msk        (_UINT16_(0x1) << SERCOM_I2CM_STATUS_LOWTOUT_Pos)    /* (SERCOM_I2CM_STATUS) SCL Low Timeout Mask */
#define SERCOM_I2CM_STATUS_LOWTOUT(value)     (SERCOM_I2CM_STATUS_LOWTOUT_Msk & (_UINT16_(value) << SERCOM_I2CM_STATUS_LOWTOUT_Pos)) /* Assignment of value for LOWTOUT in the SERCOM_I2CM_STATUS register */
#define SERCOM_I2CM_STATUS_CLKHOLD_Pos        _UINT16_(7)                                          /* (SERCOM_I2CM_STATUS) Clock Hold Position */
#define SERCOM_I2CM_STATUS_CLKHOLD_Msk        (_UINT16_(0x1) << SERCOM_I2CM_STATUS_CLKHOLD_Pos)    /* (SERCOM_I2CM_STATUS) Clock Hold Mask */
#define SERCOM_I2CM_STATUS_CLKHOLD(value)     (SERCOM_I2CM_STATUS_CLKHOLD_Msk & (_UINT16_(value) << SERCOM_I2CM_STATUS_CLKHOLD_Pos)) /* Assignment of value for CLKHOLD in the SERCOM_I2CM_STATUS register */
#define SERCOM_I2CM_STATUS_MEXTTOUT_Pos       _UINT16_(8)                                          /* (SERCOM_I2CM_STATUS) Master SCL Low Extend Timeout Position */
#define SERCOM_I2CM_STATUS_MEXTTOUT_Msk       (_UINT16_(0x1) << SERCOM_I2CM_STATUS_MEXTTOUT_Pos)   /* (SERCOM_I2CM_STATUS) Master SCL Low Extend Timeout Mask */
#define SERCOM_I2CM_STATUS_MEXTTOUT(value)    (SERCOM_I2CM_STATUS_MEXTTOUT_Msk & (_UINT16_(value) << SERCOM_I2CM_STATUS_MEXTTOUT_Pos)) /* Assignment of value for MEXTTOUT in the SERCOM_I2CM_STATUS register */
#define SERCOM_I2CM_STATUS_SEXTTOUT_Pos       _UINT16_(9)                                          /* (SERCOM_I2CM_STATUS) Slave SCL Low Extend Timeout Position */
#define SERCOM_I2CM_STATUS_SEXTTOUT_Msk       (_UINT16_(0x1) << SERCOM_I2CM_STATUS_SEXTTOUT_Pos)   /* (SERCOM_I2CM_STATUS) Slave SCL Low Extend Timeout Mask */
#define SERCOM_I2CM_STATUS_SEXTTOUT(value)    (SERCOM_I2CM_STATUS_SEXTTOUT_Msk & (_UINT16_(value) << SERCOM_I2CM_STATUS_SEXTTOUT_Pos)) /* Assignment of value for SEXTTOUT in the SERCOM_I2CM_STATUS register */
#define SERCOM_I2CM_STATUS_LENERR_Pos         _UINT16_(10)                                         /* (SERCOM_I2CM_STATUS) Length Error Position */
#define SERCOM_I2CM_STATUS_LENERR_Msk         (_UINT16_(0x1) << SERCOM_I2CM_STATUS_LENERR_Pos)     /* (SERCOM_I2CM_STATUS) Length Error Mask */
#define SERCOM_I2CM_STATUS_LENERR(value)      (SERCOM_I2CM_STATUS_LENERR_Msk & (_UINT16_(value) << SERCOM_I2CM_STATUS_LENERR_Pos)) /* Assignment of value for LENERR in the SERCOM_I2CM_STATUS register */
#define SERCOM_I2CM_STATUS_Msk                _UINT16_(0x07F7)                                     /* (SERCOM_I2CM_STATUS) Register Mask  */


/* -------- SERCOM_I2CS_STATUS : (SERCOM Offset: 0x1A) (R/W 16) I2CS Status -------- */
#define SERCOM_I2CS_STATUS_RESETVALUE         _UINT16_(0x00)                                       /*  (SERCOM_I2CS_STATUS) I2CS Status  Reset Value */

#define SERCOM_I2CS_STATUS_BUSERR_Pos         _UINT16_(0)                                          /* (SERCOM_I2CS_STATUS) Bus Error Position */
#define SERCOM_I2CS_STATUS_BUSERR_Msk         (_UINT16_(0x1) << SERCOM_I2CS_STATUS_BUSERR_Pos)     /* (SERCOM_I2CS_STATUS) Bus Error Mask */
#define SERCOM_I2CS_STATUS_BUSERR(value)      (SERCOM_I2CS_STATUS_BUSERR_Msk & (_UINT16_(value) << SERCOM_I2CS_STATUS_BUSERR_Pos)) /* Assignment of value for BUSERR in the SERCOM_I2CS_STATUS register */
#define SERCOM_I2CS_STATUS_COLL_Pos           _UINT16_(1)                                          /* (SERCOM_I2CS_STATUS) Transmit Collision Position */
#define SERCOM_I2CS_STATUS_COLL_Msk           (_UINT16_(0x1) << SERCOM_I2CS_STATUS_COLL_Pos)       /* (SERCOM_I2CS_STATUS) Transmit Collision Mask */
#define SERCOM_I2CS_STATUS_COLL(value)        (SERCOM_I2CS_STATUS_COLL_Msk & (_UINT16_(value) << SERCOM_I2CS_STATUS_COLL_Pos)) /* Assignment of value for COLL in the SERCOM_I2CS_STATUS register */
#define SERCOM_I2CS_STATUS_RXNACK_Pos         _UINT16_(2)                                          /* (SERCOM_I2CS_STATUS) Received Not Acknowledge Position */
#define SERCOM_I2CS_STATUS_RXNACK_Msk         (_UINT16_(0x1) << SERCOM_I2CS_STATUS_RXNACK_Pos)     /* (SERCOM_I2CS_STATUS) Received Not Acknowledge Mask */
#define SERCOM_I2CS_STATUS_RXNACK(value)      (SERCOM_I2CS_STATUS_RXNACK_Msk & (_UINT16_(value) << SERCOM_I2CS_STATUS_RXNACK_Pos)) /* Assignment of value for RXNACK in the SERCOM_I2CS_STATUS register */
#define SERCOM_I2CS_STATUS_DIR_Pos            _UINT16_(3)                                          /* (SERCOM_I2CS_STATUS) Read/Write Direction Position */
#define SERCOM_I2CS_STATUS_DIR_Msk            (_UINT16_(0x1) << SERCOM_I2CS_STATUS_DIR_Pos)        /* (SERCOM_I2CS_STATUS) Read/Write Direction Mask */
#define SERCOM_I2CS_STATUS_DIR(value)         (SERCOM_I2CS_STATUS_DIR_Msk & (_UINT16_(value) << SERCOM_I2CS_STATUS_DIR_Pos)) /* Assignment of value for DIR in the SERCOM_I2CS_STATUS register */
#define SERCOM_I2CS_STATUS_SR_Pos             _UINT16_(4)                                          /* (SERCOM_I2CS_STATUS) Repeated Start Position */
#define SERCOM_I2CS_STATUS_SR_Msk             (_UINT16_(0x1) << SERCOM_I2CS_STATUS_SR_Pos)         /* (SERCOM_I2CS_STATUS) Repeated Start Mask */
#define SERCOM_I2CS_STATUS_SR(value)          (SERCOM_I2CS_STATUS_SR_Msk & (_UINT16_(value) << SERCOM_I2CS_STATUS_SR_Pos)) /* Assignment of value for SR in the SERCOM_I2CS_STATUS register */
#define SERCOM_I2CS_STATUS_LOWTOUT_Pos        _UINT16_(6)                                          /* (SERCOM_I2CS_STATUS) SCL Low Timeout Position */
#define SERCOM_I2CS_STATUS_LOWTOUT_Msk        (_UINT16_(0x1) << SERCOM_I2CS_STATUS_LOWTOUT_Pos)    /* (SERCOM_I2CS_STATUS) SCL Low Timeout Mask */
#define SERCOM_I2CS_STATUS_LOWTOUT(value)     (SERCOM_I2CS_STATUS_LOWTOUT_Msk & (_UINT16_(value) << SERCOM_I2CS_STATUS_LOWTOUT_Pos)) /* Assignment of value for LOWTOUT in the SERCOM_I2CS_STATUS register */
#define SERCOM_I2CS_STATUS_CLKHOLD_Pos        _UINT16_(7)                                          /* (SERCOM_I2CS_STATUS) Clock Hold Position */
#define SERCOM_I2CS_STATUS_CLKHOLD_Msk        (_UINT16_(0x1) << SERCOM_I2CS_STATUS_CLKHOLD_Pos)    /* (SERCOM_I2CS_STATUS) Clock Hold Mask */
#define SERCOM_I2CS_STATUS_CLKHOLD(value)     (SERCOM_I2CS_STATUS_CLKHOLD_Msk & (_UINT16_(value) << SERCOM_I2CS_STATUS_CLKHOLD_Pos)) /* Assignment of value for CLKHOLD in the SERCOM_I2CS_STATUS register */
#define SERCOM_I2CS_STATUS_SEXTTOUT_Pos       _UINT16_(9)                                          /* (SERCOM_I2CS_STATUS) Slave SCL Low Extend Timeout Position */
#define SERCOM_I2CS_STATUS_SEXTTOUT_Msk       (_UINT16_(0x1) << SERCOM_I2CS_STATUS_SEXTTOUT_Pos)   /* (SERCOM_I2CS_STATUS) Slave SCL Low Extend Timeout Mask */
#define SERCOM_I2CS_STATUS_SEXTTOUT(value)    (SERCOM_I2CS_STATUS_SEXTTOUT_Msk & (_UINT16_(value) << SERCOM_I2CS_STATUS_SEXTTOUT_Pos)) /* Assignment of value for SEXTTOUT in the SERCOM_I2CS_STATUS register */
#define SERCOM_I2CS_STATUS_HS_Pos             _UINT16_(10)                                         /* (SERCOM_I2CS_STATUS) High Speed Position */
#define SERCOM_I2CS_STATUS_HS_Msk             (_UINT16_(0x1) << SERCOM_I2CS_STATUS_HS_Pos)         /* (SERCOM_I2CS_STATUS) High Speed Mask */
#define SERCOM_I2CS_STATUS_HS(value)          (SERCOM_I2CS_STATUS_HS_Msk & (_UINT16_(value) << SERCOM_I2CS_STATUS_HS_Pos)) /* Assignment of value for HS in the SERCOM_I2CS_STATUS register */
#define SERCOM_I2CS_STATUS_LENERR_Pos         _UINT16_(11)                                         /* (SERCOM_I2CS_STATUS) Transaction Length Error Position */
#define SERCOM_I2CS_STATUS_LENERR_Msk         (_UINT16_(0x1) << SERCOM_I2CS_STATUS_LENERR_Pos)     /* (SERCOM_I2CS_STATUS) Transaction Length Error Mask */
#define SERCOM_I2CS_STATUS_LENERR(value)      (SERCOM_I2CS_STATUS_LENERR_Msk & (_UINT16_(value) << SERCOM_I2CS_STATUS_LENERR_Pos)) /* Assignment of value for LENERR in the SERCOM_I2CS_STATUS register */
#define SERCOM_I2CS_STATUS_Msk                _UINT16_(0x0EDF)                                     /* (SERCOM_I2CS_STATUS) Register Mask  */


/* -------- SERCOM_SPIM_STATUS : (SERCOM Offset: 0x1A) (R/W 16) SPIM Status -------- */
#define SERCOM_SPIM_STATUS_RESETVALUE         _UINT16_(0x00)                                       /*  (SERCOM_SPIM_STATUS) SPIM Status  Reset Value */

#define SERCOM_SPIM_STATUS_BUFOVF_Pos         _UINT16_(2)                                          /* (SERCOM_SPIM_STATUS) Buffer Overflow Position */
#define SERCOM_SPIM_STATUS_BUFOVF_Msk         (_UINT16_(0x1) << SERCOM_SPIM_STATUS_BUFOVF_Pos)     /* (SERCOM_SPIM_STATUS) Buffer Overflow Mask */
#define SERCOM_SPIM_STATUS_BUFOVF(value)      (SERCOM_SPIM_STATUS_BUFOVF_Msk & (_UINT16_(value) << SERCOM_SPIM_STATUS_BUFOVF_Pos)) /* Assignment of value for BUFOVF in the SERCOM_SPIM_STATUS register */
#define SERCOM_SPIM_STATUS_TUR_Pos            _UINT16_(3)                                          /* (SERCOM_SPIM_STATUS) Frame Transmit Underrun Position */
#define SERCOM_SPIM_STATUS_TUR_Msk            (_UINT16_(0x1) << SERCOM_SPIM_STATUS_TUR_Pos)        /* (SERCOM_SPIM_STATUS) Frame Transmit Underrun Mask */
#define SERCOM_SPIM_STATUS_TUR(value)         (SERCOM_SPIM_STATUS_TUR_Msk & (_UINT16_(value) << SERCOM_SPIM_STATUS_TUR_Pos)) /* Assignment of value for TUR in the SERCOM_SPIM_STATUS register */
#define SERCOM_SPIM_STATUS_LENERR_Pos         _UINT16_(11)                                         /* (SERCOM_SPIM_STATUS) Transaction Length Error Position */
#define SERCOM_SPIM_STATUS_LENERR_Msk         (_UINT16_(0x1) << SERCOM_SPIM_STATUS_LENERR_Pos)     /* (SERCOM_SPIM_STATUS) Transaction Length Error Mask */
#define SERCOM_SPIM_STATUS_LENERR(value)      (SERCOM_SPIM_STATUS_LENERR_Msk & (_UINT16_(value) << SERCOM_SPIM_STATUS_LENERR_Pos)) /* Assignment of value for LENERR in the SERCOM_SPIM_STATUS register */
#define SERCOM_SPIM_STATUS_Msk                _UINT16_(0x080C)                                     /* (SERCOM_SPIM_STATUS) Register Mask  */


/* -------- SERCOM_SPIS_STATUS : (SERCOM Offset: 0x1A) (R/W 16) SPIS Status -------- */
#define SERCOM_SPIS_STATUS_RESETVALUE         _UINT16_(0x00)                                       /*  (SERCOM_SPIS_STATUS) SPIS Status  Reset Value */

#define SERCOM_SPIS_STATUS_BUFOVF_Pos         _UINT16_(2)                                          /* (SERCOM_SPIS_STATUS) Buffer Overflow Position */
#define SERCOM_SPIS_STATUS_BUFOVF_Msk         (_UINT16_(0x1) << SERCOM_SPIS_STATUS_BUFOVF_Pos)     /* (SERCOM_SPIS_STATUS) Buffer Overflow Mask */
#define SERCOM_SPIS_STATUS_BUFOVF(value)      (SERCOM_SPIS_STATUS_BUFOVF_Msk & (_UINT16_(value) << SERCOM_SPIS_STATUS_BUFOVF_Pos)) /* Assignment of value for BUFOVF in the SERCOM_SPIS_STATUS register */
#define SERCOM_SPIS_STATUS_TUR_Pos            _UINT16_(3)                                          /* (SERCOM_SPIS_STATUS) Frame Transmit Underrun Position */
#define SERCOM_SPIS_STATUS_TUR_Msk            (_UINT16_(0x1) << SERCOM_SPIS_STATUS_TUR_Pos)        /* (SERCOM_SPIS_STATUS) Frame Transmit Underrun Mask */
#define SERCOM_SPIS_STATUS_TUR(value)         (SERCOM_SPIS_STATUS_TUR_Msk & (_UINT16_(value) << SERCOM_SPIS_STATUS_TUR_Pos)) /* Assignment of value for TUR in the SERCOM_SPIS_STATUS register */
#define SERCOM_SPIS_STATUS_LENERR_Pos         _UINT16_(11)                                         /* (SERCOM_SPIS_STATUS) Transaction Length Error Position */
#define SERCOM_SPIS_STATUS_LENERR_Msk         (_UINT16_(0x1) << SERCOM_SPIS_STATUS_LENERR_Pos)     /* (SERCOM_SPIS_STATUS) Transaction Length Error Mask */
#define SERCOM_SPIS_STATUS_LENERR(value)      (SERCOM_SPIS_STATUS_LENERR_Msk & (_UINT16_(value) << SERCOM_SPIS_STATUS_LENERR_Pos)) /* Assignment of value for LENERR in the SERCOM_SPIS_STATUS register */
#define SERCOM_SPIS_STATUS_Msk                _UINT16_(0x080C)                                     /* (SERCOM_SPIS_STATUS) Register Mask  */


/* -------- SERCOM_USART_INT_STATUS : (SERCOM Offset: 0x1A) (R/W 16) USART Status -------- */
#define SERCOM_USART_INT_STATUS_RESETVALUE    _UINT16_(0x00)                                       /*  (SERCOM_USART_INT_STATUS) USART Status  Reset Value */

#define SERCOM_USART_INT_STATUS_PERR_Pos      _UINT16_(0)                                          /* (SERCOM_USART_INT_STATUS) Parity Error Position */
#define SERCOM_USART_INT_STATUS_PERR_Msk      (_UINT16_(0x1) << SERCOM_USART_INT_STATUS_PERR_Pos)  /* (SERCOM_USART_INT_STATUS) Parity Error Mask */
#define SERCOM_USART_INT_STATUS_PERR(value)   (SERCOM_USART_INT_STATUS_PERR_Msk & (_UINT16_(value) << SERCOM_USART_INT_STATUS_PERR_Pos)) /* Assignment of value for PERR in the SERCOM_USART_INT_STATUS register */
#define SERCOM_USART_INT_STATUS_FERR_Pos      _UINT16_(1)                                          /* (SERCOM_USART_INT_STATUS) Frame Error Position */
#define SERCOM_USART_INT_STATUS_FERR_Msk      (_UINT16_(0x1) << SERCOM_USART_INT_STATUS_FERR_Pos)  /* (SERCOM_USART_INT_STATUS) Frame Error Mask */
#define SERCOM_USART_INT_STATUS_FERR(value)   (SERCOM_USART_INT_STATUS_FERR_Msk & (_UINT16_(value) << SERCOM_USART_INT_STATUS_FERR_Pos)) /* Assignment of value for FERR in the SERCOM_USART_INT_STATUS register */
#define SERCOM_USART_INT_STATUS_BUFOVF_Pos    _UINT16_(2)                                          /* (SERCOM_USART_INT_STATUS) Buffer Overflow Position */
#define SERCOM_USART_INT_STATUS_BUFOVF_Msk    (_UINT16_(0x1) << SERCOM_USART_INT_STATUS_BUFOVF_Pos) /* (SERCOM_USART_INT_STATUS) Buffer Overflow Mask */
#define SERCOM_USART_INT_STATUS_BUFOVF(value) (SERCOM_USART_INT_STATUS_BUFOVF_Msk & (_UINT16_(value) << SERCOM_USART_INT_STATUS_BUFOVF_Pos)) /* Assignment of value for BUFOVF in the SERCOM_USART_INT_STATUS register */
#define SERCOM_USART_INT_STATUS_CTS_Pos       _UINT16_(3)                                          /* (SERCOM_USART_INT_STATUS) Clear To Send Position */
#define SERCOM_USART_INT_STATUS_CTS_Msk       (_UINT16_(0x1) << SERCOM_USART_INT_STATUS_CTS_Pos)   /* (SERCOM_USART_INT_STATUS) Clear To Send Mask */
#define SERCOM_USART_INT_STATUS_CTS(value)    (SERCOM_USART_INT_STATUS_CTS_Msk & (_UINT16_(value) << SERCOM_USART_INT_STATUS_CTS_Pos)) /* Assignment of value for CTS in the SERCOM_USART_INT_STATUS register */
#define SERCOM_USART_INT_STATUS_ISF_Pos       _UINT16_(4)                                          /* (SERCOM_USART_INT_STATUS) Inconsistent Sync Field Position */
#define SERCOM_USART_INT_STATUS_ISF_Msk       (_UINT16_(0x1) << SERCOM_USART_INT_STATUS_ISF_Pos)   /* (SERCOM_USART_INT_STATUS) Inconsistent Sync Field Mask */
#define SERCOM_USART_INT_STATUS_ISF(value)    (SERCOM_USART_INT_STATUS_ISF_Msk & (_UINT16_(value) << SERCOM_USART_INT_STATUS_ISF_Pos)) /* Assignment of value for ISF in the SERCOM_USART_INT_STATUS register */
#define SERCOM_USART_INT_STATUS_COLL_Pos      _UINT16_(5)                                          /* (SERCOM_USART_INT_STATUS) Collision Detected Position */
#define SERCOM_USART_INT_STATUS_COLL_Msk      (_UINT16_(0x1) << SERCOM_USART_INT_STATUS_COLL_Pos)  /* (SERCOM_USART_INT_STATUS) Collision Detected Mask */
#define SERCOM_USART_INT_STATUS_COLL(value)   (SERCOM_USART_INT_STATUS_COLL_Msk & (_UINT16_(value) << SERCOM_USART_INT_STATUS_COLL_Pos)) /* Assignment of value for COLL in the SERCOM_USART_INT_STATUS register */
#define SERCOM_USART_INT_STATUS_TXE_Pos       _UINT16_(6)                                          /* (SERCOM_USART_INT_STATUS) Transmitter Empty Position */
#define SERCOM_USART_INT_STATUS_TXE_Msk       (_UINT16_(0x1) << SERCOM_USART_INT_STATUS_TXE_Pos)   /* (SERCOM_USART_INT_STATUS) Transmitter Empty Mask */
#define SERCOM_USART_INT_STATUS_TXE(value)    (SERCOM_USART_INT_STATUS_TXE_Msk & (_UINT16_(value) << SERCOM_USART_INT_STATUS_TXE_Pos)) /* Assignment of value for TXE in the SERCOM_USART_INT_STATUS register */
#define SERCOM_USART_INT_STATUS_ITER_Pos      _UINT16_(7)                                          /* (SERCOM_USART_INT_STATUS) Maximum Number of Repetitions Reached Position */
#define SERCOM_USART_INT_STATUS_ITER_Msk      (_UINT16_(0x1) << SERCOM_USART_INT_STATUS_ITER_Pos)  /* (SERCOM_USART_INT_STATUS) Maximum Number of Repetitions Reached Mask */
#define SERCOM_USART_INT_STATUS_ITER(value)   (SERCOM_USART_INT_STATUS_ITER_Msk & (_UINT16_(value) << SERCOM_USART_INT_STATUS_ITER_Pos)) /* Assignment of value for ITER in the SERCOM_USART_INT_STATUS register */
#define SERCOM_USART_INT_STATUS_Msk           _UINT16_(0x00FF)                                     /* (SERCOM_USART_INT_STATUS) Register Mask  */


/* -------- SERCOM_I2CM_SYNCBUSY : (SERCOM Offset: 0x1C) ( R/ 32) I2CM Synchronization Busy -------- */
#define SERCOM_I2CM_SYNCBUSY_RESETVALUE       _UINT32_(0x00)                                       /*  (SERCOM_I2CM_SYNCBUSY) I2CM Synchronization Busy  Reset Value */

#define SERCOM_I2CM_SYNCBUSY_SWRST_Pos        _UINT32_(0)                                          /* (SERCOM_I2CM_SYNCBUSY) Software Reset Synchronization Busy Position */
#define SERCOM_I2CM_SYNCBUSY_SWRST_Msk        (_UINT32_(0x1) << SERCOM_I2CM_SYNCBUSY_SWRST_Pos)    /* (SERCOM_I2CM_SYNCBUSY) Software Reset Synchronization Busy Mask */
#define SERCOM_I2CM_SYNCBUSY_SWRST(value)     (SERCOM_I2CM_SYNCBUSY_SWRST_Msk & (_UINT32_(value) << SERCOM_I2CM_SYNCBUSY_SWRST_Pos)) /* Assignment of value for SWRST in the SERCOM_I2CM_SYNCBUSY register */
#define SERCOM_I2CM_SYNCBUSY_ENABLE_Pos       _UINT32_(1)                                          /* (SERCOM_I2CM_SYNCBUSY) SERCOM Enable Synchronization Busy Position */
#define SERCOM_I2CM_SYNCBUSY_ENABLE_Msk       (_UINT32_(0x1) << SERCOM_I2CM_SYNCBUSY_ENABLE_Pos)   /* (SERCOM_I2CM_SYNCBUSY) SERCOM Enable Synchronization Busy Mask */
#define SERCOM_I2CM_SYNCBUSY_ENABLE(value)    (SERCOM_I2CM_SYNCBUSY_ENABLE_Msk & (_UINT32_(value) << SERCOM_I2CM_SYNCBUSY_ENABLE_Pos)) /* Assignment of value for ENABLE in the SERCOM_I2CM_SYNCBUSY register */
#define SERCOM_I2CM_SYNCBUSY_SYSOP_Pos        _UINT32_(2)                                          /* (SERCOM_I2CM_SYNCBUSY) System Operation Synchronization Busy Position */
#define SERCOM_I2CM_SYNCBUSY_SYSOP_Msk        (_UINT32_(0x1) << SERCOM_I2CM_SYNCBUSY_SYSOP_Pos)    /* (SERCOM_I2CM_SYNCBUSY) System Operation Synchronization Busy Mask */
#define SERCOM_I2CM_SYNCBUSY_SYSOP(value)     (SERCOM_I2CM_SYNCBUSY_SYSOP_Msk & (_UINT32_(value) << SERCOM_I2CM_SYNCBUSY_SYSOP_Pos)) /* Assignment of value for SYSOP in the SERCOM_I2CM_SYNCBUSY register */
#define SERCOM_I2CM_SYNCBUSY_LENGTH_Pos       _UINT32_(4)                                          /* (SERCOM_I2CM_SYNCBUSY) Length Synchronization Busy Position */
#define SERCOM_I2CM_SYNCBUSY_LENGTH_Msk       (_UINT32_(0x1) << SERCOM_I2CM_SYNCBUSY_LENGTH_Pos)   /* (SERCOM_I2CM_SYNCBUSY) Length Synchronization Busy Mask */
#define SERCOM_I2CM_SYNCBUSY_LENGTH(value)    (SERCOM_I2CM_SYNCBUSY_LENGTH_Msk & (_UINT32_(value) << SERCOM_I2CM_SYNCBUSY_LENGTH_Pos)) /* Assignment of value for LENGTH in the SERCOM_I2CM_SYNCBUSY register */
#define SERCOM_I2CM_SYNCBUSY_Msk              _UINT32_(0x00000017)                                 /* (SERCOM_I2CM_SYNCBUSY) Register Mask  */


/* -------- SERCOM_I2CS_SYNCBUSY : (SERCOM Offset: 0x1C) ( R/ 32) I2CS Synchronization Busy -------- */
#define SERCOM_I2CS_SYNCBUSY_RESETVALUE       _UINT32_(0x00)                                       /*  (SERCOM_I2CS_SYNCBUSY) I2CS Synchronization Busy  Reset Value */

#define SERCOM_I2CS_SYNCBUSY_SWRST_Pos        _UINT32_(0)                                          /* (SERCOM_I2CS_SYNCBUSY) Software Reset Synchronization Busy Position */
#define SERCOM_I2CS_SYNCBUSY_SWRST_Msk        (_UINT32_(0x1) << SERCOM_I2CS_SYNCBUSY_SWRST_Pos)    /* (SERCOM_I2CS_SYNCBUSY) Software Reset Synchronization Busy Mask */
#define SERCOM_I2CS_SYNCBUSY_SWRST(value)     (SERCOM_I2CS_SYNCBUSY_SWRST_Msk & (_UINT32_(value) << SERCOM_I2CS_SYNCBUSY_SWRST_Pos)) /* Assignment of value for SWRST in the SERCOM_I2CS_SYNCBUSY register */
#define SERCOM_I2CS_SYNCBUSY_ENABLE_Pos       _UINT32_(1)                                          /* (SERCOM_I2CS_SYNCBUSY) SERCOM Enable Synchronization Busy Position */
#define SERCOM_I2CS_SYNCBUSY_ENABLE_Msk       (_UINT32_(0x1) << SERCOM_I2CS_SYNCBUSY_ENABLE_Pos)   /* (SERCOM_I2CS_SYNCBUSY) SERCOM Enable Synchronization Busy Mask */
#define SERCOM_I2CS_SYNCBUSY_ENABLE(value)    (SERCOM_I2CS_SYNCBUSY_ENABLE_Msk & (_UINT32_(value) << SERCOM_I2CS_SYNCBUSY_ENABLE_Pos)) /* Assignment of value for ENABLE in the SERCOM_I2CS_SYNCBUSY register */
#define SERCOM_I2CS_SYNCBUSY_SYSOP_Pos        _UINT32_(2)                                          /* (SERCOM_I2CS_SYNCBUSY) System Operation Synchronization Busy Position */
#define SERCOM_I2CS_SYNCBUSY_SYSOP_Msk        (_UINT32_(0x1) << SERCOM_I2CS_SYNCBUSY_SYSOP_Pos)    /* (SERCOM_I2CS_SYNCBUSY) System Operation Synchronization Busy Mask */
#define SERCOM_I2CS_SYNCBUSY_SYSOP(value)     (SERCOM_I2CS_SYNCBUSY_SYSOP_Msk & (_UINT32_(value) << SERCOM_I2CS_SYNCBUSY_SYSOP_Pos)) /* Assignment of value for SYSOP in the SERCOM_I2CS_SYNCBUSY register */
#define SERCOM_I2CS_SYNCBUSY_LENGTH_Pos       _UINT32_(4)                                          /* (SERCOM_I2CS_SYNCBUSY) Length Synchronization Busy Position */
#define SERCOM_I2CS_SYNCBUSY_LENGTH_Msk       (_UINT32_(0x1) << SERCOM_I2CS_SYNCBUSY_LENGTH_Pos)   /* (SERCOM_I2CS_SYNCBUSY) Length Synchronization Busy Mask */
#define SERCOM_I2CS_SYNCBUSY_LENGTH(value)    (SERCOM_I2CS_SYNCBUSY_LENGTH_Msk & (_UINT32_(value) << SERCOM_I2CS_SYNCBUSY_LENGTH_Pos)) /* Assignment of value for LENGTH in the SERCOM_I2CS_SYNCBUSY register */
#define SERCOM_I2CS_SYNCBUSY_Msk              _UINT32_(0x00000017)                                 /* (SERCOM_I2CS_SYNCBUSY) Register Mask  */


/* -------- SERCOM_SPIM_SYNCBUSY : (SERCOM Offset: 0x1C) ( R/ 32) SPIM Synchronization Busy -------- */
#define SERCOM_SPIM_SYNCBUSY_RESETVALUE       _UINT32_(0x00)                                       /*  (SERCOM_SPIM_SYNCBUSY) SPIM Synchronization Busy  Reset Value */

#define SERCOM_SPIM_SYNCBUSY_SWRST_Pos        _UINT32_(0)                                          /* (SERCOM_SPIM_SYNCBUSY) Software Reset Synchronization Busy Position */
#define SERCOM_SPIM_SYNCBUSY_SWRST_Msk        (_UINT32_(0x1) << SERCOM_SPIM_SYNCBUSY_SWRST_Pos)    /* (SERCOM_SPIM_SYNCBUSY) Software Reset Synchronization Busy Mask */
#define SERCOM_SPIM_SYNCBUSY_SWRST(value)     (SERCOM_SPIM_SYNCBUSY_SWRST_Msk & (_UINT32_(value) << SERCOM_SPIM_SYNCBUSY_SWRST_Pos)) /* Assignment of value for SWRST in the SERCOM_SPIM_SYNCBUSY register */
#define SERCOM_SPIM_SYNCBUSY_ENABLE_Pos       _UINT32_(1)                                          /* (SERCOM_SPIM_SYNCBUSY) SERCOM Enable Synchronization Busy Position */
#define SERCOM_SPIM_SYNCBUSY_ENABLE_Msk       (_UINT32_(0x1) << SERCOM_SPIM_SYNCBUSY_ENABLE_Pos)   /* (SERCOM_SPIM_SYNCBUSY) SERCOM Enable Synchronization Busy Mask */
#define SERCOM_SPIM_SYNCBUSY_ENABLE(value)    (SERCOM_SPIM_SYNCBUSY_ENABLE_Msk & (_UINT32_(value) << SERCOM_SPIM_SYNCBUSY_ENABLE_Pos)) /* Assignment of value for ENABLE in the SERCOM_SPIM_SYNCBUSY register */
#define SERCOM_SPIM_SYNCBUSY_CTRLB_Pos        _UINT32_(2)                                          /* (SERCOM_SPIM_SYNCBUSY) CTRLB Synchronization Busy Position */
#define SERCOM_SPIM_SYNCBUSY_CTRLB_Msk        (_UINT32_(0x1) << SERCOM_SPIM_SYNCBUSY_CTRLB_Pos)    /* (SERCOM_SPIM_SYNCBUSY) CTRLB Synchronization Busy Mask */
#define SERCOM_SPIM_SYNCBUSY_CTRLB(value)     (SERCOM_SPIM_SYNCBUSY_CTRLB_Msk & (_UINT32_(value) << SERCOM_SPIM_SYNCBUSY_CTRLB_Pos)) /* Assignment of value for CTRLB in the SERCOM_SPIM_SYNCBUSY register */
#define SERCOM_SPIM_SYNCBUSY_LENGTH_Pos       _UINT32_(4)                                          /* (SERCOM_SPIM_SYNCBUSY) LENGTH Synchronization Busy Position */
#define SERCOM_SPIM_SYNCBUSY_LENGTH_Msk       (_UINT32_(0x1) << SERCOM_SPIM_SYNCBUSY_LENGTH_Pos)   /* (SERCOM_SPIM_SYNCBUSY) LENGTH Synchronization Busy Mask */
#define SERCOM_SPIM_SYNCBUSY_LENGTH(value)    (SERCOM_SPIM_SYNCBUSY_LENGTH_Msk & (_UINT32_(value) << SERCOM_SPIM_SYNCBUSY_LENGTH_Pos)) /* Assignment of value for LENGTH in the SERCOM_SPIM_SYNCBUSY register */
#define SERCOM_SPIM_SYNCBUSY_Msk              _UINT32_(0x00000017)                                 /* (SERCOM_SPIM_SYNCBUSY) Register Mask  */


/* -------- SERCOM_SPIS_SYNCBUSY : (SERCOM Offset: 0x1C) ( R/ 32) SPIS Synchronization Busy -------- */
#define SERCOM_SPIS_SYNCBUSY_RESETVALUE       _UINT32_(0x00)                                       /*  (SERCOM_SPIS_SYNCBUSY) SPIS Synchronization Busy  Reset Value */

#define SERCOM_SPIS_SYNCBUSY_SWRST_Pos        _UINT32_(0)                                          /* (SERCOM_SPIS_SYNCBUSY) Software Reset Synchronization Busy Position */
#define SERCOM_SPIS_SYNCBUSY_SWRST_Msk        (_UINT32_(0x1) << SERCOM_SPIS_SYNCBUSY_SWRST_Pos)    /* (SERCOM_SPIS_SYNCBUSY) Software Reset Synchronization Busy Mask */
#define SERCOM_SPIS_SYNCBUSY_SWRST(value)     (SERCOM_SPIS_SYNCBUSY_SWRST_Msk & (_UINT32_(value) << SERCOM_SPIS_SYNCBUSY_SWRST_Pos)) /* Assignment of value for SWRST in the SERCOM_SPIS_SYNCBUSY register */
#define SERCOM_SPIS_SYNCBUSY_ENABLE_Pos       _UINT32_(1)                                          /* (SERCOM_SPIS_SYNCBUSY) SERCOM Enable Synchronization Busy Position */
#define SERCOM_SPIS_SYNCBUSY_ENABLE_Msk       (_UINT32_(0x1) << SERCOM_SPIS_SYNCBUSY_ENABLE_Pos)   /* (SERCOM_SPIS_SYNCBUSY) SERCOM Enable Synchronization Busy Mask */
#define SERCOM_SPIS_SYNCBUSY_ENABLE(value)    (SERCOM_SPIS_SYNCBUSY_ENABLE_Msk & (_UINT32_(value) << SERCOM_SPIS_SYNCBUSY_ENABLE_Pos)) /* Assignment of value for ENABLE in the SERCOM_SPIS_SYNCBUSY register */
#define SERCOM_SPIS_SYNCBUSY_CTRLB_Pos        _UINT32_(2)                                          /* (SERCOM_SPIS_SYNCBUSY) CTRLB Synchronization Busy Position */
#define SERCOM_SPIS_SYNCBUSY_CTRLB_Msk        (_UINT32_(0x1) << SERCOM_SPIS_SYNCBUSY_CTRLB_Pos)    /* (SERCOM_SPIS_SYNCBUSY) CTRLB Synchronization Busy Mask */
#define SERCOM_SPIS_SYNCBUSY_CTRLB(value)     (SERCOM_SPIS_SYNCBUSY_CTRLB_Msk & (_UINT32_(value) << SERCOM_SPIS_SYNCBUSY_CTRLB_Pos)) /* Assignment of value for CTRLB in the SERCOM_SPIS_SYNCBUSY register */
#define SERCOM_SPIS_SYNCBUSY_LENGTH_Pos       _UINT32_(4)                                          /* (SERCOM_SPIS_SYNCBUSY) LENGTH Synchronization Busy Position */
#define SERCOM_SPIS_SYNCBUSY_LENGTH_Msk       (_UINT32_(0x1) << SERCOM_SPIS_SYNCBUSY_LENGTH_Pos)   /* (SERCOM_SPIS_SYNCBUSY) LENGTH Synchronization Busy Mask */
#define SERCOM_SPIS_SYNCBUSY_LENGTH(value)    (SERCOM_SPIS_SYNCBUSY_LENGTH_Msk & (_UINT32_(value) << SERCOM_SPIS_SYNCBUSY_LENGTH_Pos)) /* Assignment of value for LENGTH in the SERCOM_SPIS_SYNCBUSY register */
#define SERCOM_SPIS_SYNCBUSY_Msk              _UINT32_(0x00000017)                                 /* (SERCOM_SPIS_SYNCBUSY) Register Mask  */


/* -------- SERCOM_USART_INT_SYNCBUSY : (SERCOM Offset: 0x1C) ( R/ 32) USART Synchronization Busy -------- */
#define SERCOM_USART_INT_SYNCBUSY_RESETVALUE  _UINT32_(0x00)                                       /*  (SERCOM_USART_INT_SYNCBUSY) USART Synchronization Busy  Reset Value */

#define SERCOM_USART_INT_SYNCBUSY_SWRST_Pos   _UINT32_(0)                                          /* (SERCOM_USART_INT_SYNCBUSY) Software Reset Synchronization Busy Position */
#define SERCOM_USART_INT_SYNCBUSY_SWRST_Msk   (_UINT32_(0x1) << SERCOM_USART_INT_SYNCBUSY_SWRST_Pos) /* (SERCOM_USART_INT_SYNCBUSY) Software Reset Synchronization Busy Mask */
#define SERCOM_USART_INT_SYNCBUSY_SWRST(value) (SERCOM_USART_INT_SYNCBUSY_SWRST_Msk & (_UINT32_(value) << SERCOM_USART_INT_SYNCBUSY_SWRST_Pos)) /* Assignment of value for SWRST in the SERCOM_USART_INT_SYNCBUSY register */
#define SERCOM_USART_INT_SYNCBUSY_ENABLE_Pos  _UINT32_(1)                                          /* (SERCOM_USART_INT_SYNCBUSY) SERCOM Enable Synchronization Busy Position */
#define SERCOM_USART_INT_SYNCBUSY_ENABLE_Msk  (_UINT32_(0x1) << SERCOM_USART_INT_SYNCBUSY_ENABLE_Pos) /* (SERCOM_USART_INT_SYNCBUSY) SERCOM Enable Synchronization Busy Mask */
#define SERCOM_USART_INT_SYNCBUSY_ENABLE(value) (SERCOM_USART_INT_SYNCBUSY_ENABLE_Msk & (_UINT32_(value) << SERCOM_USART_INT_SYNCBUSY_ENABLE_Pos)) /* Assignment of value for ENABLE in the SERCOM_USART_INT_SYNCBUSY register */
#define SERCOM_USART_INT_SYNCBUSY_CTRLB_Pos   _UINT32_(2)                                          /* (SERCOM_USART_INT_SYNCBUSY) CTRLB Synchronization Busy Position */
#define SERCOM_USART_INT_SYNCBUSY_CTRLB_Msk   (_UINT32_(0x1) << SERCOM_USART_INT_SYNCBUSY_CTRLB_Pos) /* (SERCOM_USART_INT_SYNCBUSY) CTRLB Synchronization Busy Mask */
#define SERCOM_USART_INT_SYNCBUSY_CTRLB(value) (SERCOM_USART_INT_SYNCBUSY_CTRLB_Msk & (_UINT32_(value) << SERCOM_USART_INT_SYNCBUSY_CTRLB_Pos)) /* Assignment of value for CTRLB in the SERCOM_USART_INT_SYNCBUSY register */
#define SERCOM_USART_INT_SYNCBUSY_RXERRCNT_Pos _UINT32_(3)                                          /* (SERCOM_USART_INT_SYNCBUSY) RXERRCNT Synchronization Busy Position */
#define SERCOM_USART_INT_SYNCBUSY_RXERRCNT_Msk (_UINT32_(0x1) << SERCOM_USART_INT_SYNCBUSY_RXERRCNT_Pos) /* (SERCOM_USART_INT_SYNCBUSY) RXERRCNT Synchronization Busy Mask */
#define SERCOM_USART_INT_SYNCBUSY_RXERRCNT(value) (SERCOM_USART_INT_SYNCBUSY_RXERRCNT_Msk & (_UINT32_(value) << SERCOM_USART_INT_SYNCBUSY_RXERRCNT_Pos)) /* Assignment of value for RXERRCNT in the SERCOM_USART_INT_SYNCBUSY register */
#define SERCOM_USART_INT_SYNCBUSY_LENGTH_Pos  _UINT32_(4)                                          /* (SERCOM_USART_INT_SYNCBUSY) LENGTH Synchronization Busy Position */
#define SERCOM_USART_INT_SYNCBUSY_LENGTH_Msk  (_UINT32_(0x1) << SERCOM_USART_INT_SYNCBUSY_LENGTH_Pos) /* (SERCOM_USART_INT_SYNCBUSY) LENGTH Synchronization Busy Mask */
#define SERCOM_USART_INT_SYNCBUSY_LENGTH(value) (SERCOM_USART_INT_SYNCBUSY_LENGTH_Msk & (_UINT32_(value) << SERCOM_USART_INT_SYNCBUSY_LENGTH_Pos)) /* Assignment of value for LENGTH in the SERCOM_USART_INT_SYNCBUSY register */
#define SERCOM_USART_INT_SYNCBUSY_Msk         _UINT32_(0x0000001F)                                 /* (SERCOM_USART_INT_SYNCBUSY) Register Mask  */


/* -------- SERCOM_USART_INT_RXERRCNT : (SERCOM Offset: 0x20) ( R/ 8) USART Receive Error Count -------- */
#define SERCOM_USART_INT_RXERRCNT_RESETVALUE  _UINT8_(0x00)                                        /*  (SERCOM_USART_INT_RXERRCNT) USART Receive Error Count  Reset Value */

#define SERCOM_USART_INT_RXERRCNT_Msk         _UINT8_(0x00)                                        /* (SERCOM_USART_INT_RXERRCNT) Register Mask  */


/* -------- SERCOM_I2CS_LENGTH : (SERCOM Offset: 0x22) (R/W 16) I2CS Length -------- */
#define SERCOM_I2CS_LENGTH_RESETVALUE         _UINT16_(0x00)                                       /*  (SERCOM_I2CS_LENGTH) I2CS Length  Reset Value */

#define SERCOM_I2CS_LENGTH_LEN_Pos            _UINT16_(0)                                          /* (SERCOM_I2CS_LENGTH) Data Length Position */
#define SERCOM_I2CS_LENGTH_LEN_Msk            (_UINT16_(0xFF) << SERCOM_I2CS_LENGTH_LEN_Pos)       /* (SERCOM_I2CS_LENGTH) Data Length Mask */
#define SERCOM_I2CS_LENGTH_LEN(value)         (SERCOM_I2CS_LENGTH_LEN_Msk & (_UINT16_(value) << SERCOM_I2CS_LENGTH_LEN_Pos)) /* Assignment of value for LEN in the SERCOM_I2CS_LENGTH register */
#define SERCOM_I2CS_LENGTH_LENEN_Pos          _UINT16_(8)                                          /* (SERCOM_I2CS_LENGTH) Data Length Enable Position */
#define SERCOM_I2CS_LENGTH_LENEN_Msk          (_UINT16_(0x1) << SERCOM_I2CS_LENGTH_LENEN_Pos)      /* (SERCOM_I2CS_LENGTH) Data Length Enable Mask */
#define SERCOM_I2CS_LENGTH_LENEN(value)       (SERCOM_I2CS_LENGTH_LENEN_Msk & (_UINT16_(value) << SERCOM_I2CS_LENGTH_LENEN_Pos)) /* Assignment of value for LENEN in the SERCOM_I2CS_LENGTH register */
#define SERCOM_I2CS_LENGTH_Msk                _UINT16_(0x01FF)                                     /* (SERCOM_I2CS_LENGTH) Register Mask  */


/* -------- SERCOM_SPIM_LENGTH : (SERCOM Offset: 0x22) (R/W 16) SPIM Length -------- */
#define SERCOM_SPIM_LENGTH_RESETVALUE         _UINT16_(0x00)                                       /*  (SERCOM_SPIM_LENGTH) SPIM Length  Reset Value */

#define SERCOM_SPIM_LENGTH_LEN_Pos            _UINT16_(0)                                          /* (SERCOM_SPIM_LENGTH) Data Length Position */
#define SERCOM_SPIM_LENGTH_LEN_Msk            (_UINT16_(0xFF) << SERCOM_SPIM_LENGTH_LEN_Pos)       /* (SERCOM_SPIM_LENGTH) Data Length Mask */
#define SERCOM_SPIM_LENGTH_LEN(value)         (SERCOM_SPIM_LENGTH_LEN_Msk & (_UINT16_(value) << SERCOM_SPIM_LENGTH_LEN_Pos)) /* Assignment of value for LEN in the SERCOM_SPIM_LENGTH register */
#define SERCOM_SPIM_LENGTH_LENEN_Pos          _UINT16_(8)                                          /* (SERCOM_SPIM_LENGTH) Data Length Enable Position */
#define SERCOM_SPIM_LENGTH_LENEN_Msk          (_UINT16_(0x1) << SERCOM_SPIM_LENGTH_LENEN_Pos)      /* (SERCOM_SPIM_LENGTH) Data Length Enable Mask */
#define SERCOM_SPIM_LENGTH_LENEN(value)       (SERCOM_SPIM_LENGTH_LENEN_Msk & (_UINT16_(value) << SERCOM_SPIM_LENGTH_LENEN_Pos)) /* Assignment of value for LENEN in the SERCOM_SPIM_LENGTH register */
#define SERCOM_SPIM_LENGTH_Msk                _UINT16_(0x01FF)                                     /* (SERCOM_SPIM_LENGTH) Register Mask  */


/* -------- SERCOM_SPIS_LENGTH : (SERCOM Offset: 0x22) (R/W 16) SPIS Length -------- */
#define SERCOM_SPIS_LENGTH_RESETVALUE         _UINT16_(0x00)                                       /*  (SERCOM_SPIS_LENGTH) SPIS Length  Reset Value */

#define SERCOM_SPIS_LENGTH_LEN_Pos            _UINT16_(0)                                          /* (SERCOM_SPIS_LENGTH) Data Length Position */
#define SERCOM_SPIS_LENGTH_LEN_Msk            (_UINT16_(0xFF) << SERCOM_SPIS_LENGTH_LEN_Pos)       /* (SERCOM_SPIS_LENGTH) Data Length Mask */
#define SERCOM_SPIS_LENGTH_LEN(value)         (SERCOM_SPIS_LENGTH_LEN_Msk & (_UINT16_(value) << SERCOM_SPIS_LENGTH_LEN_Pos)) /* Assignment of value for LEN in the SERCOM_SPIS_LENGTH register */
#define SERCOM_SPIS_LENGTH_LENEN_Pos          _UINT16_(8)                                          /* (SERCOM_SPIS_LENGTH) Data Length Enable Position */
#define SERCOM_SPIS_LENGTH_LENEN_Msk          (_UINT16_(0x1) << SERCOM_SPIS_LENGTH_LENEN_Pos)      /* (SERCOM_SPIS_LENGTH) Data Length Enable Mask */
#define SERCOM_SPIS_LENGTH_LENEN(value)       (SERCOM_SPIS_LENGTH_LENEN_Msk & (_UINT16_(value) << SERCOM_SPIS_LENGTH_LENEN_Pos)) /* Assignment of value for LENEN in the SERCOM_SPIS_LENGTH register */
#define SERCOM_SPIS_LENGTH_Msk                _UINT16_(0x01FF)                                     /* (SERCOM_SPIS_LENGTH) Register Mask  */


/* -------- SERCOM_USART_INT_LENGTH : (SERCOM Offset: 0x22) (R/W 16) USART Length -------- */
#define SERCOM_USART_INT_LENGTH_RESETVALUE    _UINT16_(0x00)                                       /*  (SERCOM_USART_INT_LENGTH) USART Length  Reset Value */

#define SERCOM_USART_INT_LENGTH_LEN_Pos       _UINT16_(0)                                          /* (SERCOM_USART_INT_LENGTH) Data Length Position */
#define SERCOM_USART_INT_LENGTH_LEN_Msk       (_UINT16_(0xFF) << SERCOM_USART_INT_LENGTH_LEN_Pos)  /* (SERCOM_USART_INT_LENGTH) Data Length Mask */
#define SERCOM_USART_INT_LENGTH_LEN(value)    (SERCOM_USART_INT_LENGTH_LEN_Msk & (_UINT16_(value) << SERCOM_USART_INT_LENGTH_LEN_Pos)) /* Assignment of value for LEN in the SERCOM_USART_INT_LENGTH register */
#define SERCOM_USART_INT_LENGTH_LENEN_Pos     _UINT16_(8)                                          /* (SERCOM_USART_INT_LENGTH) Data Length Enable Position */
#define SERCOM_USART_INT_LENGTH_LENEN_Msk     (_UINT16_(0x3) << SERCOM_USART_INT_LENGTH_LENEN_Pos) /* (SERCOM_USART_INT_LENGTH) Data Length Enable Mask */
#define SERCOM_USART_INT_LENGTH_LENEN(value)  (SERCOM_USART_INT_LENGTH_LENEN_Msk & (_UINT16_(value) << SERCOM_USART_INT_LENGTH_LENEN_Pos)) /* Assignment of value for LENEN in the SERCOM_USART_INT_LENGTH register */
#define   SERCOM_USART_INT_LENGTH_LENEN_DISABLE_Val _UINT16_(0x0)                                        /* (SERCOM_USART_INT_LENGTH) Length counter is disabled  */
#define   SERCOM_USART_INT_LENGTH_LENEN_TX_Val _UINT16_(0x1)                                        /* (SERCOM_USART_INT_LENGTH) Length counter is enabled for transmit  */
#define   SERCOM_USART_INT_LENGTH_LENEN_RX_Val _UINT16_(0x2)                                        /* (SERCOM_USART_INT_LENGTH) Length counter is enabled for receive  */
#define SERCOM_USART_INT_LENGTH_LENEN_DISABLE (SERCOM_USART_INT_LENGTH_LENEN_DISABLE_Val << SERCOM_USART_INT_LENGTH_LENEN_Pos) /* (SERCOM_USART_INT_LENGTH) Length counter is disabled Position */
#define SERCOM_USART_INT_LENGTH_LENEN_TX      (SERCOM_USART_INT_LENGTH_LENEN_TX_Val << SERCOM_USART_INT_LENGTH_LENEN_Pos) /* (SERCOM_USART_INT_LENGTH) Length counter is enabled for transmit Position */
#define SERCOM_USART_INT_LENGTH_LENEN_RX      (SERCOM_USART_INT_LENGTH_LENEN_RX_Val << SERCOM_USART_INT_LENGTH_LENEN_Pos) /* (SERCOM_USART_INT_LENGTH) Length counter is enabled for receive Position */
#define SERCOM_USART_INT_LENGTH_Msk           _UINT16_(0x03FF)                                     /* (SERCOM_USART_INT_LENGTH) Register Mask  */


/* -------- SERCOM_I2CM_ADDR : (SERCOM Offset: 0x24) (R/W 32) I2CM Address -------- */
#define SERCOM_I2CM_ADDR_RESETVALUE           _UINT32_(0x00)                                       /*  (SERCOM_I2CM_ADDR) I2CM Address  Reset Value */

#define SERCOM_I2CM_ADDR_ADDR_Pos             _UINT32_(0)                                          /* (SERCOM_I2CM_ADDR) Address Value Position */
#define SERCOM_I2CM_ADDR_ADDR_Msk             (_UINT32_(0x7FF) << SERCOM_I2CM_ADDR_ADDR_Pos)       /* (SERCOM_I2CM_ADDR) Address Value Mask */
#define SERCOM_I2CM_ADDR_ADDR(value)          (SERCOM_I2CM_ADDR_ADDR_Msk & (_UINT32_(value) << SERCOM_I2CM_ADDR_ADDR_Pos)) /* Assignment of value for ADDR in the SERCOM_I2CM_ADDR register */
#define SERCOM_I2CM_ADDR_LENEN_Pos            _UINT32_(13)                                         /* (SERCOM_I2CM_ADDR) Length Enable Position */
#define SERCOM_I2CM_ADDR_LENEN_Msk            (_UINT32_(0x1) << SERCOM_I2CM_ADDR_LENEN_Pos)        /* (SERCOM_I2CM_ADDR) Length Enable Mask */
#define SERCOM_I2CM_ADDR_LENEN(value)         (SERCOM_I2CM_ADDR_LENEN_Msk & (_UINT32_(value) << SERCOM_I2CM_ADDR_LENEN_Pos)) /* Assignment of value for LENEN in the SERCOM_I2CM_ADDR register */
#define SERCOM_I2CM_ADDR_HS_Pos               _UINT32_(14)                                         /* (SERCOM_I2CM_ADDR) High Speed Mode Position */
#define SERCOM_I2CM_ADDR_HS_Msk               (_UINT32_(0x1) << SERCOM_I2CM_ADDR_HS_Pos)           /* (SERCOM_I2CM_ADDR) High Speed Mode Mask */
#define SERCOM_I2CM_ADDR_HS(value)            (SERCOM_I2CM_ADDR_HS_Msk & (_UINT32_(value) << SERCOM_I2CM_ADDR_HS_Pos)) /* Assignment of value for HS in the SERCOM_I2CM_ADDR register */
#define SERCOM_I2CM_ADDR_TENBITEN_Pos         _UINT32_(15)                                         /* (SERCOM_I2CM_ADDR) Ten Bit Addressing Enable Position */
#define SERCOM_I2CM_ADDR_TENBITEN_Msk         (_UINT32_(0x1) << SERCOM_I2CM_ADDR_TENBITEN_Pos)     /* (SERCOM_I2CM_ADDR) Ten Bit Addressing Enable Mask */
#define SERCOM_I2CM_ADDR_TENBITEN(value)      (SERCOM_I2CM_ADDR_TENBITEN_Msk & (_UINT32_(value) << SERCOM_I2CM_ADDR_TENBITEN_Pos)) /* Assignment of value for TENBITEN in the SERCOM_I2CM_ADDR register */
#define SERCOM_I2CM_ADDR_LEN_Pos              _UINT32_(16)                                         /* (SERCOM_I2CM_ADDR) Length Position */
#define SERCOM_I2CM_ADDR_LEN_Msk              (_UINT32_(0xFF) << SERCOM_I2CM_ADDR_LEN_Pos)         /* (SERCOM_I2CM_ADDR) Length Mask */
#define SERCOM_I2CM_ADDR_LEN(value)           (SERCOM_I2CM_ADDR_LEN_Msk & (_UINT32_(value) << SERCOM_I2CM_ADDR_LEN_Pos)) /* Assignment of value for LEN in the SERCOM_I2CM_ADDR register */
#define SERCOM_I2CM_ADDR_Msk                  _UINT32_(0x00FFE7FF)                                 /* (SERCOM_I2CM_ADDR) Register Mask  */


/* -------- SERCOM_I2CS_ADDR : (SERCOM Offset: 0x24) (R/W 32) I2CS Address -------- */
#define SERCOM_I2CS_ADDR_RESETVALUE           _UINT32_(0x00)                                       /*  (SERCOM_I2CS_ADDR) I2CS Address  Reset Value */

#define SERCOM_I2CS_ADDR_GENCEN_Pos           _UINT32_(0)                                          /* (SERCOM_I2CS_ADDR) General Call Address Enable Position */
#define SERCOM_I2CS_ADDR_GENCEN_Msk           (_UINT32_(0x1) << SERCOM_I2CS_ADDR_GENCEN_Pos)       /* (SERCOM_I2CS_ADDR) General Call Address Enable Mask */
#define SERCOM_I2CS_ADDR_GENCEN(value)        (SERCOM_I2CS_ADDR_GENCEN_Msk & (_UINT32_(value) << SERCOM_I2CS_ADDR_GENCEN_Pos)) /* Assignment of value for GENCEN in the SERCOM_I2CS_ADDR register */
#define SERCOM_I2CS_ADDR_ADDR_Pos             _UINT32_(1)                                          /* (SERCOM_I2CS_ADDR) Address Value Position */
#define SERCOM_I2CS_ADDR_ADDR_Msk             (_UINT32_(0x3FF) << SERCOM_I2CS_ADDR_ADDR_Pos)       /* (SERCOM_I2CS_ADDR) Address Value Mask */
#define SERCOM_I2CS_ADDR_ADDR(value)          (SERCOM_I2CS_ADDR_ADDR_Msk & (_UINT32_(value) << SERCOM_I2CS_ADDR_ADDR_Pos)) /* Assignment of value for ADDR in the SERCOM_I2CS_ADDR register */
#define SERCOM_I2CS_ADDR_TENBITEN_Pos         _UINT32_(15)                                         /* (SERCOM_I2CS_ADDR) Ten Bit Addressing Enable Position */
#define SERCOM_I2CS_ADDR_TENBITEN_Msk         (_UINT32_(0x1) << SERCOM_I2CS_ADDR_TENBITEN_Pos)     /* (SERCOM_I2CS_ADDR) Ten Bit Addressing Enable Mask */
#define SERCOM_I2CS_ADDR_TENBITEN(value)      (SERCOM_I2CS_ADDR_TENBITEN_Msk & (_UINT32_(value) << SERCOM_I2CS_ADDR_TENBITEN_Pos)) /* Assignment of value for TENBITEN in the SERCOM_I2CS_ADDR register */
#define SERCOM_I2CS_ADDR_ADDRMASK_Pos         _UINT32_(17)                                         /* (SERCOM_I2CS_ADDR) Address Mask Position */
#define SERCOM_I2CS_ADDR_ADDRMASK_Msk         (_UINT32_(0x3FF) << SERCOM_I2CS_ADDR_ADDRMASK_Pos)   /* (SERCOM_I2CS_ADDR) Address Mask Mask */
#define SERCOM_I2CS_ADDR_ADDRMASK(value)      (SERCOM_I2CS_ADDR_ADDRMASK_Msk & (_UINT32_(value) << SERCOM_I2CS_ADDR_ADDRMASK_Pos)) /* Assignment of value for ADDRMASK in the SERCOM_I2CS_ADDR register */
#define SERCOM_I2CS_ADDR_Msk                  _UINT32_(0x07FE87FF)                                 /* (SERCOM_I2CS_ADDR) Register Mask  */


/* -------- SERCOM_SPIM_ADDR : (SERCOM Offset: 0x24) (R/W 32) SPIM Address -------- */
#define SERCOM_SPIM_ADDR_RESETVALUE           _UINT32_(0x00)                                       /*  (SERCOM_SPIM_ADDR) SPIM Address  Reset Value */

#define SERCOM_SPIM_ADDR_ADDR_Pos             _UINT32_(0)                                          /* (SERCOM_SPIM_ADDR) Address Value Position */
#define SERCOM_SPIM_ADDR_ADDR_Msk             (_UINT32_(0xFF) << SERCOM_SPIM_ADDR_ADDR_Pos)        /* (SERCOM_SPIM_ADDR) Address Value Mask */
#define SERCOM_SPIM_ADDR_ADDR(value)          (SERCOM_SPIM_ADDR_ADDR_Msk & (_UINT32_(value) << SERCOM_SPIM_ADDR_ADDR_Pos)) /* Assignment of value for ADDR in the SERCOM_SPIM_ADDR register */
#define SERCOM_SPIM_ADDR_ADDRMASK_Pos         _UINT32_(16)                                         /* (SERCOM_SPIM_ADDR) Address Mask Position */
#define SERCOM_SPIM_ADDR_ADDRMASK_Msk         (_UINT32_(0xFF) << SERCOM_SPIM_ADDR_ADDRMASK_Pos)    /* (SERCOM_SPIM_ADDR) Address Mask Mask */
#define SERCOM_SPIM_ADDR_ADDRMASK(value)      (SERCOM_SPIM_ADDR_ADDRMASK_Msk & (_UINT32_(value) << SERCOM_SPIM_ADDR_ADDRMASK_Pos)) /* Assignment of value for ADDRMASK in the SERCOM_SPIM_ADDR register */
#define SERCOM_SPIM_ADDR_Msk                  _UINT32_(0x00FF00FF)                                 /* (SERCOM_SPIM_ADDR) Register Mask  */


/* -------- SERCOM_SPIS_ADDR : (SERCOM Offset: 0x24) (R/W 32) SPIS Address -------- */
#define SERCOM_SPIS_ADDR_RESETVALUE           _UINT32_(0x00)                                       /*  (SERCOM_SPIS_ADDR) SPIS Address  Reset Value */

#define SERCOM_SPIS_ADDR_ADDR_Pos             _UINT32_(0)                                          /* (SERCOM_SPIS_ADDR) Address Value Position */
#define SERCOM_SPIS_ADDR_ADDR_Msk             (_UINT32_(0xFF) << SERCOM_SPIS_ADDR_ADDR_Pos)        /* (SERCOM_SPIS_ADDR) Address Value Mask */
#define SERCOM_SPIS_ADDR_ADDR(value)          (SERCOM_SPIS_ADDR_ADDR_Msk & (_UINT32_(value) << SERCOM_SPIS_ADDR_ADDR_Pos)) /* Assignment of value for ADDR in the SERCOM_SPIS_ADDR register */
#define SERCOM_SPIS_ADDR_ADDRMASK_Pos         _UINT32_(16)                                         /* (SERCOM_SPIS_ADDR) Address Mask Position */
#define SERCOM_SPIS_ADDR_ADDRMASK_Msk         (_UINT32_(0xFF) << SERCOM_SPIS_ADDR_ADDRMASK_Pos)    /* (SERCOM_SPIS_ADDR) Address Mask Mask */
#define SERCOM_SPIS_ADDR_ADDRMASK(value)      (SERCOM_SPIS_ADDR_ADDRMASK_Msk & (_UINT32_(value) << SERCOM_SPIS_ADDR_ADDRMASK_Pos)) /* Assignment of value for ADDRMASK in the SERCOM_SPIS_ADDR register */
#define SERCOM_SPIS_ADDR_Msk                  _UINT32_(0x00FF00FF)                                 /* (SERCOM_SPIS_ADDR) Register Mask  */


/* -------- SERCOM_I2CM_DATA : (SERCOM Offset: 0x28) (R/W 32) I2CM Data -------- */
#define SERCOM_I2CM_DATA_RESETVALUE           _UINT32_(0x00)                                       /*  (SERCOM_I2CM_DATA) I2CM Data  Reset Value */

#define SERCOM_I2CM_DATA_DATA_Pos             _UINT32_(0)                                          /* (SERCOM_I2CM_DATA) Data Value Position */
#define SERCOM_I2CM_DATA_DATA_Msk             (_UINT32_(0xFFFFFFFF) << SERCOM_I2CM_DATA_DATA_Pos)  /* (SERCOM_I2CM_DATA) Data Value Mask */
#define SERCOM_I2CM_DATA_DATA(value)          (SERCOM_I2CM_DATA_DATA_Msk & (_UINT32_(value) << SERCOM_I2CM_DATA_DATA_Pos)) /* Assignment of value for DATA in the SERCOM_I2CM_DATA register */
#define SERCOM_I2CM_DATA_Msk                  _UINT32_(0xFFFFFFFF)                                 /* (SERCOM_I2CM_DATA) Register Mask  */


/* -------- SERCOM_I2CS_DATA : (SERCOM Offset: 0x28) (R/W 32) I2CS Data -------- */
#define SERCOM_I2CS_DATA_RESETVALUE           _UINT32_(0x00)                                       /*  (SERCOM_I2CS_DATA) I2CS Data  Reset Value */

#define SERCOM_I2CS_DATA_DATA_Pos             _UINT32_(0)                                          /* (SERCOM_I2CS_DATA) Data Value Position */
#define SERCOM_I2CS_DATA_DATA_Msk             (_UINT32_(0xFFFFFFFF) << SERCOM_I2CS_DATA_DATA_Pos)  /* (SERCOM_I2CS_DATA) Data Value Mask */
#define SERCOM_I2CS_DATA_DATA(value)          (SERCOM_I2CS_DATA_DATA_Msk & (_UINT32_(value) << SERCOM_I2CS_DATA_DATA_Pos)) /* Assignment of value for DATA in the SERCOM_I2CS_DATA register */
#define SERCOM_I2CS_DATA_Msk                  _UINT32_(0xFFFFFFFF)                                 /* (SERCOM_I2CS_DATA) Register Mask  */


/* -------- SERCOM_SPIM_DATA : (SERCOM Offset: 0x28) (R/W 32) SPIM Data -------- */
#define SERCOM_SPIM_DATA_RESETVALUE           _UINT32_(0x00)                                       /*  (SERCOM_SPIM_DATA) SPIM Data  Reset Value */

#define SERCOM_SPIM_DATA_DATA_Pos             _UINT32_(0)                                          /* (SERCOM_SPIM_DATA) Data Value Position */
#define SERCOM_SPIM_DATA_DATA_Msk             (_UINT32_(0xFFFFFFFF) << SERCOM_SPIM_DATA_DATA_Pos)  /* (SERCOM_SPIM_DATA) Data Value Mask */
#define SERCOM_SPIM_DATA_DATA(value)          (SERCOM_SPIM_DATA_DATA_Msk & (_UINT32_(value) << SERCOM_SPIM_DATA_DATA_Pos)) /* Assignment of value for DATA in the SERCOM_SPIM_DATA register */
#define SERCOM_SPIM_DATA_Msk                  _UINT32_(0xFFFFFFFF)                                 /* (SERCOM_SPIM_DATA) Register Mask  */


/* -------- SERCOM_SPIS_DATA : (SERCOM Offset: 0x28) (R/W 32) SPIS Data -------- */
#define SERCOM_SPIS_DATA_RESETVALUE           _UINT32_(0x00)                                       /*  (SERCOM_SPIS_DATA) SPIS Data  Reset Value */

#define SERCOM_SPIS_DATA_DATA_Pos             _UINT32_(0)                                          /* (SERCOM_SPIS_DATA) Data Value Position */
#define SERCOM_SPIS_DATA_DATA_Msk             (_UINT32_(0xFFFFFFFF) << SERCOM_SPIS_DATA_DATA_Pos)  /* (SERCOM_SPIS_DATA) Data Value Mask */
#define SERCOM_SPIS_DATA_DATA(value)          (SERCOM_SPIS_DATA_DATA_Msk & (_UINT32_(value) << SERCOM_SPIS_DATA_DATA_Pos)) /* Assignment of value for DATA in the SERCOM_SPIS_DATA register */
#define SERCOM_SPIS_DATA_Msk                  _UINT32_(0xFFFFFFFF)                                 /* (SERCOM_SPIS_DATA) Register Mask  */


/* -------- SERCOM_USART_INT_DATA : (SERCOM Offset: 0x28) (R/W 32) USART Data -------- */
#define SERCOM_USART_INT_DATA_RESETVALUE      _UINT32_(0x00)                                       /*  (SERCOM_USART_INT_DATA) USART Data  Reset Value */

#define SERCOM_USART_INT_DATA_DATA_Pos        _UINT32_(0)                                          /* (SERCOM_USART_INT_DATA) Data Value Position */
#define SERCOM_USART_INT_DATA_DATA_Msk        (_UINT32_(0xFFFFFFFF) << SERCOM_USART_INT_DATA_DATA_Pos) /* (SERCOM_USART_INT_DATA) Data Value Mask */
#define SERCOM_USART_INT_DATA_DATA(value)     (SERCOM_USART_INT_DATA_DATA_Msk & (_UINT32_(value) << SERCOM_USART_INT_DATA_DATA_Pos)) /* Assignment of value for DATA in the SERCOM_USART_INT_DATA register */
#define SERCOM_USART_INT_DATA_Msk             _UINT32_(0xFFFFFFFF)                                 /* (SERCOM_USART_INT_DATA) Register Mask  */


/* -------- SERCOM_I2CM_DBGCTRL : (SERCOM Offset: 0x30) (R/W 8) I2CM Debug Control -------- */
#define SERCOM_I2CM_DBGCTRL_RESETVALUE        _UINT8_(0x00)                                        /*  (SERCOM_I2CM_DBGCTRL) I2CM Debug Control  Reset Value */

#define SERCOM_I2CM_DBGCTRL_DBGSTOP_Pos       _UINT8_(0)                                           /* (SERCOM_I2CM_DBGCTRL) Debug Mode Position */
#define SERCOM_I2CM_DBGCTRL_DBGSTOP_Msk       (_UINT8_(0x1) << SERCOM_I2CM_DBGCTRL_DBGSTOP_Pos)    /* (SERCOM_I2CM_DBGCTRL) Debug Mode Mask */
#define SERCOM_I2CM_DBGCTRL_DBGSTOP(value)    (SERCOM_I2CM_DBGCTRL_DBGSTOP_Msk & (_UINT8_(value) << SERCOM_I2CM_DBGCTRL_DBGSTOP_Pos)) /* Assignment of value for DBGSTOP in the SERCOM_I2CM_DBGCTRL register */
#define SERCOM_I2CM_DBGCTRL_Msk               _UINT8_(0x01)                                        /* (SERCOM_I2CM_DBGCTRL) Register Mask  */


/* -------- SERCOM_SPIM_DBGCTRL : (SERCOM Offset: 0x30) (R/W 8) SPIM Debug Control -------- */
#define SERCOM_SPIM_DBGCTRL_RESETVALUE        _UINT8_(0x00)                                        /*  (SERCOM_SPIM_DBGCTRL) SPIM Debug Control  Reset Value */

#define SERCOM_SPIM_DBGCTRL_DBGSTOP_Pos       _UINT8_(0)                                           /* (SERCOM_SPIM_DBGCTRL) Debug Mode Position */
#define SERCOM_SPIM_DBGCTRL_DBGSTOP_Msk       (_UINT8_(0x1) << SERCOM_SPIM_DBGCTRL_DBGSTOP_Pos)    /* (SERCOM_SPIM_DBGCTRL) Debug Mode Mask */
#define SERCOM_SPIM_DBGCTRL_DBGSTOP(value)    (SERCOM_SPIM_DBGCTRL_DBGSTOP_Msk & (_UINT8_(value) << SERCOM_SPIM_DBGCTRL_DBGSTOP_Pos)) /* Assignment of value for DBGSTOP in the SERCOM_SPIM_DBGCTRL register */
#define SERCOM_SPIM_DBGCTRL_Msk               _UINT8_(0x01)                                        /* (SERCOM_SPIM_DBGCTRL) Register Mask  */


/* -------- SERCOM_SPIS_DBGCTRL : (SERCOM Offset: 0x30) (R/W 8) SPIS Debug Control -------- */
#define SERCOM_SPIS_DBGCTRL_RESETVALUE        _UINT8_(0x00)                                        /*  (SERCOM_SPIS_DBGCTRL) SPIS Debug Control  Reset Value */

#define SERCOM_SPIS_DBGCTRL_DBGSTOP_Pos       _UINT8_(0)                                           /* (SERCOM_SPIS_DBGCTRL) Debug Mode Position */
#define SERCOM_SPIS_DBGCTRL_DBGSTOP_Msk       (_UINT8_(0x1) << SERCOM_SPIS_DBGCTRL_DBGSTOP_Pos)    /* (SERCOM_SPIS_DBGCTRL) Debug Mode Mask */
#define SERCOM_SPIS_DBGCTRL_DBGSTOP(value)    (SERCOM_SPIS_DBGCTRL_DBGSTOP_Msk & (_UINT8_(value) << SERCOM_SPIS_DBGCTRL_DBGSTOP_Pos)) /* Assignment of value for DBGSTOP in the SERCOM_SPIS_DBGCTRL register */
#define SERCOM_SPIS_DBGCTRL_Msk               _UINT8_(0x01)                                        /* (SERCOM_SPIS_DBGCTRL) Register Mask  */


/* -------- SERCOM_USART_INT_DBGCTRL : (SERCOM Offset: 0x30) (R/W 8) USART Debug Control -------- */
#define SERCOM_USART_INT_DBGCTRL_RESETVALUE   _UINT8_(0x00)                                        /*  (SERCOM_USART_INT_DBGCTRL) USART Debug Control  Reset Value */

#define SERCOM_USART_INT_DBGCTRL_DBGSTOP_Pos  _UINT8_(0)                                           /* (SERCOM_USART_INT_DBGCTRL) Debug Mode Position */
#define SERCOM_USART_INT_DBGCTRL_DBGSTOP_Msk  (_UINT8_(0x1) << SERCOM_USART_INT_DBGCTRL_DBGSTOP_Pos) /* (SERCOM_USART_INT_DBGCTRL) Debug Mode Mask */
#define SERCOM_USART_INT_DBGCTRL_DBGSTOP(value) (SERCOM_USART_INT_DBGCTRL_DBGSTOP_Msk & (_UINT8_(value) << SERCOM_USART_INT_DBGCTRL_DBGSTOP_Pos)) /* Assignment of value for DBGSTOP in the SERCOM_USART_INT_DBGCTRL register */
#define SERCOM_USART_INT_DBGCTRL_Msk          _UINT8_(0x01)                                        /* (SERCOM_USART_INT_DBGCTRL) Register Mask  */


/* -------- SERCOM_I2CM_FIFOSPACE : (SERCOM Offset: 0x34) ( R/ 16) I2CM FIFO Space -------- */
#define SERCOM_I2CM_FIFOSPACE_RESETVALUE      _UINT16_(0x00)                                       /*  (SERCOM_I2CM_FIFOSPACE) I2CM FIFO Space  Reset Value */

#define SERCOM_I2CM_FIFOSPACE_TXSPACE_Pos     _UINT16_(0)                                          /* (SERCOM_I2CM_FIFOSPACE) Tx FIFO Empty Space Position */
#define SERCOM_I2CM_FIFOSPACE_TXSPACE_Msk     (_UINT16_(0x1F) << SERCOM_I2CM_FIFOSPACE_TXSPACE_Pos) /* (SERCOM_I2CM_FIFOSPACE) Tx FIFO Empty Space Mask */
#define SERCOM_I2CM_FIFOSPACE_TXSPACE(value)  (SERCOM_I2CM_FIFOSPACE_TXSPACE_Msk & (_UINT16_(value) << SERCOM_I2CM_FIFOSPACE_TXSPACE_Pos)) /* Assignment of value for TXSPACE in the SERCOM_I2CM_FIFOSPACE register */
#define SERCOM_I2CM_FIFOSPACE_RXSPACE_Pos     _UINT16_(8)                                          /* (SERCOM_I2CM_FIFOSPACE) Rx FIFO Filled Space Position */
#define SERCOM_I2CM_FIFOSPACE_RXSPACE_Msk     (_UINT16_(0x1F) << SERCOM_I2CM_FIFOSPACE_RXSPACE_Pos) /* (SERCOM_I2CM_FIFOSPACE) Rx FIFO Filled Space Mask */
#define SERCOM_I2CM_FIFOSPACE_RXSPACE(value)  (SERCOM_I2CM_FIFOSPACE_RXSPACE_Msk & (_UINT16_(value) << SERCOM_I2CM_FIFOSPACE_RXSPACE_Pos)) /* Assignment of value for RXSPACE in the SERCOM_I2CM_FIFOSPACE register */
#define SERCOM_I2CM_FIFOSPACE_Msk             _UINT16_(0x1F1F)                                     /* (SERCOM_I2CM_FIFOSPACE) Register Mask  */


/* -------- SERCOM_I2CS_FIFOSPACE : (SERCOM Offset: 0x34) ( R/ 16) I2CS FIFO Space -------- */
#define SERCOM_I2CS_FIFOSPACE_RESETVALUE      _UINT16_(0x00)                                       /*  (SERCOM_I2CS_FIFOSPACE) I2CS FIFO Space  Reset Value */

#define SERCOM_I2CS_FIFOSPACE_TXSPACE_Pos     _UINT16_(0)                                          /* (SERCOM_I2CS_FIFOSPACE) Tx FIFO Empty Space Position */
#define SERCOM_I2CS_FIFOSPACE_TXSPACE_Msk     (_UINT16_(0x1F) << SERCOM_I2CS_FIFOSPACE_TXSPACE_Pos) /* (SERCOM_I2CS_FIFOSPACE) Tx FIFO Empty Space Mask */
#define SERCOM_I2CS_FIFOSPACE_TXSPACE(value)  (SERCOM_I2CS_FIFOSPACE_TXSPACE_Msk & (_UINT16_(value) << SERCOM_I2CS_FIFOSPACE_TXSPACE_Pos)) /* Assignment of value for TXSPACE in the SERCOM_I2CS_FIFOSPACE register */
#define SERCOM_I2CS_FIFOSPACE_RXSPACE_Pos     _UINT16_(8)                                          /* (SERCOM_I2CS_FIFOSPACE) Rx FIFO Filled Space Position */
#define SERCOM_I2CS_FIFOSPACE_RXSPACE_Msk     (_UINT16_(0x1F) << SERCOM_I2CS_FIFOSPACE_RXSPACE_Pos) /* (SERCOM_I2CS_FIFOSPACE) Rx FIFO Filled Space Mask */
#define SERCOM_I2CS_FIFOSPACE_RXSPACE(value)  (SERCOM_I2CS_FIFOSPACE_RXSPACE_Msk & (_UINT16_(value) << SERCOM_I2CS_FIFOSPACE_RXSPACE_Pos)) /* Assignment of value for RXSPACE in the SERCOM_I2CS_FIFOSPACE register */
#define SERCOM_I2CS_FIFOSPACE_Msk             _UINT16_(0x1F1F)                                     /* (SERCOM_I2CS_FIFOSPACE) Register Mask  */


/* -------- SERCOM_SPIM_FIFOSPACE : (SERCOM Offset: 0x34) ( R/ 16) SPIM FIFO Space -------- */
#define SERCOM_SPIM_FIFOSPACE_RESETVALUE      _UINT16_(0x00)                                       /*  (SERCOM_SPIM_FIFOSPACE) SPIM FIFO Space  Reset Value */

#define SERCOM_SPIM_FIFOSPACE_TXSPACE_Pos     _UINT16_(0)                                          /* (SERCOM_SPIM_FIFOSPACE) Tx FIFO Empty Space Position */
#define SERCOM_SPIM_FIFOSPACE_TXSPACE_Msk     (_UINT16_(0x1F) << SERCOM_SPIM_FIFOSPACE_TXSPACE_Pos) /* (SERCOM_SPIM_FIFOSPACE) Tx FIFO Empty Space Mask */
#define SERCOM_SPIM_FIFOSPACE_TXSPACE(value)  (SERCOM_SPIM_FIFOSPACE_TXSPACE_Msk & (_UINT16_(value) << SERCOM_SPIM_FIFOSPACE_TXSPACE_Pos)) /* Assignment of value for TXSPACE in the SERCOM_SPIM_FIFOSPACE register */
#define SERCOM_SPIM_FIFOSPACE_RXSPACE_Pos     _UINT16_(8)                                          /* (SERCOM_SPIM_FIFOSPACE) Rx FIFO Filled Space Position */
#define SERCOM_SPIM_FIFOSPACE_RXSPACE_Msk     (_UINT16_(0x1F) << SERCOM_SPIM_FIFOSPACE_RXSPACE_Pos) /* (SERCOM_SPIM_FIFOSPACE) Rx FIFO Filled Space Mask */
#define SERCOM_SPIM_FIFOSPACE_RXSPACE(value)  (SERCOM_SPIM_FIFOSPACE_RXSPACE_Msk & (_UINT16_(value) << SERCOM_SPIM_FIFOSPACE_RXSPACE_Pos)) /* Assignment of value for RXSPACE in the SERCOM_SPIM_FIFOSPACE register */
#define SERCOM_SPIM_FIFOSPACE_Msk             _UINT16_(0x1F1F)                                     /* (SERCOM_SPIM_FIFOSPACE) Register Mask  */


/* -------- SERCOM_SPIS_FIFOSPACE : (SERCOM Offset: 0x34) ( R/ 16) SPIS FIFO Space -------- */
#define SERCOM_SPIS_FIFOSPACE_RESETVALUE      _UINT16_(0x00)                                       /*  (SERCOM_SPIS_FIFOSPACE) SPIS FIFO Space  Reset Value */

#define SERCOM_SPIS_FIFOSPACE_TXSPACE_Pos     _UINT16_(0)                                          /* (SERCOM_SPIS_FIFOSPACE) Tx FIFO Empty Space Position */
#define SERCOM_SPIS_FIFOSPACE_TXSPACE_Msk     (_UINT16_(0x1F) << SERCOM_SPIS_FIFOSPACE_TXSPACE_Pos) /* (SERCOM_SPIS_FIFOSPACE) Tx FIFO Empty Space Mask */
#define SERCOM_SPIS_FIFOSPACE_TXSPACE(value)  (SERCOM_SPIS_FIFOSPACE_TXSPACE_Msk & (_UINT16_(value) << SERCOM_SPIS_FIFOSPACE_TXSPACE_Pos)) /* Assignment of value for TXSPACE in the SERCOM_SPIS_FIFOSPACE register */
#define SERCOM_SPIS_FIFOSPACE_RXSPACE_Pos     _UINT16_(8)                                          /* (SERCOM_SPIS_FIFOSPACE) Rx FIFO Filled Space Position */
#define SERCOM_SPIS_FIFOSPACE_RXSPACE_Msk     (_UINT16_(0x1F) << SERCOM_SPIS_FIFOSPACE_RXSPACE_Pos) /* (SERCOM_SPIS_FIFOSPACE) Rx FIFO Filled Space Mask */
#define SERCOM_SPIS_FIFOSPACE_RXSPACE(value)  (SERCOM_SPIS_FIFOSPACE_RXSPACE_Msk & (_UINT16_(value) << SERCOM_SPIS_FIFOSPACE_RXSPACE_Pos)) /* Assignment of value for RXSPACE in the SERCOM_SPIS_FIFOSPACE register */
#define SERCOM_SPIS_FIFOSPACE_Msk             _UINT16_(0x1F1F)                                     /* (SERCOM_SPIS_FIFOSPACE) Register Mask  */


/* -------- SERCOM_USART_INT_FIFOSPACE : (SERCOM Offset: 0x34) ( R/ 16) USART FIFO Space -------- */
#define SERCOM_USART_INT_FIFOSPACE_RESETVALUE _UINT16_(0x00)                                       /*  (SERCOM_USART_INT_FIFOSPACE) USART FIFO Space  Reset Value */

#define SERCOM_USART_INT_FIFOSPACE_TXSPACE_Pos _UINT16_(0)                                          /* (SERCOM_USART_INT_FIFOSPACE) Tx FIFO Empty Space Position */
#define SERCOM_USART_INT_FIFOSPACE_TXSPACE_Msk (_UINT16_(0x1F) << SERCOM_USART_INT_FIFOSPACE_TXSPACE_Pos) /* (SERCOM_USART_INT_FIFOSPACE) Tx FIFO Empty Space Mask */
#define SERCOM_USART_INT_FIFOSPACE_TXSPACE(value) (SERCOM_USART_INT_FIFOSPACE_TXSPACE_Msk & (_UINT16_(value) << SERCOM_USART_INT_FIFOSPACE_TXSPACE_Pos)) /* Assignment of value for TXSPACE in the SERCOM_USART_INT_FIFOSPACE register */
#define SERCOM_USART_INT_FIFOSPACE_RXSPACE_Pos _UINT16_(8)                                          /* (SERCOM_USART_INT_FIFOSPACE) Rx FIFO Filled Space Position */
#define SERCOM_USART_INT_FIFOSPACE_RXSPACE_Msk (_UINT16_(0x1F) << SERCOM_USART_INT_FIFOSPACE_RXSPACE_Pos) /* (SERCOM_USART_INT_FIFOSPACE) Rx FIFO Filled Space Mask */
#define SERCOM_USART_INT_FIFOSPACE_RXSPACE(value) (SERCOM_USART_INT_FIFOSPACE_RXSPACE_Msk & (_UINT16_(value) << SERCOM_USART_INT_FIFOSPACE_RXSPACE_Pos)) /* Assignment of value for RXSPACE in the SERCOM_USART_INT_FIFOSPACE register */
#define SERCOM_USART_INT_FIFOSPACE_Msk        _UINT16_(0x1F1F)                                     /* (SERCOM_USART_INT_FIFOSPACE) Register Mask  */


/* -------- SERCOM_I2CM_FIFOPTR : (SERCOM Offset: 0x36) (R/W 16) I2CM FIFO CPU Pointers -------- */
#define SERCOM_I2CM_FIFOPTR_RESETVALUE        _UINT16_(0x00)                                       /*  (SERCOM_I2CM_FIFOPTR) I2CM FIFO CPU Pointers  Reset Value */

#define SERCOM_I2CM_FIFOPTR_CPUWRPTR_Pos      _UINT16_(0)                                          /* (SERCOM_I2CM_FIFOPTR) CPU FIFO Write Pointer Position */
#define SERCOM_I2CM_FIFOPTR_CPUWRPTR_Msk      (_UINT16_(0xF) << SERCOM_I2CM_FIFOPTR_CPUWRPTR_Pos)  /* (SERCOM_I2CM_FIFOPTR) CPU FIFO Write Pointer Mask */
#define SERCOM_I2CM_FIFOPTR_CPUWRPTR(value)   (SERCOM_I2CM_FIFOPTR_CPUWRPTR_Msk & (_UINT16_(value) << SERCOM_I2CM_FIFOPTR_CPUWRPTR_Pos)) /* Assignment of value for CPUWRPTR in the SERCOM_I2CM_FIFOPTR register */
#define SERCOM_I2CM_FIFOPTR_CPURDPTR_Pos      _UINT16_(8)                                          /* (SERCOM_I2CM_FIFOPTR) CPU FIFO Read Pointer Position */
#define SERCOM_I2CM_FIFOPTR_CPURDPTR_Msk      (_UINT16_(0xF) << SERCOM_I2CM_FIFOPTR_CPURDPTR_Pos)  /* (SERCOM_I2CM_FIFOPTR) CPU FIFO Read Pointer Mask */
#define SERCOM_I2CM_FIFOPTR_CPURDPTR(value)   (SERCOM_I2CM_FIFOPTR_CPURDPTR_Msk & (_UINT16_(value) << SERCOM_I2CM_FIFOPTR_CPURDPTR_Pos)) /* Assignment of value for CPURDPTR in the SERCOM_I2CM_FIFOPTR register */
#define SERCOM_I2CM_FIFOPTR_Msk               _UINT16_(0x0F0F)                                     /* (SERCOM_I2CM_FIFOPTR) Register Mask  */


/* -------- SERCOM_I2CS_FIFOPTR : (SERCOM Offset: 0x36) (R/W 16) I2CS FIFO CPU Pointers -------- */
#define SERCOM_I2CS_FIFOPTR_RESETVALUE        _UINT16_(0x00)                                       /*  (SERCOM_I2CS_FIFOPTR) I2CS FIFO CPU Pointers  Reset Value */

#define SERCOM_I2CS_FIFOPTR_CPUWRPTR_Pos      _UINT16_(0)                                          /* (SERCOM_I2CS_FIFOPTR) CPU FIFO Write Pointer Position */
#define SERCOM_I2CS_FIFOPTR_CPUWRPTR_Msk      (_UINT16_(0xF) << SERCOM_I2CS_FIFOPTR_CPUWRPTR_Pos)  /* (SERCOM_I2CS_FIFOPTR) CPU FIFO Write Pointer Mask */
#define SERCOM_I2CS_FIFOPTR_CPUWRPTR(value)   (SERCOM_I2CS_FIFOPTR_CPUWRPTR_Msk & (_UINT16_(value) << SERCOM_I2CS_FIFOPTR_CPUWRPTR_Pos)) /* Assignment of value for CPUWRPTR in the SERCOM_I2CS_FIFOPTR register */
#define SERCOM_I2CS_FIFOPTR_CPURDPTR_Pos      _UINT16_(8)                                          /* (SERCOM_I2CS_FIFOPTR) CPU FIFO Read Pointer Position */
#define SERCOM_I2CS_FIFOPTR_CPURDPTR_Msk      (_UINT16_(0xF) << SERCOM_I2CS_FIFOPTR_CPURDPTR_Pos)  /* (SERCOM_I2CS_FIFOPTR) CPU FIFO Read Pointer Mask */
#define SERCOM_I2CS_FIFOPTR_CPURDPTR(value)   (SERCOM_I2CS_FIFOPTR_CPURDPTR_Msk & (_UINT16_(value) << SERCOM_I2CS_FIFOPTR_CPURDPTR_Pos)) /* Assignment of value for CPURDPTR in the SERCOM_I2CS_FIFOPTR register */
#define SERCOM_I2CS_FIFOPTR_Msk               _UINT16_(0x0F0F)                                     /* (SERCOM_I2CS_FIFOPTR) Register Mask  */


/* -------- SERCOM_SPIM_FIFOPTR : (SERCOM Offset: 0x36) (R/W 16) SPIM FIFO CPU Pointers -------- */
#define SERCOM_SPIM_FIFOPTR_RESETVALUE        _UINT16_(0x00)                                       /*  (SERCOM_SPIM_FIFOPTR) SPIM FIFO CPU Pointers  Reset Value */

#define SERCOM_SPIM_FIFOPTR_CPUWRPTR_Pos      _UINT16_(0)                                          /* (SERCOM_SPIM_FIFOPTR) CPU FIFO Write Pointer Position */
#define SERCOM_SPIM_FIFOPTR_CPUWRPTR_Msk      (_UINT16_(0xF) << SERCOM_SPIM_FIFOPTR_CPUWRPTR_Pos)  /* (SERCOM_SPIM_FIFOPTR) CPU FIFO Write Pointer Mask */
#define SERCOM_SPIM_FIFOPTR_CPUWRPTR(value)   (SERCOM_SPIM_FIFOPTR_CPUWRPTR_Msk & (_UINT16_(value) << SERCOM_SPIM_FIFOPTR_CPUWRPTR_Pos)) /* Assignment of value for CPUWRPTR in the SERCOM_SPIM_FIFOPTR register */
#define SERCOM_SPIM_FIFOPTR_CPURDPTR_Pos      _UINT16_(8)                                          /* (SERCOM_SPIM_FIFOPTR) CPU FIFO Read Pointer Position */
#define SERCOM_SPIM_FIFOPTR_CPURDPTR_Msk      (_UINT16_(0xF) << SERCOM_SPIM_FIFOPTR_CPURDPTR_Pos)  /* (SERCOM_SPIM_FIFOPTR) CPU FIFO Read Pointer Mask */
#define SERCOM_SPIM_FIFOPTR_CPURDPTR(value)   (SERCOM_SPIM_FIFOPTR_CPURDPTR_Msk & (_UINT16_(value) << SERCOM_SPIM_FIFOPTR_CPURDPTR_Pos)) /* Assignment of value for CPURDPTR in the SERCOM_SPIM_FIFOPTR register */
#define SERCOM_SPIM_FIFOPTR_Msk               _UINT16_(0x0F0F)                                     /* (SERCOM_SPIM_FIFOPTR) Register Mask  */


/* -------- SERCOM_SPIS_FIFOPTR : (SERCOM Offset: 0x36) (R/W 16) SPIS FIFO CPU Pointers -------- */
#define SERCOM_SPIS_FIFOPTR_RESETVALUE        _UINT16_(0x00)                                       /*  (SERCOM_SPIS_FIFOPTR) SPIS FIFO CPU Pointers  Reset Value */

#define SERCOM_SPIS_FIFOPTR_CPUWRPTR_Pos      _UINT16_(0)                                          /* (SERCOM_SPIS_FIFOPTR) CPU FIFO Write Pointer Position */
#define SERCOM_SPIS_FIFOPTR_CPUWRPTR_Msk      (_UINT16_(0xF) << SERCOM_SPIS_FIFOPTR_CPUWRPTR_Pos)  /* (SERCOM_SPIS_FIFOPTR) CPU FIFO Write Pointer Mask */
#define SERCOM_SPIS_FIFOPTR_CPUWRPTR(value)   (SERCOM_SPIS_FIFOPTR_CPUWRPTR_Msk & (_UINT16_(value) << SERCOM_SPIS_FIFOPTR_CPUWRPTR_Pos)) /* Assignment of value for CPUWRPTR in the SERCOM_SPIS_FIFOPTR register */
#define SERCOM_SPIS_FIFOPTR_CPURDPTR_Pos      _UINT16_(8)                                          /* (SERCOM_SPIS_FIFOPTR) CPU FIFO Read Pointer Position */
#define SERCOM_SPIS_FIFOPTR_CPURDPTR_Msk      (_UINT16_(0xF) << SERCOM_SPIS_FIFOPTR_CPURDPTR_Pos)  /* (SERCOM_SPIS_FIFOPTR) CPU FIFO Read Pointer Mask */
#define SERCOM_SPIS_FIFOPTR_CPURDPTR(value)   (SERCOM_SPIS_FIFOPTR_CPURDPTR_Msk & (_UINT16_(value) << SERCOM_SPIS_FIFOPTR_CPURDPTR_Pos)) /* Assignment of value for CPURDPTR in the SERCOM_SPIS_FIFOPTR register */
#define SERCOM_SPIS_FIFOPTR_Msk               _UINT16_(0x0F0F)                                     /* (SERCOM_SPIS_FIFOPTR) Register Mask  */


/* -------- SERCOM_USART_INT_FIFOPTR : (SERCOM Offset: 0x36) (R/W 16) USART FIFO CPU Pointers -------- */
#define SERCOM_USART_INT_FIFOPTR_RESETVALUE   _UINT16_(0x00)                                       /*  (SERCOM_USART_INT_FIFOPTR) USART FIFO CPU Pointers  Reset Value */

#define SERCOM_USART_INT_FIFOPTR_CPUWRPTR_Pos _UINT16_(0)                                          /* (SERCOM_USART_INT_FIFOPTR) CPU FIFO Write Pointer Position */
#define SERCOM_USART_INT_FIFOPTR_CPUWRPTR_Msk (_UINT16_(0xF) << SERCOM_USART_INT_FIFOPTR_CPUWRPTR_Pos) /* (SERCOM_USART_INT_FIFOPTR) CPU FIFO Write Pointer Mask */
#define SERCOM_USART_INT_FIFOPTR_CPUWRPTR(value) (SERCOM_USART_INT_FIFOPTR_CPUWRPTR_Msk & (_UINT16_(value) << SERCOM_USART_INT_FIFOPTR_CPUWRPTR_Pos)) /* Assignment of value for CPUWRPTR in the SERCOM_USART_INT_FIFOPTR register */
#define SERCOM_USART_INT_FIFOPTR_CPURDPTR_Pos _UINT16_(8)                                          /* (SERCOM_USART_INT_FIFOPTR) CPU FIFO Read Pointer Position */
#define SERCOM_USART_INT_FIFOPTR_CPURDPTR_Msk (_UINT16_(0xF) << SERCOM_USART_INT_FIFOPTR_CPURDPTR_Pos) /* (SERCOM_USART_INT_FIFOPTR) CPU FIFO Read Pointer Mask */
#define SERCOM_USART_INT_FIFOPTR_CPURDPTR(value) (SERCOM_USART_INT_FIFOPTR_CPURDPTR_Msk & (_UINT16_(value) << SERCOM_USART_INT_FIFOPTR_CPURDPTR_Pos)) /* Assignment of value for CPURDPTR in the SERCOM_USART_INT_FIFOPTR register */
#define SERCOM_USART_INT_FIFOPTR_Msk          _UINT16_(0x0F0F)                                     /* (SERCOM_USART_INT_FIFOPTR) Register Mask  */


/* SERCOM register offsets definitions */
#define SERCOM_I2CM_CTRLA_REG_OFST     _UINT32_(0x00)      /* (SERCOM_I2CM_CTRLA) I2CM Control A Offset */
#define SERCOM_I2CS_CTRLA_REG_OFST     _UINT32_(0x00)      /* (SERCOM_I2CS_CTRLA) I2CS Control A Offset */
#define SERCOM_SPIM_CTRLA_REG_OFST     _UINT32_(0x00)      /* (SERCOM_SPIM_CTRLA) SPIM Control A Offset */
#define SERCOM_SPIS_CTRLA_REG_OFST     _UINT32_(0x00)      /* (SERCOM_SPIS_CTRLA) SPIS Control A Offset */
#define SERCOM_USART_INT_CTRLA_REG_OFST _UINT32_(0x00)      /* (SERCOM_USART_INT_CTRLA) USART Control A Offset */
#define SERCOM_I2CM_CTRLB_REG_OFST     _UINT32_(0x04)      /* (SERCOM_I2CM_CTRLB) I2CM Control B Offset */
#define SERCOM_I2CS_CTRLB_REG_OFST     _UINT32_(0x04)      /* (SERCOM_I2CS_CTRLB) I2CS Control B Offset */
#define SERCOM_SPIM_CTRLB_REG_OFST     _UINT32_(0x04)      /* (SERCOM_SPIM_CTRLB) SPIM Control B Offset */
#define SERCOM_SPIS_CTRLB_REG_OFST     _UINT32_(0x04)      /* (SERCOM_SPIS_CTRLB) SPIS Control B Offset */
#define SERCOM_USART_INT_CTRLB_REG_OFST _UINT32_(0x04)      /* (SERCOM_USART_INT_CTRLB) USART Control B Offset */
#define SERCOM_I2CM_CTRLC_REG_OFST     _UINT32_(0x08)      /* (SERCOM_I2CM_CTRLC) I2CM Control C Offset */
#define SERCOM_I2CS_CTRLC_REG_OFST     _UINT32_(0x08)      /* (SERCOM_I2CS_CTRLC) I2CS Control C Offset */
#define SERCOM_SPIM_CTRLC_REG_OFST     _UINT32_(0x08)      /* (SERCOM_SPIM_CTRLC) SPIM Control C Offset */
#define SERCOM_SPIS_CTRLC_REG_OFST     _UINT32_(0x08)      /* (SERCOM_SPIS_CTRLC) SPIS Control C Offset */
#define SERCOM_USART_INT_CTRLC_REG_OFST _UINT32_(0x08)      /* (SERCOM_USART_INT_CTRLC) USART Control C Offset */
#define SERCOM_I2CM_BAUD_REG_OFST      _UINT32_(0x0C)      /* (SERCOM_I2CM_BAUD) I2CM Baud Rate Offset */
#define SERCOM_SPIM_BAUD_REG_OFST      _UINT32_(0x0C)      /* (SERCOM_SPIM_BAUD) SPIM Baud Rate Offset */
#define SERCOM_SPIS_BAUD_REG_OFST      _UINT32_(0x0C)      /* (SERCOM_SPIS_BAUD) SPIS Baud Rate Offset */
#define SERCOM_USART_INT_BAUD_REG_OFST _UINT32_(0x0C)      /* (SERCOM_USART_INT_BAUD) USART Baud Rate Offset */
#define SERCOM_USART_INT_RXPL_REG_OFST _UINT32_(0x0E)      /* (SERCOM_USART_INT_RXPL) USART Receive Pulse Length Offset */
#define SERCOM_I2CM_INTENCLR_REG_OFST  _UINT32_(0x14)      /* (SERCOM_I2CM_INTENCLR) I2CM Interrupt Enable Clear Offset */
#define SERCOM_I2CS_INTENCLR_REG_OFST  _UINT32_(0x14)      /* (SERCOM_I2CS_INTENCLR) I2CS Interrupt Enable Clear Offset */
#define SERCOM_SPIM_INTENCLR_REG_OFST  _UINT32_(0x14)      /* (SERCOM_SPIM_INTENCLR) SPIM Interrupt Enable Clear Offset */
#define SERCOM_SPIS_INTENCLR_REG_OFST  _UINT32_(0x14)      /* (SERCOM_SPIS_INTENCLR) SPIS Interrupt Enable Clear Offset */
#define SERCOM_USART_INT_INTENCLR_REG_OFST _UINT32_(0x14)      /* (SERCOM_USART_INT_INTENCLR) USART Interrupt Enable Clear Offset */
#define SERCOM_I2CM_INTENSET_REG_OFST  _UINT32_(0x16)      /* (SERCOM_I2CM_INTENSET) I2CM Interrupt Enable Set Offset */
#define SERCOM_I2CS_INTENSET_REG_OFST  _UINT32_(0x16)      /* (SERCOM_I2CS_INTENSET) I2CS Interrupt Enable Set Offset */
#define SERCOM_SPIM_INTENSET_REG_OFST  _UINT32_(0x16)      /* (SERCOM_SPIM_INTENSET) SPIM Interrupt Enable Set Offset */
#define SERCOM_SPIS_INTENSET_REG_OFST  _UINT32_(0x16)      /* (SERCOM_SPIS_INTENSET) SPIS Interrupt Enable Set Offset */
#define SERCOM_USART_INT_INTENSET_REG_OFST _UINT32_(0x16)      /* (SERCOM_USART_INT_INTENSET) USART Interrupt Enable Set Offset */
#define SERCOM_I2CM_INTFLAG_REG_OFST   _UINT32_(0x18)      /* (SERCOM_I2CM_INTFLAG) I2CM Interrupt Flag Status and Clear Offset */
#define SERCOM_I2CS_INTFLAG_REG_OFST   _UINT32_(0x18)      /* (SERCOM_I2CS_INTFLAG) I2CS Interrupt Flag Status and Clear Offset */
#define SERCOM_SPIM_INTFLAG_REG_OFST   _UINT32_(0x18)      /* (SERCOM_SPIM_INTFLAG) SPIM Interrupt Flag Status and Clear Offset */
#define SERCOM_SPIS_INTFLAG_REG_OFST   _UINT32_(0x18)      /* (SERCOM_SPIS_INTFLAG) SPIS Interrupt Flag Status and Clear Offset */
#define SERCOM_USART_INT_INTFLAG_REG_OFST _UINT32_(0x18)      /* (SERCOM_USART_INT_INTFLAG) USART Interrupt Flag Status and Clear Offset */
#define SERCOM_I2CM_STATUS_REG_OFST    _UINT32_(0x1A)      /* (SERCOM_I2CM_STATUS) I2CM Status Offset */
#define SERCOM_I2CS_STATUS_REG_OFST    _UINT32_(0x1A)      /* (SERCOM_I2CS_STATUS) I2CS Status Offset */
#define SERCOM_SPIM_STATUS_REG_OFST    _UINT32_(0x1A)      /* (SERCOM_SPIM_STATUS) SPIM Status Offset */
#define SERCOM_SPIS_STATUS_REG_OFST    _UINT32_(0x1A)      /* (SERCOM_SPIS_STATUS) SPIS Status Offset */
#define SERCOM_USART_INT_STATUS_REG_OFST _UINT32_(0x1A)      /* (SERCOM_USART_INT_STATUS) USART Status Offset */
#define SERCOM_I2CM_SYNCBUSY_REG_OFST  _UINT32_(0x1C)      /* (SERCOM_I2CM_SYNCBUSY) I2CM Synchronization Busy Offset */
#define SERCOM_I2CS_SYNCBUSY_REG_OFST  _UINT32_(0x1C)      /* (SERCOM_I2CS_SYNCBUSY) I2CS Synchronization Busy Offset */
#define SERCOM_SPIM_SYNCBUSY_REG_OFST  _UINT32_(0x1C)      /* (SERCOM_SPIM_SYNCBUSY) SPIM Synchronization Busy Offset */
#define SERCOM_SPIS_SYNCBUSY_REG_OFST  _UINT32_(0x1C)      /* (SERCOM_SPIS_SYNCBUSY) SPIS Synchronization Busy Offset */
#define SERCOM_USART_INT_SYNCBUSY_REG_OFST _UINT32_(0x1C)      /* (SERCOM_USART_INT_SYNCBUSY) USART Synchronization Busy Offset */
#define SERCOM_USART_INT_RXERRCNT_REG_OFST _UINT32_(0x20)      /* (SERCOM_USART_INT_RXERRCNT) USART Receive Error Count Offset */
#define SERCOM_I2CS_LENGTH_REG_OFST    _UINT32_(0x22)      /* (SERCOM_I2CS_LENGTH) I2CS Length Offset */
#define SERCOM_SPIM_LENGTH_REG_OFST    _UINT32_(0x22)      /* (SERCOM_SPIM_LENGTH) SPIM Length Offset */
#define SERCOM_SPIS_LENGTH_REG_OFST    _UINT32_(0x22)      /* (SERCOM_SPIS_LENGTH) SPIS Length Offset */
#define SERCOM_USART_INT_LENGTH_REG_OFST _UINT32_(0x22)      /* (SERCOM_USART_INT_LENGTH) USART Length Offset */
#define SERCOM_I2CM_ADDR_REG_OFST      _UINT32_(0x24)      /* (SERCOM_I2CM_ADDR) I2CM Address Offset */
#define SERCOM_I2CS_ADDR_REG_OFST      _UINT32_(0x24)      /* (SERCOM_I2CS_ADDR) I2CS Address Offset */
#define SERCOM_SPIM_ADDR_REG_OFST      _UINT32_(0x24)      /* (SERCOM_SPIM_ADDR) SPIM Address Offset */
#define SERCOM_SPIS_ADDR_REG_OFST      _UINT32_(0x24)      /* (SERCOM_SPIS_ADDR) SPIS Address Offset */
#define SERCOM_I2CM_DATA_REG_OFST      _UINT32_(0x28)      /* (SERCOM_I2CM_DATA) I2CM Data Offset */
#define SERCOM_I2CS_DATA_REG_OFST      _UINT32_(0x28)      /* (SERCOM_I2CS_DATA) I2CS Data Offset */
#define SERCOM_SPIM_DATA_REG_OFST      _UINT32_(0x28)      /* (SERCOM_SPIM_DATA) SPIM Data Offset */
#define SERCOM_SPIS_DATA_REG_OFST      _UINT32_(0x28)      /* (SERCOM_SPIS_DATA) SPIS Data Offset */
#define SERCOM_USART_INT_DATA_REG_OFST _UINT32_(0x28)      /* (SERCOM_USART_INT_DATA) USART Data Offset */
#define SERCOM_I2CM_DBGCTRL_REG_OFST   _UINT32_(0x30)      /* (SERCOM_I2CM_DBGCTRL) I2CM Debug Control Offset */
#define SERCOM_SPIM_DBGCTRL_REG_OFST   _UINT32_(0x30)      /* (SERCOM_SPIM_DBGCTRL) SPIM Debug Control Offset */
#define SERCOM_SPIS_DBGCTRL_REG_OFST   _UINT32_(0x30)      /* (SERCOM_SPIS_DBGCTRL) SPIS Debug Control Offset */
#define SERCOM_USART_INT_DBGCTRL_REG_OFST _UINT32_(0x30)      /* (SERCOM_USART_INT_DBGCTRL) USART Debug Control Offset */
#define SERCOM_I2CM_FIFOSPACE_REG_OFST _UINT32_(0x34)      /* (SERCOM_I2CM_FIFOSPACE) I2CM FIFO Space Offset */
#define SERCOM_I2CS_FIFOSPACE_REG_OFST _UINT32_(0x34)      /* (SERCOM_I2CS_FIFOSPACE) I2CS FIFO Space Offset */
#define SERCOM_SPIM_FIFOSPACE_REG_OFST _UINT32_(0x34)      /* (SERCOM_SPIM_FIFOSPACE) SPIM FIFO Space Offset */
#define SERCOM_SPIS_FIFOSPACE_REG_OFST _UINT32_(0x34)      /* (SERCOM_SPIS_FIFOSPACE) SPIS FIFO Space Offset */
#define SERCOM_USART_INT_FIFOSPACE_REG_OFST _UINT32_(0x34)      /* (SERCOM_USART_INT_FIFOSPACE) USART FIFO Space Offset */
#define SERCOM_I2CM_FIFOPTR_REG_OFST   _UINT32_(0x36)      /* (SERCOM_I2CM_FIFOPTR) I2CM FIFO CPU Pointers Offset */
#define SERCOM_I2CS_FIFOPTR_REG_OFST   _UINT32_(0x36)      /* (SERCOM_I2CS_FIFOPTR) I2CS FIFO CPU Pointers Offset */
#define SERCOM_SPIM_FIFOPTR_REG_OFST   _UINT32_(0x36)      /* (SERCOM_SPIM_FIFOPTR) SPIM FIFO CPU Pointers Offset */
#define SERCOM_SPIS_FIFOPTR_REG_OFST   _UINT32_(0x36)      /* (SERCOM_SPIS_FIFOPTR) SPIS FIFO CPU Pointers Offset */
#define SERCOM_USART_INT_FIFOPTR_REG_OFST _UINT32_(0x36)      /* (SERCOM_USART_INT_FIFOPTR) USART FIFO CPU Pointers Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* SERCOM register API structure */
typedef struct
{  /* Serial Communication Interface */
  __IO  uint32_t                       SERCOM_CTRLA;       /* Offset: 0x00 (R/W  32) I2CM Control A */
  __IO  uint32_t                       SERCOM_CTRLB;       /* Offset: 0x04 (R/W  32) I2CM Control B */
  __IO  uint32_t                       SERCOM_CTRLC;       /* Offset: 0x08 (R/W  32) I2CM Control C */
  __IO  uint32_t                       SERCOM_BAUD;        /* Offset: 0x0C (R/W  32) I2CM Baud Rate */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint8_t                        SERCOM_INTENCLR;    /* Offset: 0x14 (R/W  8) I2CM Interrupt Enable Clear */
  __I   uint8_t                        Reserved2[0x01];
  __IO  uint8_t                        SERCOM_INTENSET;    /* Offset: 0x16 (R/W  8) I2CM Interrupt Enable Set */
  __I   uint8_t                        Reserved3[0x01];
  __IO  uint8_t                        SERCOM_INTFLAG;     /* Offset: 0x18 (R/W  8) I2CM Interrupt Flag Status and Clear */
  __I   uint8_t                        Reserved4[0x01];
  __IO  uint16_t                       SERCOM_STATUS;      /* Offset: 0x1A (R/W  16) I2CM Status */
  __I   uint32_t                       SERCOM_SYNCBUSY;    /* Offset: 0x1C (R/   32) I2CM Synchronization Busy */
  __I   uint8_t                        Reserved5[0x04];
  __IO  uint32_t                       SERCOM_ADDR;        /* Offset: 0x24 (R/W  32) I2CM Address */
  __IO  uint32_t                       SERCOM_DATA;        /* Offset: 0x28 (R/W  32) I2CM Data */
  __I   uint8_t                        Reserved6[0x04];
  __IO  uint8_t                        SERCOM_DBGCTRL;     /* Offset: 0x30 (R/W  8) I2CM Debug Control */
  __I   uint8_t                        Reserved7[0x03];
  __I   uint16_t                       SERCOM_FIFOSPACE;   /* Offset: 0x34 (R/   16) I2CM FIFO Space */
  __IO  uint16_t                       SERCOM_FIFOPTR;     /* Offset: 0x36 (R/W  16) I2CM FIFO CPU Pointers */
} sercom_i2cm_registers_t;

/* SERCOM register API structure */
typedef struct
{  /* Serial Communication Interface */
  __IO  uint32_t                       SERCOM_CTRLA;       /* Offset: 0x00 (R/W  32) I2CS Control A */
  __IO  uint32_t                       SERCOM_CTRLB;       /* Offset: 0x04 (R/W  32) I2CS Control B */
  __IO  uint32_t                       SERCOM_CTRLC;       /* Offset: 0x08 (R/W  32) I2CS Control C */
  __I   uint8_t                        Reserved1[0x08];
  __IO  uint8_t                        SERCOM_INTENCLR;    /* Offset: 0x14 (R/W  8) I2CS Interrupt Enable Clear */
  __I   uint8_t                        Reserved2[0x01];
  __IO  uint8_t                        SERCOM_INTENSET;    /* Offset: 0x16 (R/W  8) I2CS Interrupt Enable Set */
  __I   uint8_t                        Reserved3[0x01];
  __IO  uint8_t                        SERCOM_INTFLAG;     /* Offset: 0x18 (R/W  8) I2CS Interrupt Flag Status and Clear */
  __I   uint8_t                        Reserved4[0x01];
  __IO  uint16_t                       SERCOM_STATUS;      /* Offset: 0x1A (R/W  16) I2CS Status */
  __I   uint32_t                       SERCOM_SYNCBUSY;    /* Offset: 0x1C (R/   32) I2CS Synchronization Busy */
  __I   uint8_t                        Reserved5[0x02];
  __IO  uint16_t                       SERCOM_LENGTH;      /* Offset: 0x22 (R/W  16) I2CS Length */
  __IO  uint32_t                       SERCOM_ADDR;        /* Offset: 0x24 (R/W  32) I2CS Address */
  __IO  uint32_t                       SERCOM_DATA;        /* Offset: 0x28 (R/W  32) I2CS Data */
  __I   uint8_t                        Reserved6[0x08];
  __I   uint16_t                       SERCOM_FIFOSPACE;   /* Offset: 0x34 (R/   16) I2CS FIFO Space */
  __IO  uint16_t                       SERCOM_FIFOPTR;     /* Offset: 0x36 (R/W  16) I2CS FIFO CPU Pointers */
} sercom_i2cs_registers_t;

/* SERCOM register API structure */
typedef struct
{  /* Serial Communication Interface */
  __IO  uint32_t                       SERCOM_CTRLA;       /* Offset: 0x00 (R/W  32) SPIS Control A */
  __IO  uint32_t                       SERCOM_CTRLB;       /* Offset: 0x04 (R/W  32) SPIS Control B */
  __IO  uint32_t                       SERCOM_CTRLC;       /* Offset: 0x08 (R/W  32) SPIS Control C */
  __IO  uint8_t                        SERCOM_BAUD;        /* Offset: 0x0C (R/W  8) SPIS Baud Rate */
  __I   uint8_t                        Reserved1[0x07];
  __IO  uint8_t                        SERCOM_INTENCLR;    /* Offset: 0x14 (R/W  8) SPIS Interrupt Enable Clear */
  __I   uint8_t                        Reserved2[0x01];
  __IO  uint8_t                        SERCOM_INTENSET;    /* Offset: 0x16 (R/W  8) SPIS Interrupt Enable Set */
  __I   uint8_t                        Reserved3[0x01];
  __IO  uint8_t                        SERCOM_INTFLAG;     /* Offset: 0x18 (R/W  8) SPIS Interrupt Flag Status and Clear */
  __I   uint8_t                        Reserved4[0x01];
  __IO  uint16_t                       SERCOM_STATUS;      /* Offset: 0x1A (R/W  16) SPIS Status */
  __I   uint32_t                       SERCOM_SYNCBUSY;    /* Offset: 0x1C (R/   32) SPIS Synchronization Busy */
  __I   uint8_t                        Reserved5[0x02];
  __IO  uint16_t                       SERCOM_LENGTH;      /* Offset: 0x22 (R/W  16) SPIS Length */
  __IO  uint32_t                       SERCOM_ADDR;        /* Offset: 0x24 (R/W  32) SPIS Address */
  __IO  uint32_t                       SERCOM_DATA;        /* Offset: 0x28 (R/W  32) SPIS Data */
  __I   uint8_t                        Reserved6[0x04];
  __IO  uint8_t                        SERCOM_DBGCTRL;     /* Offset: 0x30 (R/W  8) SPIS Debug Control */
  __I   uint8_t                        Reserved7[0x03];
  __I   uint16_t                       SERCOM_FIFOSPACE;   /* Offset: 0x34 (R/   16) SPIS FIFO Space */
  __IO  uint16_t                       SERCOM_FIFOPTR;     /* Offset: 0x36 (R/W  16) SPIS FIFO CPU Pointers */
} sercom_spis_registers_t;

/* SERCOM register API structure */
typedef struct
{  /* Serial Communication Interface */
  __IO  uint32_t                       SERCOM_CTRLA;       /* Offset: 0x00 (R/W  32) SPIM Control A */
  __IO  uint32_t                       SERCOM_CTRLB;       /* Offset: 0x04 (R/W  32) SPIM Control B */
  __IO  uint32_t                       SERCOM_CTRLC;       /* Offset: 0x08 (R/W  32) SPIM Control C */
  __IO  uint8_t                        SERCOM_BAUD;        /* Offset: 0x0C (R/W  8) SPIM Baud Rate */
  __I   uint8_t                        Reserved1[0x07];
  __IO  uint8_t                        SERCOM_INTENCLR;    /* Offset: 0x14 (R/W  8) SPIM Interrupt Enable Clear */
  __I   uint8_t                        Reserved2[0x01];
  __IO  uint8_t                        SERCOM_INTENSET;    /* Offset: 0x16 (R/W  8) SPIM Interrupt Enable Set */
  __I   uint8_t                        Reserved3[0x01];
  __IO  uint8_t                        SERCOM_INTFLAG;     /* Offset: 0x18 (R/W  8) SPIM Interrupt Flag Status and Clear */
  __I   uint8_t                        Reserved4[0x01];
  __IO  uint16_t                       SERCOM_STATUS;      /* Offset: 0x1A (R/W  16) SPIM Status */
  __I   uint32_t                       SERCOM_SYNCBUSY;    /* Offset: 0x1C (R/   32) SPIM Synchronization Busy */
  __I   uint8_t                        Reserved5[0x02];
  __IO  uint16_t                       SERCOM_LENGTH;      /* Offset: 0x22 (R/W  16) SPIM Length */
  __IO  uint32_t                       SERCOM_ADDR;        /* Offset: 0x24 (R/W  32) SPIM Address */
  __IO  uint32_t                       SERCOM_DATA;        /* Offset: 0x28 (R/W  32) SPIM Data */
  __I   uint8_t                        Reserved6[0x04];
  __IO  uint8_t                        SERCOM_DBGCTRL;     /* Offset: 0x30 (R/W  8) SPIM Debug Control */
  __I   uint8_t                        Reserved7[0x03];
  __I   uint16_t                       SERCOM_FIFOSPACE;   /* Offset: 0x34 (R/   16) SPIM FIFO Space */
  __IO  uint16_t                       SERCOM_FIFOPTR;     /* Offset: 0x36 (R/W  16) SPIM FIFO CPU Pointers */
} sercom_spim_registers_t;

/* SERCOM register API structure */
typedef struct
{  /* Serial Communication Interface */
  __IO  uint32_t                       SERCOM_CTRLA;       /* Offset: 0x00 (R/W  32) USART Control A */
  __IO  uint32_t                       SERCOM_CTRLB;       /* Offset: 0x04 (R/W  32) USART Control B */
  __IO  uint32_t                       SERCOM_CTRLC;       /* Offset: 0x08 (R/W  32) USART Control C */
  __IO  uint16_t                       SERCOM_BAUD;        /* Offset: 0x0C (R/W  16) USART Baud Rate */
  __IO  uint8_t                        SERCOM_RXPL;        /* Offset: 0x0E (R/W  8) USART Receive Pulse Length */
  __I   uint8_t                        Reserved1[0x05];
  __IO  uint8_t                        SERCOM_INTENCLR;    /* Offset: 0x14 (R/W  8) USART Interrupt Enable Clear */
  __I   uint8_t                        Reserved2[0x01];
  __IO  uint8_t                        SERCOM_INTENSET;    /* Offset: 0x16 (R/W  8) USART Interrupt Enable Set */
  __I   uint8_t                        Reserved3[0x01];
  __IO  uint8_t                        SERCOM_INTFLAG;     /* Offset: 0x18 (R/W  8) USART Interrupt Flag Status and Clear */
  __I   uint8_t                        Reserved4[0x01];
  __IO  uint16_t                       SERCOM_STATUS;      /* Offset: 0x1A (R/W  16) USART Status */
  __I   uint32_t                       SERCOM_SYNCBUSY;    /* Offset: 0x1C (R/   32) USART Synchronization Busy */
  __I   uint8_t                        SERCOM_RXERRCNT;    /* Offset: 0x20 (R/   8) USART Receive Error Count */
  __I   uint8_t                        Reserved5[0x01];
  __IO  uint16_t                       SERCOM_LENGTH;      /* Offset: 0x22 (R/W  16) USART Length */
  __I   uint8_t                        Reserved6[0x04];
  __IO  uint32_t                       SERCOM_DATA;        /* Offset: 0x28 (R/W  32) USART Data */
  __I   uint8_t                        Reserved7[0x04];
  __IO  uint8_t                        SERCOM_DBGCTRL;     /* Offset: 0x30 (R/W  8) USART Debug Control */
  __I   uint8_t                        Reserved8[0x03];
  __I   uint16_t                       SERCOM_FIFOSPACE;   /* Offset: 0x34 (R/   16) USART FIFO Space */
  __IO  uint16_t                       SERCOM_FIFOPTR;     /* Offset: 0x36 (R/W  16) USART FIFO CPU Pointers */
} sercom_usart_int_registers_t;

/* SERCOM hardware registers */
typedef union
{  /* Serial Communication Interface */
       sercom_i2cm_registers_t        I2CM;           /* I2C Master Mode */
       sercom_i2cs_registers_t        I2CS;           /* I2C Slave Mode */
       sercom_spis_registers_t        SPIS;           /* SPI Slave Mode */
       sercom_spim_registers_t        SPIM;           /* SPI Master Mode */
       sercom_usart_int_registers_t   USART_INT;      /* USART INTERNAL CLOCK Mode */
} sercom_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CKGC01_SERCOM_COMPONENT_H_ */
