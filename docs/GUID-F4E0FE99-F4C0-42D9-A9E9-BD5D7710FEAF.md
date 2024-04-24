# FAT File System using SD Card media

This application shows an example of using the MPLAB Harmony File System to access and<br /> modify the contents of a SD card using the SDSPI driver and the SPI PLIB.

**Parent topic:**[Harmony 3 Driver, System Services and RTOS Application Examples for PIC32CK GC/SG Family](GUID-CDB24A84-49B8-4114-B4EF-E80CFD24D7D9.md)

## Description

### File System Operations on the SD Card:

-   The application opens a file named **FILE\_TOO\_LONG\_NAME\_EXAMPLE\_123.JPG** on the SD card
-   Reads the content of the file and creates a directory named **Dir1**
-   Inside the directory, writes the copied content into another file **Dir1/FILE\_TOO\_LONG\_NAME\_EXAMPLE\_123.JPG**

The image file could be any arbitrary JPEG \(image\) file chosen by the user and<br /> then renamed to\*\* FILE\_TOO\_LONG\_NAME\_EXAMPLE\_123.JPG**.The reason for choosing a JPEG file for test purposes is that the duplicate file, \*\*Dir1/FILE\_TOO\_LONG\_NAME\_EXAMPLE\_123.JPG** created by the demonstration<br /> could be easily verified for correctness.

If the new file inside **Dir1** opens for viewing on the computer and matches<br /> to original image, the test is deemed to have passed. Otherwise, if the file<br /> does not open \(i.e., is corrupted\), the test will be considered to have<br /> failed.

**Note:** Since the application creates a directory named **Dir1**, it is important that the a folder with the same name does not exist on the SD card. If a directory named **Dir1** is already present on the SD card, the application will fail.

### File System Layer Uses:

SDSPI Driver to communicate to SD Card over SPI interface.

## Downloading and Building the Application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/core_apps_pic32ck_sg_gc) and then<br /> click **Clone** button to clone this repository or download as zip file. This<br /> content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is<br /> **apps/fs/sdspi\_fat/firmware**.

To build the application, refer to the following table and open the project using its<br /> IDE.

|Project Name|Description|
|------------|-----------|
|pic32ck\_gc01\_cult.X|MPLABX project for [PIC32CK GC01 Curiosity Ultra Development Board](https://www.microchip.com/en-us/development-tool/ea23j82a)|

## Setting Up the Hardware

The following table shows the target hardware for the application projects.

|Project Name|Description|
|------------|-----------|
|pic32ck\_gc01\_cult.X|[PIC32CK GC01 Curiosity Ultra Development Board](https://www.microchip.com/en-us/development-tool/ea23j82a)|

### Setting Up PIC32CK GC01 Curiosity Ultra Development Board

-   To run the demo, the following additional hardware are required:
    -   [micro-sd Click](https://www.mikroe.com/microsd-click) board
    -   One micro-sd card
-   Create a new JPEG file in the SD Card with name **FILE\_TOO\_LONG\_NAME\_EXAMPLE\_123.JPG**
-   Insert the micro-SD Card in the [micro-sd Click](https://www.mikroe.com/microsd-click) board
-   Install the [micro-sd Click](https://www.mikroe.com/microsd-click) board on to the mikroBUS header of [PIC32CK GC01 Curiosity Ultra Development Board](https://www.microchip.com/en-us/development-tool/ea23j82a)
-   Connect the Debug USB port on the board to the computer using a micro USB cable

## Running the Application

1.  Build and program the application using its IDE
2.  Press the switch to start the application
3.  The LED is turned ON if there was no error during creating the directory and copying the file into it

    Refer to the following table for Switch and LED<br /> names:

    |Board|Switch Name|LED Name|
    |-----|-----------|--------|
    |[PIC32CK GC01 Curiosity Ultra Development Board](https://www.microchip.com/en-us/development-tool/ea23j82a)|SW0|LED0|

4.  If LED is ON, Insert the SD Card on to your host PC
5.  SD Card should have the file **Dir1/FILE\_TOO\_LONG\_NAME\_EXAMPLE\_123.JPG** and should match the original image

