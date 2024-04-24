# FAT File System using NVM Media

This application shows an example of implementing a FAT disk in the device internal Flash<br /> memory.

**Parent topic:**[Harmony 3 Driver, System Services and RTOS Application Examples for PIC32CK GC/SG Family](GUID-CDB24A84-49B8-4114-B4EF-E80CFD24D7D9.md)

## Description

### File System Operations on NVM:

-   Application places a FAT disk image consisting of a Master Boot Record \(MBR\) sector, Logical Boot Sector, File allocation Table, and Root Directory Area in the internal Flash memory \(NVM\)
-   During execution, the application first opens an existing file named **FILE.TXT** and performs following file system related operations:
    -   **SYS\_FS\_FileStat**
    -   **SYS\_FS\_FileSize**
    -   **SYS\_FS\_FileSeek**
    -   **SYS\_FS\_FileEOF**
-   It tries to read the file and checks if string **â€œDataâ€?** is present. If present it continues to next step or it fails the application
-   Finally, the string **â€œHello Worldâ€?** is written to this file. The string is then read and compared with the string that was written to the file. If the string compare is successful, An LED indication is provided

### File System Layer Uses:

-   Memory driver to communicate with underlying NVM media

## Downloading and Building the Application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/core_apps_pic32ck_sg_gc) and then<br /> click **Clone** button to clone this repository or download as zip file. This<br /> content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is **apps/fs/nvm\_fat/firmware**.

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

-   Connect the Debug USB port on the board to the computer using a micro USB cable

## Running the Application

1.  Build and program the application using its IDE
2.  Press Switch to start the file operations
3.  The LED is turned ON when the File **FILE.TXT** has the app data **â€œHello Worldâ€?** written in it

Refer to the following table for Switch and LED names:

|Board|Switch Name|LED Name|
|-----|-----------|--------|
|[PIC32CK GC01 Curiosity Ultra Development Board](https://www.microchip.com/en-us/development-tool/ea23j82a)|SW0|LED0|

