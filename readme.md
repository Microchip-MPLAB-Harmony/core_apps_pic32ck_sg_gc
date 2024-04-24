# Harmony 3 Driver, System Services and RTOS Application Examples for PIC32CK GC/SG Family

MPLAB® Harmony 3 is an extension of the MPLAB® ecosystem for creating embedded firmware<br /> solutions for Microchip 32-bit SAM and PIC® microcontroller and microprocessor devices.<br /> Refer to the following links for more information.

-   [Microchip 32-bit MCUs](https://www.microchip.com/design-centers/32-bit)
-   [Microchip 32-bit MPUs](https://www.microchip.com/design-centers/32-bit-mpus)
-   [Microchip MPLAB X IDE](https://www.microchip.com/mplab/mplab-x-ide)
-   [Microchip MPLAB® Harmony](https://www.microchip.com/mplab/mplab-harmony)
-   [Microchip MPLAB® Harmony Pages](https://microchip-mplab-harmony.github.io/)

This repository contains the MPLAB® Harmony 3 driver and system service application<br /> examples for PIC32CK GC/SG family:

-   [Release Notes](./docs/GUID-18B2DC3F-581C-4F04-9121-ADF2D1F24ADD.md)
-   [MPLAB® Harmony License](./docs/GUID-5AE41BEF-D04E-41F6-AA77-5469CF13B183.md)

To clone or download these applications from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/core_apps_pic32ck_sg_gc) and then click<br /> **Clone** button to clone this repository or download as zip file. This content<br /> can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).


## Contents Summary

|Folder|Description|
|:-----|:----------|
|apps|Contains driver and system service<br /> example applications|

## Code Examples

The following applications are provided to demonstrate the typical or interesting<br /> usage models of one or more peripheral libraries.

|Name|Description|
|----|-----------|
|[Console Debug System Service using UART](./docs/GUID-FBAE5B36-1AA6-476F-8AA0-580D0E744C34.md)|This<br /> example application demonstrates the UART based console and<br /> debug system service|
|[FAT File System using NVM Media](./docs/GUID-ECD516C0-34CF-4AA6-AF59-E0CBA1F73C6D.md)|This<br /> application shows an example of implementing a FAT disk in the<br /> device internal Flash memory|
|[FAT File System using SD Card media](./docs/GUID-F4E0FE99-F4C0-42D9-A9E9-BD5D7710FEAF.md)|This<br /> application shows an example of using the MPLAB Harmony File<br /> System to access and modify the contents of a SD card using the<br /> SDSPI driver and the SPI PLIB|
|[FAT File System using SDMMC Media](./docs/GUID-56D766EB-FB9F-43B7-AC20-A2F74F1815F3.md)|This<br /> application shows an example of using the MPLAB Harmony File<br /> System to access and modify the contents of a SD card using the<br /> SDMMC driver|
|[FAT File System using SST26 Media](./docs/GUID-55B701F6-8512-4682-87E0-43FBA75241F3.md)|This<br /> application shows an example of using the FAT File System to<br /> access SQI based SST26 flash media|
|[FreeRTOS Basic](./docs/GUID-EC2D3F60-C22A-41DF-B3EF-B5AA9DB96822.md)|This<br /> example application demonstrates context switching between four<br /> tasks of different priorities. Two tasks run periodically while<br /> the other two tasks are event driven|
|[I2C EEPROM AT24 Driver - EEPROM Read Write](./docs/GUID-33CD8CDB-0540-4AA4-A9C9-B65A516C244E.md)|This<br /> example application shows how to use the AT24 driver to perform<br /> read and write operations on AT24 series of EEPROM|
|[I2C Driver Asynchronous - Multi-client](./docs/GUID-B04B995C-9153-4D22-B3E6-E7F74701326A.md)|This<br /> example application demonstrates the multi-client feature of the<br /> asynchronous mode of the I2C driver by communicating with an<br /> external EEPROM and a temperature sensor|
|[SPI Driver Asynchronous - Self Loopback Multi Client](./docs/GUID-19A81395-C113-407C-9DB3-1D934B806947.md)|This<br /> example demonstrates how to use the SPI driver in asynchronous<br /> mode to achieve self-loop back between multiple clients|
|[SPI Driver Synchronous - Self Loopback Multi Client](./docs/GUID-29CACE5D-97F7-4D17-9F45-79D9CD8EB73D.md)|This<br /> example demonstrates how to use the SPI driver in synchronous<br /> mode to achieve self-loop back between multiple clients in RTOS<br /> environment|
|[SPI EEPROM AT25 Driver - EEPROM Read Write](./docs/GUID-75202664-73A7-4FFD-8809-2F2A857F8A09.md)|This<br /> example application shows how to use the AT25 driver to perform<br /> read and write operations on AT25 series of EEPROM|
|[Time System Service Multi-client](./docs/GUID-7AFD1165-75ED-4696-9FC9-19478FDA2D0F.md)|This<br /> example application demonstrates the multi-client system timer<br /> functionality|
|[TrustZone FreeRTOS Basic](./docs/GUID-3CC939E6-AF1D-484C-9382-4CECB2435DE4.md)|This<br /> example application blinks an LED to show the FreeRTOS threads<br /> that are running in non-secure mode and to indicate<br /> status|
|[USART Driver Asynchronous - USART Echo](./docs/GUID-ABB48252-33BE-45BD-AF7E-65362612A876.md)|This<br /> example echoes the received characters over the console using<br /> the USART driver in asynchronous mode|
|[USART Driver Synchronous - USART Echo](./docs/GUID-553D1AC7-35C0-4759-ABFC-0C3440F7B91B.md)|This<br /> example echoes the received characters over the console using<br /> the USART driver in synchronous mode|

