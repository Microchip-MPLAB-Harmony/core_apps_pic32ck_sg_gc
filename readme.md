# Harmony 3 Driver, System Services and RTOS Application Examples for PIC32CK GC/SG Family

MPLAB® Harmony 3 is an extension of the MPLAB® ecosystem for creating embedded firmware<br /> solutions for Microchip 32-bit SAM and PIC® microcontroller and microprocessor devices.<br /> Refer to the following links for more information.

-   [Microchip 32-bit MCUs](https://www.microchip.com/design-centers/32-bit)
-   [Microchip 32-bit MPUs](https://www.microchip.com/design-centers/32-bit-mpus)
-   [Microchip MPLAB X IDE](https://www.microchip.com/mplab/mplab-x-ide)
-   [Microchip MPLAB® Harmony](https://www.microchip.com/mplab/mplab-harmony)
-   [Microchip MPLAB® Harmony Pages](https://microchip-mplab-harmony.github.io/)

This repository contains the MPLAB® Harmony 3 driver and system service application<br /> examples for PIC32CK GC/SG family:

-   [Release Notes](release_notes.md)
-   [MPLAB® Harmony License](mplab_harmony_license.md)

To clone or download these applications from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/core_apps_pic32ck_sg_gc) and then click<br /> **Clone** button to clone this repository or download as zip file. This content<br /> can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).


## Contents Summary

|Folder|Description|
|:-----|:----------|
|apps|Contains driver and system service<br /> example applications|

## Code Examples

The following applications are provided to demonstrate the typical or interesting<br /> usage models of one or more peripheral libraries.

|Name|Description|
|----|-----------|
|[Console Debug System Service using UART](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=CORE_APPS_PIC32CK_SG_GC_CONSOLE_DEBUG_SYSTEM_SERVICE_USING_UART&redirect=true)|This<br /> example application demonstrates the UART based console and<br /> debug system service|
|[FAT File System using NVM Media](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=CORE_APPS_PIC32CK_SG_GC_FAT_FILESYSTEM_USING_NVM_MEDIA&redirect=true)|This<br /> application shows an example of implementing a FAT disk in the<br /> device internal Flash memory|
|[FAT File System using SD Card media](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=CORE_APPS_PIC32CK_SG_GC_FAT_FILESYSTEM_USING_SD_CARD_MEDIA&redirect=true)|This<br /> application shows an example of using the MPLAB Harmony File<br /> System to access and modify the contents of a SD card using the<br /> SDSPI driver and the SPI PLIB|
|[FAT File System using SDMMC Media](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=CORE_APPS_PIC32CK_SG_GC_FAT_FILESYSTEM_USING_SDMMC_MEDIA&redirect=true)|This<br /> application shows an example of using the MPLAB Harmony File<br /> System to access and modify the contents of a SD card using the<br /> SDMMC driver|
|[FAT File System using SST26 Media](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=CORE_APPS_PIC32CK_SG_GC_FAT_FILESYSTEM_USING_SST26_MEDIA&redirect=true)|This<br /> application shows an example of using the FAT File System to<br /> access SQI based SST26 flash media|
|[FreeRTOS Basic](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=CORE_APPS_PIC32CK_SG_GC_FREERTOS_BASIC&redirect=true)|This<br /> example application demonstrates context switching between four<br /> tasks of different priorities. Two tasks run periodically while<br /> the other two tasks are event driven|
|[I2C EEPROM AT24 Driver - EEPROM Read Write](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=CORE_APPS_PIC32CK_SG_GC_I2C_EEPROM_AT24_DRIVER_EEPROM_READ_WRITE&redirect=true)|This<br /> example application shows how to use the AT24 driver to perform<br /> read and write operations on AT24 series of EEPROM|
|[I2C Driver Asynchronous - Multi-client](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=CORE_APPS_PIC32CK_SG_GC_I2C_DRIVER_ASYNCHRONOUS_MULTI_CLIENT&redirect=true)|This<br /> example application demonstrates the multi-client feature of the<br /> asynchronous mode of the I2C driver by communicating with an<br /> external EEPROM and a temperature sensor|
|[SPI Driver Asynchronous - Self Loopback Multi Client](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=CORE_APPS_PIC32CK_SG_GC_SPI_DRIVER_ASYNCHRONOUS_SELF_LLOPBACK_MULTI_CLIENT&redirect=true)|This<br /> example demonstrates how to use the SPI driver in asynchronous<br /> mode to achieve self-loop back between multiple clients|
|[SPI Driver Synchronous - Self Loopback Multi Client](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=CORE_APPS_PIC32CK_SG_GC_SPI_DRIVER_SYNCHRONOUS_SELF_LLOPBACK_MULTI_CLIENT&redirect=true)|This<br /> example demonstrates how to use the SPI driver in synchronous<br /> mode to achieve self-loop back between multiple clients in RTOS<br /> environment|
|[SPI EEPROM AT25 Driver - EEPROM Read Write](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=CORE_APPS_PIC32CK_SG_GC_SPI_EEPROM_AT25_DRIVER_EEPROM_READ_WRITE&redirect=true)|This<br /> example application shows how to use the AT25 driver to perform<br /> read and write operations on AT25 series of EEPROM|
|[Time System Service Multi-client](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=CORE_APPS_PIC32CK_SG_GC_TIME_SYSTEM_SERVICE_MULTI_CLIENT&redirect=true)|This<br /> example application demonstrates the multi-client system timer<br /> functionality|
|[TrustZone FreeRTOS Basic](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=CORE_APPS_PIC32CK_SG_GC_TRUSTZONE_FREERTOS_BASIC&redirect=true)|This<br /> example application blinks an LED to show the FreeRTOS threads<br /> that are running in non-secure mode and to indicate<br /> status|
|[USART Driver Asynchronous - USART Echo](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=CORE_APPS_PIC32CK_SG_GC_USART_DRIVER_ASYNCHRONOUS_USART_ECHO&redirect=true)|This<br /> example echoes the received characters over the console using<br /> the USART driver in asynchronous mode|
|[USART Driver Synchronous - USART Echo](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=CORE_APPS_PIC32CK_SG_GC_USART_DRIVER_SYNCHRONOUS_USART_ECHO&redirect=true)|This<br /> example echoes the received characters over the console using<br /> the USART driver in synchronous mode|

