/*******************************************************************************
  System Initialization File

  File Name:
    initialization.c

  Summary:
    This file contains source code necessary to initialize the system.

  Description:
    This file contains source code necessary to initialize the system.  It
    implements the "SYS_Initialize" function, defines the configuration bits,
    and allocates any necessary global system resources,
 *******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *******************************************************************************/
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************
#include "configuration.h"
#include "definitions.h"
#include "device.h"



// ****************************************************************************
// ****************************************************************************
// Section: Configuration Bits
// ****************************************************************************
// ****************************************************************************
#pragma config FUSES_USERCFG1_FSEQ0_SEQNUM = 0x1U
#pragma config FUSES_USERCFG1_FSEQ0_SEQBAR = 0xfffeU
#pragma config FUSES_USERCFG1_FSEQ1_SEQNUM = 0x1U
#pragma config FUSES_USERCFG1_FSEQ1_SEQBAR = 0xfffeU
#pragma config FUSES_USERCFG1_FSEQ2_SEQNUM = 0x1U
#pragma config FUSES_USERCFG1_FSEQ2_SEQBAR = 0xfffeU
#pragma config FUSES_USERCFG1_FSEQ3_SEQNUM = 0x1U
#pragma config FUSES_USERCFG1_FSEQ3_SEQBAR = 0xfffeU
#pragma config FUSES_USERCFG1_FSEQ4_SEQNUM = 0x1U
#pragma config FUSES_USERCFG1_FSEQ4_SEQBAR = 0xfffeU
#pragma config FUSES_USERCFG1_FSEQ5_SEQNUM = 0x1U
#pragma config FUSES_USERCFG1_FSEQ5_SEQBAR = 0xfffeU
#pragma config FUSES_USERCFG1_FSEQ6_SEQNUM = 0x1U
#pragma config FUSES_USERCFG1_FSEQ6_SEQBAR = 0xfffeU
#pragma config FUSES_USERCFG1_FSEQ7_SEQNUM = 0x1U
#pragma config FUSES_USERCFG1_FSEQ7_SEQBAR = 0xfffeU
#pragma config FUSES_USERCFG1_AFSEQ0_ASEQNUM = 0xffffU
#pragma config FUSES_USERCFG1_AFSEQ0_ASEQBAR = 0xffffU
#pragma config FUSES_USERCFG1_AFSEQ1_ASEQNUM = 0xffffU
#pragma config FUSES_USERCFG1_AFSEQ1_ASEQBAR = 0xffffU
#pragma config FUSES_USERCFG1_AFSEQ2_ASEQNUM = 0xffffU
#pragma config FUSES_USERCFG1_AFSEQ2_ASEQBAR = 0xffffU
#pragma config FUSES_USERCFG1_AFSEQ3_ASEQNUM = 0xffffU
#pragma config FUSES_USERCFG1_AFSEQ3_ASEQBAR = 0xffffU
#pragma config FUSES_USERCFG1_AFSEQ4_ASEQNUM = 0xffffU
#pragma config FUSES_USERCFG1_AFSEQ4_ASEQBAR = 0xffffU
#pragma config FUSES_USERCFG1_AFSEQ5_ASEQNUM = 0xffffU
#pragma config FUSES_USERCFG1_AFSEQ5_ASEQBAR = 0xffffU
#pragma config FUSES_USERCFG1_AFSEQ6_ASEQNUM = 0xffffU
#pragma config FUSES_USERCFG1_AFSEQ6_ASEQBAR = 0xffffU
#pragma config FUSES_USERCFG1_AFSEQ7_ASEQNUM = 0xffffU
#pragma config FUSES_USERCFG1_AFSEQ7_ASEQBAR = 0xffffU
#pragma config FUSES_USERCFG1_FUCFG0_WDT_ENABLE = CLEAR
#pragma config FUSES_USERCFG1_FUCFG0_WDT_WEN = CLEAR
#pragma config FUSES_USERCFG1_FUCFG0_WDT_RUNSTDBY = CLEAR
#pragma config FUSES_USERCFG1_FUCFG0_WDT_ALWAYSON = CLEAR
#pragma config FUSES_USERCFG1_FUCFG0_WDT_PER = 0x0U
#pragma config FUSES_USERCFG1_FUCFG0_WDT_WINDOW = 0x0U
#pragma config FUSES_USERCFG1_FUCFG0_WDT_EWOFFSET = 0x0U
#pragma config FUSES_USERCFG1_FUCFG1_FUCFG1 = 0xffffffffU
#pragma config FUSES_USERCFG1_FUCFG2_BRCFGUDSSMOR_BOR_HYST = SET
#pragma config FUSES_USERCFG1_FUCFG2_BRCFGUDSSMOR_BOR_TRIP = 0x3U
#pragma config FUSES_USERCFG1_FUCFG3_HYST_BOR_VDDIO = SET
#pragma config FUSES_USERCFG1_FUCFG3_BOR_TRIP_VDDIO = 0x3U
#pragma config FUSES_USERCFG1_FUCFG3_HYST_BOR_VDDIOB = SET
#pragma config FUSES_USERCFG1_FUCFG3_BOR_TRIP_VDDIOB = 0x3U
#pragma config FUSES_USERCFG1_FUCFG3_HYST_BOR_VDDA = SET
#pragma config FUSES_USERCFG1_FUCFG3_BOR_TRIP_VDDA = 0x3U
#pragma config FUSES_USERCFG1_FUCFG3_HYST_BOR_VDDREG = SET
#pragma config FUSES_USERCFG1_FUCFG5_UCP0 = 0xfU
#pragma config FUSES_USERCFG1_FUCFG5_UCP1 = 0xfU
#pragma config FUSES_USERCFG1_FUCFG6_PFM_ECCCTL = 0x3U
#pragma config FUSES_USERCFG1_FUCFG6_PFM_ECCUNLCK = SET
#pragma config FUSES_USERCFG1_FUCFG6_PFM_SECCNT = 0x0U
#pragma config FUSES_USERCFG1_FUCFG7_PFM_TEMP = SET
#pragma config FUSES_USERCFG1_FUCFG8_PFM_UC1WP = CLEAR
#pragma config FUSES_USERCFG1_FUCFG8_PFM_UC2WP = CLEAR
#pragma config FUSES_USERCFG1_FUCFG8_PFM_UC1WPLOCK = CLEAR
#pragma config FUSES_USERCFG1_FUCFG8_PFM_UC2WPLOCK = CLEAR
#pragma config FUSES_USERCFG1_FUCFG9_FUCFG9 = 0x202U
#pragma config FUSES_USERCFG1_FUCFG10_BOOTROM_NONSECA = 0x0U
#pragma config FUSES_USERCFG1_FUCFG11_BOOTROM_NONSECB = 0x0U
#pragma config FUSES_USERCFG1_FUCFG12_BOOTROM_NONSECC = 0x0U
#pragma config FUSES_USERCFG1_FUCFG13_BOOTROM_NONSECAHB = 0x0U
#pragma config FUSES_USERCFG1_FUCFG14_ANS = 0x0U
#pragma config FUSES_USERCFG1_FUCFG14_ANSC = CLEAR
#pragma config FUSES_USERCFG1_FUCFG15_RNS = 0x0U
#pragma config FUSES_USERCFG1_FUCFG16_HSM_PTRMETA0 = 0xffffffffU
#pragma config FUSES_USERCFG1_FUCFG24_HSM_PTRMETA1 = 0xffffffffU
#pragma config FUSES_BOOTCFG1_BLDRCFG_PFM_BCRP = CLEAR
#pragma config FUSES_BOOTCFG1_BLDRCFG_PFM_BCWP = CLEAR
#pragma config FUSES_BOOTCFG1_BLDRCFG_BROM_EN_BFMCHK = NONE
#pragma config FUSES_BOOTCFG1_BLDRCFG_BROM_EN_PLL = CLEAR
#pragma config FUSES_BOOTCFG1_BLDRCFG_BROM_EN_DALUN = SET
#pragma config FUSES_BOOTCFG1_BLDRCFG_BROM_EN_RWLOCKS = SET
#pragma config FUSES_BOOTCFG1_BROM_BSEQ_SEQNUM = 0x1U
#pragma config FUSES_BOOTCFG1_BROM_BSEQ_SEQBAR = 0xfffeU
#pragma config FUSES_BOOTCFG1_BFM_CHK_TABLEPTR_BFM_CHK_TABLEPTR = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_TZ1_CE_NS0_KEYVAL_TZ1_CE_NS = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_TZ1_CE_NS1_KEYVAL_TZ1_CE_NS = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_TZ1_CE_NS2_KEYVAL_TZ1_CE_NS = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_TZ1_CE_NS3_KEYVAL_TZ1_CE_NS = 0xffffffffU
#pragma config FUSES_BOOTCFG1_CELOCK_TZ1_CE_NS0_CELOCK_TZ1_CE_NS = 0xffffffffU
#pragma config FUSES_BOOTCFG1_CELOCK_TZ1_CE_NS1_CELOCK_TZ1_CE_NS = 0xffffffffU
#pragma config FUSES_BOOTCFG1_CELOCK_TZ1_CE_NS2_CELOCK_TZ1_CE_NS = 0xffffffffU
#pragma config FUSES_BOOTCFG1_CELOCK_TZ1_CE_NS3_CELOCK_TZ1_CE_NS = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_TZ1_CE_S0_KEYVAL_TZ1_CE_S = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_TZ1_CE_S1_KEYVAL_TZ1_CE_S = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_TZ1_CE_S2_KEYVAL_TZ1_CE_S = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_TZ1_CE_S3_KEYVAL_TZ1_CE_S = 0xffffffffU
#pragma config FUSES_BOOTCFG1_CELOCK_TZ1_CE_S0_CELOCK_TZ1_CE_S = 0xffffffffU
#pragma config FUSES_BOOTCFG1_CELOCK_TZ1_CE_S1_CELOCK_TZ1_CE_S = 0xffffffffU
#pragma config FUSES_BOOTCFG1_CELOCK_TZ1_CE_S2_CELOCK_TZ1_CE_S = 0xffffffffU
#pragma config FUSES_BOOTCFG1_CELOCK_TZ1_CE_S3_CELOCK_TZ1_CE_S = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_TZ1_CE_ALL0_KEYVAL_TZ1_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_TZ1_CE_ALL1_KEYVAL_TZ1_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_TZ1_CE_ALL2_KEYVAL_TZ1_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_TZ1_CE_ALL3_KEYVAL_TZ1_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG1_CELOCK_TZ1_CE_ALL0_CELOCK_TZ1_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG1_CELOCK_TZ1_CE_ALL1_CELOCK_TZ1_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG1_CELOCK_TZ1_CE_ALL2_CELOCK_TZ1_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG1_CELOCK_TZ1_CE_ALL3_CELOCK_TZ1_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_TZ0_CE_ALL0_KEYVAL_TZ0_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_TZ0_CE_ALL1_KEYVAL_TZ0_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_TZ0_CE_ALL2_KEYVAL_TZ0_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_TZ0_CE_ALL3_KEYVAL_TZ0_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG1_CELOCK_TZ0_CE_ALL0_CELOCK_TZ0_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG1_CELOCK_TZ0_CE_ALL1_CELOCK_TZ0_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG1_CELOCK_TZ0_CE_ALL2_CELOCK_TZ0_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG1_CELOCK_TZ0_CE_ALL3_CELOCK_TZ0_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_CRCCMD0_KEYVAL_CRCCMD = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_CRCCMD1_KEYVAL_CRCCMD = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_CRCCMD2_KEYVAL_CRCCMD = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_CRCCMD3_KEYVAL_CRCCMD = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYCONFIG_CRCCMD0_KEYCONFIG_CRCCMD = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYCONFIG_CRCCMD1_KEYCONFIG_CRCCMD = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYCONFIG_CRCCMD2_KEYCONFIG_CRCCMD = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYCONFIG_CRCCMD3_KEYCONFIG_CRCCMD = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_HOSTDALELEV0_KEYVAL_HOSTDALELEV = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_HOSTDALELEV1_KEYVAL_HOSTDALELEV = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_HOSTDALELEV2_KEYVAL_HOSTDALELEV = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_HOSTDALELEV3_KEYVAL_HOSTDALELEV = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYCONFIG_HOSTDALELEV0_KEYCONFIG_HOSTDALELEV = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYCONFIG_HOSTDALELEV1_KEYCONFIG_HOSTDALELEV = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYCONFIG_HOSTDALELEV2_KEYCONFIG_HOSTDALELEV = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYCONFIG_HOSTDALELEV3_KEYCONFIG_HOSTDALELEV = 0xffffffffU
#pragma config FUSES_BOOTCFG1_ROM_CTRLA_ROM_CTRLA = 0x706U
#pragma config FUSES_BOOTCFG1_FCR_CTRLA_FCR_CTRLA = 0xfcf04U
#pragma config FUSES_BOOTCFG1_RPMU_VREGCTRL_RPMU_VREGCTRL = 0x707f736U
#pragma config FUSES_BOOTCFG1_PLL0_CTRL_PLL0_CTRL = 0x3a86U
#pragma config FUSES_BOOTCFG1_PLL0_FBDIV_PLL0_FBDIV = 0x3ffU
#pragma config FUSES_BOOTCFG1_PLL0_REFDIV_PLL0_REFDIV = 0x3fU
#pragma config FUSES_BOOTCFG1_PLL0_POSTDIVA_PLL0_POSTDIVA = 0xbfU
#pragma config FUSES_BOOTCFG1_MCLK_CLKDIV1_MCLK_CLKDIV1 = 0xffffffffU
#pragma config FUSES_BOOTCFG1_GCLK_GENCTRL0_GCLK_GENCTRL0 = 0xffffffffU
#pragma config FUSES_BOOTCFG1_BROM_BOOTCFGCRC0_BROM_BOOTCFGCRC = 0xffffffffU
#pragma config FUSES_BOOTCFG1_BROM_BOOTCFGCRC1_BROM_BOOTCFGCRC = 0xffffffffU
#pragma config FUSES_BOOTCFG1_BROM_BOOTCFGCRC2_BROM_BOOTCFGCRC = 0xffffffffU
#pragma config FUSES_BOOTCFG1_BROM_BOOTCFGCRC3_BROM_BOOTCFGCRC = 0xffffffffU
#pragma config FUSES_BOOTCFG1_BROM_PAGEEND_BROM_PAGEEND = 0xffffffffU
#pragma config FUSES_USERCFG2_FSEQ0_SEQNUM = 0x0U
#pragma config FUSES_USERCFG2_FSEQ0_SEQBAR = 0xffffU
#pragma config FUSES_USERCFG2_FSEQ1_SEQNUM = 0x0U
#pragma config FUSES_USERCFG2_FSEQ1_SEQBAR = 0xffffU
#pragma config FUSES_USERCFG2_FSEQ2_SEQNUM = 0x0U
#pragma config FUSES_USERCFG2_FSEQ2_SEQBAR = 0xffffU
#pragma config FUSES_USERCFG2_FSEQ3_SEQNUM = 0x0U
#pragma config FUSES_USERCFG2_FSEQ3_SEQBAR = 0xffffU
#pragma config FUSES_USERCFG2_FSEQ4_SEQNUM = 0x0U
#pragma config FUSES_USERCFG2_FSEQ4_SEQBAR = 0xffffU
#pragma config FUSES_USERCFG2_FSEQ5_SEQNUM = 0x0U
#pragma config FUSES_USERCFG2_FSEQ5_SEQBAR = 0xffffU
#pragma config FUSES_USERCFG2_FSEQ6_SEQNUM = 0x0U
#pragma config FUSES_USERCFG2_FSEQ6_SEQBAR = 0xffffU
#pragma config FUSES_USERCFG2_FSEQ7_SEQNUM = 0x0U
#pragma config FUSES_USERCFG2_FSEQ7_SEQBAR = 0xffffU
#pragma config FUSES_USERCFG2_AFSEQ0_ASEQNUM = 0xffffU
#pragma config FUSES_USERCFG2_AFSEQ0_ASEQBAR = 0xffffU
#pragma config FUSES_USERCFG2_AFSEQ1_ASEQNUM = 0xffffU
#pragma config FUSES_USERCFG2_AFSEQ1_ASEQBAR = 0xffffU
#pragma config FUSES_USERCFG2_AFSEQ2_ASEQNUM = 0xffffU
#pragma config FUSES_USERCFG2_AFSEQ2_ASEQBAR = 0xffffU
#pragma config FUSES_USERCFG2_AFSEQ3_ASEQNUM = 0xffffU
#pragma config FUSES_USERCFG2_AFSEQ3_ASEQBAR = 0xffffU
#pragma config FUSES_USERCFG2_AFSEQ4_ASEQNUM = 0xffffU
#pragma config FUSES_USERCFG2_AFSEQ4_ASEQBAR = 0xffffU
#pragma config FUSES_USERCFG2_AFSEQ5_ASEQNUM = 0xffffU
#pragma config FUSES_USERCFG2_AFSEQ5_ASEQBAR = 0xffffU
#pragma config FUSES_USERCFG2_AFSEQ6_ASEQNUM = 0xffffU
#pragma config FUSES_USERCFG2_AFSEQ6_ASEQBAR = 0xffffU
#pragma config FUSES_USERCFG2_AFSEQ7_ASEQNUM = 0xffffU
#pragma config FUSES_USERCFG2_AFSEQ7_ASEQBAR = 0xffffU
#pragma config FUSES_USERCFG2_FUCFG0_WDT_ENABLE = CLEAR
#pragma config FUSES_USERCFG2_FUCFG0_WDT_WEN = SET
#pragma config FUSES_USERCFG2_FUCFG0_WDT_RUNSTDBY = SET
#pragma config FUSES_USERCFG2_FUCFG0_WDT_ALWAYSON = CLEAR
#pragma config FUSES_USERCFG2_FUCFG0_WDT_PER = 0x0U
#pragma config FUSES_USERCFG2_FUCFG0_WDT_WINDOW = 0x0U
#pragma config FUSES_USERCFG2_FUCFG0_WDT_EWOFFSET = 0x0U
#pragma config FUSES_USERCFG2_FUCFG1_FUCFG1 = 0xffffffffU
#pragma config FUSES_USERCFG2_FUCFG2_BRCFGUDSSMOR_BOR_HYST = SET
#pragma config FUSES_USERCFG2_FUCFG2_BRCFGUDSSMOR_BOR_TRIP = 0x3U
#pragma config FUSES_USERCFG2_FUCFG3_HYST_BOR_VDDIO = SET
#pragma config FUSES_USERCFG2_FUCFG3_BOR_TRIP_VDDIO = 0x3U
#pragma config FUSES_USERCFG2_FUCFG3_HYST_BOR_VDDIOB = SET
#pragma config FUSES_USERCFG2_FUCFG3_BOR_TRIP_VDDIOB = 0x3U
#pragma config FUSES_USERCFG2_FUCFG3_HYST_BOR_VDDA = SET
#pragma config FUSES_USERCFG2_FUCFG3_BOR_TRIP_VDDA = 0x3U
#pragma config FUSES_USERCFG2_FUCFG3_HYST_BOR_VDDREG = SET
#pragma config FUSES_USERCFG2_FUCFG5_UCP0 = 0xfU
#pragma config FUSES_USERCFG2_FUCFG5_UCP1 = 0xfU
#pragma config FUSES_USERCFG2_FUCFG6_PFM_ECCCTL = 0x3U
#pragma config FUSES_USERCFG2_FUCFG6_PFM_ECCUNLCK = SET
#pragma config FUSES_USERCFG2_FUCFG6_PFM_SECCNT = 0x0U
#pragma config FUSES_USERCFG2_FUCFG7_PFM_TEMP = SET
#pragma config FUSES_USERCFG2_FUCFG8_PFM_UC1WP = CLEAR
#pragma config FUSES_USERCFG2_FUCFG8_PFM_UC2WP = CLEAR
#pragma config FUSES_USERCFG2_FUCFG8_PFM_UC1WPLOCK = CLEAR
#pragma config FUSES_USERCFG2_FUCFG8_PFM_UC2WPLOCK = CLEAR
#pragma config FUSES_USERCFG2_FUCFG9_FUCFG9 = 0x202U
#pragma config FUSES_USERCFG2_FUCFG10_BOOTROM_NONSECA = 0x0U
#pragma config FUSES_USERCFG2_FUCFG11_BOOTROM_NONSECB = 0x0U
#pragma config FUSES_USERCFG2_FUCFG12_BOOTROM_NONSECC = 0x0U
#pragma config FUSES_USERCFG2_FUCFG13_BOOTROM_NONSECAHB = 0x0U
#pragma config FUSES_USERCFG2_FUCFG14_ANS = 0x0U
#pragma config FUSES_USERCFG2_FUCFG14_ANSC = CLEAR
#pragma config FUSES_USERCFG2_FUCFG15_RNS = 0x0U
#pragma config FUSES_USERCFG2_FUCFG16_HSM_PTRMETA0 = 0xffffffffU
#pragma config FUSES_USERCFG2_FUCFG24_HSM_PTRMETA1 = 0xffffffffU
#pragma config FUSES_BOOTCFG2_BLDRCFG_PFM_BCRP = CLEAR
#pragma config FUSES_BOOTCFG2_BLDRCFG_PFM_BCWP = CLEAR
#pragma config FUSES_BOOTCFG2_BLDRCFG_BROM_EN_BFMCHK = NONE
#pragma config FUSES_BOOTCFG2_BLDRCFG_BROM_EN_PLL = CLEAR
#pragma config FUSES_BOOTCFG2_BLDRCFG_BROM_EN_DALUN = SET
#pragma config FUSES_BOOTCFG2_BLDRCFG_BROM_EN_RWLOCKS = SET
#pragma config FUSES_BOOTCFG2_BROM_BSEQ_SEQNUM = 0x0U
#pragma config FUSES_BOOTCFG2_BROM_BSEQ_SEQBAR = 0xffffU
#pragma config FUSES_BOOTCFG2_BFM_CHK_TABLEPTR_BFM_CHK_TABLEPTR = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_TZ1_CE_NS0_KEYVAL_TZ1_CE_NS = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_TZ1_CE_NS1_KEYVAL_TZ1_CE_NS = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_TZ1_CE_NS2_KEYVAL_TZ1_CE_NS = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_TZ1_CE_NS3_KEYVAL_TZ1_CE_NS = 0xffffffffU
#pragma config FUSES_BOOTCFG2_CELOCK_TZ1_CE_NS0_CELOCK_TZ1_CE_NS = 0xffffffffU
#pragma config FUSES_BOOTCFG2_CELOCK_TZ1_CE_NS1_CELOCK_TZ1_CE_NS = 0xffffffffU
#pragma config FUSES_BOOTCFG2_CELOCK_TZ1_CE_NS2_CELOCK_TZ1_CE_NS = 0xffffffffU
#pragma config FUSES_BOOTCFG2_CELOCK_TZ1_CE_NS3_CELOCK_TZ1_CE_NS = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_TZ1_CE_S0_KEYVAL_TZ1_CE_S = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_TZ1_CE_S1_KEYVAL_TZ1_CE_S = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_TZ1_CE_S2_KEYVAL_TZ1_CE_S = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_TZ1_CE_S3_KEYVAL_TZ1_CE_S = 0xffffffffU
#pragma config FUSES_BOOTCFG2_CELOCK_TZ1_CE_S0_CELOCK_TZ1_CE_S = 0xffffffffU
#pragma config FUSES_BOOTCFG2_CELOCK_TZ1_CE_S1_CELOCK_TZ1_CE_S = 0xffffffffU
#pragma config FUSES_BOOTCFG2_CELOCK_TZ1_CE_S2_CELOCK_TZ1_CE_S = 0xffffffffU
#pragma config FUSES_BOOTCFG2_CELOCK_TZ1_CE_S3_CELOCK_TZ1_CE_S = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_TZ1_CE_ALL0_KEYVAL_TZ1_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_TZ1_CE_ALL1_KEYVAL_TZ1_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_TZ1_CE_ALL2_KEYVAL_TZ1_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_TZ1_CE_ALL3_KEYVAL_TZ1_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG2_CELOCK_TZ1_CE_ALL0_CELOCK_TZ1_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG2_CELOCK_TZ1_CE_ALL1_CELOCK_TZ1_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG2_CELOCK_TZ1_CE_ALL2_CELOCK_TZ1_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG2_CELOCK_TZ1_CE_ALL3_CELOCK_TZ1_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_TZ0_CE_ALL0_KEYVAL_TZ0_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_TZ0_CE_ALL1_KEYVAL_TZ0_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_TZ0_CE_ALL2_KEYVAL_TZ0_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_TZ0_CE_ALL3_KEYVAL_TZ0_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG2_CELOCK_TZ0_CE_ALL0_CELOCK_TZ0_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG2_CELOCK_TZ0_CE_ALL1_CELOCK_TZ0_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG2_CELOCK_TZ0_CE_ALL2_CELOCK_TZ0_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG2_CELOCK_TZ0_CE_ALL3_CELOCK_TZ0_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_CRCCMD0_KEYVAL_CRCCMD = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_CRCCMD1_KEYVAL_CRCCMD = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_CRCCMD2_KEYVAL_CRCCMD = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_CRCCMD3_KEYVAL_CRCCMD = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYCONFIG_CRCCMD0_KEYCONFIG_CRCCMD = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYCONFIG_CRCCMD1_KEYCONFIG_CRCCMD = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYCONFIG_CRCCMD2_KEYCONFIG_CRCCMD = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYCONFIG_CRCCMD3_KEYCONFIG_CRCCMD = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_HOSTDALELEV0_KEYVAL_HOSTDALELEV = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_HOSTDALELEV1_KEYVAL_HOSTDALELEV = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_HOSTDALELEV2_KEYVAL_HOSTDALELEV = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_HOSTDALELEV3_KEYVAL_HOSTDALELEV = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYCONFIG_HOSTDALELEV0_KEYCONFIG_HOSTDALELEV = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYCONFIG_HOSTDALELEV1_KEYCONFIG_HOSTDALELEV = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYCONFIG_HOSTDALELEV2_KEYCONFIG_HOSTDALELEV = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYCONFIG_HOSTDALELEV3_KEYCONFIG_HOSTDALELEV = 0xffffffffU
#pragma config FUSES_BOOTCFG2_ROM_CTRLA_ROM_CTRLA = 0x706U
#pragma config FUSES_BOOTCFG2_FCR_CTRLA_FCR_CTRLA = 0xfcf04U
#pragma config FUSES_BOOTCFG2_RPMU_VREGCTRL_RPMU_VREGCTRL = 0x707f736U
#pragma config FUSES_BOOTCFG2_PLL0_CTRL_PLL0_CTRL = 0x3a86U
#pragma config FUSES_BOOTCFG2_PLL0_FBDIV_PLL0_FBDIV = 0x3ffU
#pragma config FUSES_BOOTCFG2_PLL0_REFDIV_PLL0_REFDIV = 0x3fU
#pragma config FUSES_BOOTCFG2_PLL0_POSTDIVA_PLL0_POSTDIVA = 0xbfU
#pragma config FUSES_BOOTCFG2_MCLK_CLKDIV1_MCLK_CLKDIV1 = 0xffffffffU
#pragma config FUSES_BOOTCFG2_GCLK_GENCTRL0_GCLK_GENCTRL0 = 0xffffffffU
#pragma config FUSES_BOOTCFG2_BROM_BOOTCFGCRC0_BROM_BOOTCFGCRC = 0xffffffffU
#pragma config FUSES_BOOTCFG2_BROM_BOOTCFGCRC1_BROM_BOOTCFGCRC = 0xffffffffU
#pragma config FUSES_BOOTCFG2_BROM_BOOTCFGCRC2_BROM_BOOTCFGCRC = 0xffffffffU
#pragma config FUSES_BOOTCFG2_BROM_BOOTCFGCRC3_BROM_BOOTCFGCRC = 0xffffffffU
#pragma config FUSES_BOOTCFG2_BROM_PAGEEND_BROM_PAGEEND = 0xffffffffU




// *****************************************************************************
// *****************************************************************************
// Section: Driver Initialization Data
// *****************************************************************************
// *****************************************************************************
// <editor-fold defaultstate="collapsed" desc="DRV_SDSPI Instance 0 Initialization Data">

/* SDSPI Client Objects Pool */
static DRV_SDSPI_CLIENT_OBJ drvSDSPI0ClientObjPool[DRV_SDSPI_CLIENTS_NUMBER_IDX0];

/* SDSPI Transfer Objects Pool */
static DRV_SDSPI_BUFFER_OBJ drvSDSPI0TransferObjPool[DRV_SDSPI_QUEUE_SIZE_IDX0];

/* SPI PLIB Interface Initialization for SDSPI Driver */
const DRV_SDSPI_PLIB_INTERFACE drvSDSPI0PlibAPI = {

    /* SPI PLIB WriteRead function */
    .writeRead = (DRV_SDSPI_PLIB_WRITEREAD)SERCOM2_SPI_WriteRead,

    /* SPI PLIB Write function */
    .write = (DRV_SDSPI_PLIB_WRITE)SERCOM2_SPI_Write,

    /* SPI PLIB Read function */
    .read = (DRV_SDSPI_PLIB_READ)SERCOM2_SPI_Read,

    /* SPI PLIB Transfer Status function */
    .isTransmitterBusy = (DRV_SPI_PLIB_TRANSMITTER_IS_BUSY)SERCOM2_SPI_IsTransmitterBusy,

    .transferSetup = (DRV_SDSPI_PLIB_SETUP)SERCOM2_SPI_TransferSetup,

    /* SPI PLIB Callback Register */
    .callbackRegister = (DRV_SDSPI_PLIB_CALLBACK_REGISTER)SERCOM2_SPI_CallbackRegister,
};

const uint32_t drvSDSPI0remapDataBits[]= { 0x0, 0x1, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF };
const uint32_t drvSDSPI0remapClockPolarity[] = { 0x0, 0x20000000 };
const uint32_t drvSDSPI0remapClockPhase[] = { 0x10000000, 0x0 };

/* SDSPI Driver Initialization Data */
const DRV_SDSPI_INIT drvSDSPI0InitData =
{
    /* SD Card SPI PLIB API interface*/
    .spiPlib                = &drvSDSPI0PlibAPI,

    .remapDataBits          = drvSDSPI0remapDataBits,

    .remapClockPolarity     = drvSDSPI0remapClockPolarity,

    .remapClockPhase        = drvSDSPI0remapClockPhase,


    /* SDSPI Number of clients */
    .numClients             = DRV_SDSPI_CLIENTS_NUMBER_IDX0,

    /* SDSPI Client Objects Pool */
    .clientObjPool          = (uintptr_t)&drvSDSPI0ClientObjPool[0],

    /* SDSPI Transfer Objects Pool */
    .bufferObjPool          = (uintptr_t)&drvSDSPI0TransferObjPool[0],

    /* SDSPI Transfer Objects Queue Size */
    .bufferObjPoolSize      = DRV_SDSPI_QUEUE_SIZE_IDX0,

    .chipSelectPin          = DRV_SDSPI_CHIP_SELECT_PIN_IDX0,

    .sdcardSpeedHz          = DRV_SDSPI_SPEED_HZ_IDX0,

    .pollingIntervalMs      = DRV_SDSPI_POLLING_INTERVAL_MS_IDX0,

    .writeProtectPin        = SYS_PORT_PIN_NONE,

    .isFsEnabled            = true,

    /* DMA Channel for Transmit */
    .txDMAChannel           = DRV_SDSPI_XMIT_DMA_CH_IDX0,

    /* DMA Channel for Receive */
    .rxDMAChannel           = DRV_SDSPI_RCV_DMA_CH_IDX0,

    /* SPI Transmit Register */
    .txAddress              = (void *)&(SERCOM2_REGS->SPIM.SERCOM_DATA),

    /* SPI Receive Register */
    .rxAddress              = (void *)&(SERCOM2_REGS->SPIM.SERCOM_DATA),
};

// </editor-fold>



// *****************************************************************************
// *****************************************************************************
// Section: System Data
// *****************************************************************************
// *****************************************************************************
/* Structure to hold the object handles for the modules in the system. */
SYSTEM_OBJECTS sysObj;

// *****************************************************************************
// *****************************************************************************
// Section: Library/Stack Initialization Data
// *****************************************************************************
// *****************************************************************************
// <editor-fold defaultstate="collapsed" desc="File System Initialization Data">


const SYS_FS_MEDIA_MOUNT_DATA sysfsMountTable[SYS_FS_VOLUME_NUMBER] =
{
    {NULL}
};

const SYS_FS_FUNCTIONS FatFsFunctions =
{
    .mount             = FATFS_mount,
    .unmount           = FATFS_unmount,
    .open              = FATFS_open,
    .read              = FATFS_read,
    .close             = FATFS_close,
    .seek              = FATFS_lseek,
    .fstat             = FATFS_stat,
    .getlabel          = FATFS_getlabel,
    .currWD            = FATFS_getcwd,
    .getstrn           = FATFS_gets,
    .openDir           = FATFS_opendir,
    .readDir           = FATFS_readdir,
    .closeDir          = FATFS_closedir,
    .chdir             = FATFS_chdir,
    .chdrive           = FATFS_chdrive,
    .write             = FATFS_write,
    .tell              = FATFS_tell,
    .eof               = FATFS_eof,
    .size              = FATFS_size,
    .mkdir             = FATFS_mkdir,
    .remove            = FATFS_unlink,
    .setlabel          = FATFS_setlabel,
    .truncate          = FATFS_truncate,
    .chmode            = FATFS_chmod,
    .chtime            = FATFS_utime,
    .rename            = FATFS_rename,
    .sync              = FATFS_sync,
    .putchr            = FATFS_putc,
    .putstrn           = FATFS_puts,
    .formattedprint    = FATFS_printf,
    .testerror         = FATFS_error,
    .formatDisk        = (FORMAT_DISK)FATFS_mkfs,
    .partitionDisk     = FATFS_fdisk,
    .getCluster        = FATFS_getclusters
};



const SYS_FS_REGISTRATION_TABLE sysFSInit [ SYS_FS_MAX_FILE_SYSTEM_TYPE ] =
{
    {
        .nativeFileSystemType = FAT,
        .nativeFileSystemFunctions = &FatFsFunctions
    },
};


// </editor-fold>



// *****************************************************************************
// *****************************************************************************
// Section: System Initialization
// *****************************************************************************
// *****************************************************************************
// <editor-fold defaultstate="collapsed" desc="SYS_TIME Initialization Data">

const SYS_TIME_PLIB_INTERFACE sysTimePlibAPI = {
    .timerCallbackSet = (SYS_TIME_PLIB_CALLBACK_REGISTER)SYSTICK_TimerCallbackSet,
    .timerStart = (SYS_TIME_PLIB_START)SYSTICK_TimerStart,
    .timerStop = (SYS_TIME_PLIB_STOP)SYSTICK_TimerStop,
    .timerFrequencyGet = (SYS_TIME_PLIB_FREQUENCY_GET)SYSTICK_TimerFrequencyGet,
    .timerInterruptEnable = (SYS_TIME_PLIB_INTERRUPT_ENABLE)SYSTICK_TimerInterruptEnable,
    .timerInterruptDisable = (SYS_TIME_PLIB_INTERRUPT_DISABLE)SYSTICK_TimerInterruptDisable,
    .timerPeriodSet = (SYS_TIME_PLIB_PERIOD_SET)SYSTICK_TimerPeriodSet,
};

const SYS_TIME_INIT sysTimeInitData =
{
    .timePlib = &sysTimePlibAPI,
    .hwTimerIntNum = SysTick_IRQn,
};

// </editor-fold>



// *****************************************************************************
// *****************************************************************************
// Section: Local initialization functions
// *****************************************************************************
// *****************************************************************************



/*******************************************************************************
  Function:
    void SYS_Initialize ( void *data )

  Summary:
    Initializes the board, services, drivers, application and other modules.

  Remarks:
 */

void SYS_Initialize ( void* data )
{
    /* MISRAC 2012 deviation block start */
    /* MISRA C-2012 Rule 2.2 deviated in this file.  Deviation record ID -  H3_MISRAC_2012_R_2_2_DR_1 */

  
    PORT_Initialize();

    CLOCK_Initialize();




    SERCOM2_SPI_Initialize();

    EVSYS_Initialize();

	BSP_Initialize();
	SYSTICK_TimerInitialize();
    DMA0_Initialize();

    PM_Initialize();


    /* Initialize SDSPI0 Driver Instance */
    sysObj.drvSDSPI0 = DRV_SDSPI_Initialize(DRV_SDSPI_INDEX_0, (SYS_MODULE_INIT *)&drvSDSPI0InitData);


    sysObj.sysTime = SYS_TIME_Initialize(SYS_TIME_INDEX_0, (SYS_MODULE_INIT *)&sysTimeInitData);

    /*** File System Service Initialization Code ***/
    SYS_FS_Initialize( (const void *) sysFSInit );


    APP_Initialize();


    NVIC_Initialize();

    /* MISRAC 2012 deviation block end */
}


/*******************************************************************************
 End of File
*/
