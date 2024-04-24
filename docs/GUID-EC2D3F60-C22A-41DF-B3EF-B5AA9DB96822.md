# FreeRTOS Basic

This example application demonstrates context switching between four tasks of different<br /> priorities. Two tasks run periodically while the other two tasks are event driven.

**Parent topic:**[Harmony 3 Driver, System Services and RTOS Application Examples for PIC32CK GC/SG Family](GUID-CDB24A84-49B8-4114-B4EF-E80CFD24D7D9.md)

## Description

This demonstration creates four tasks each of different priority. Task1 has the<br /> lowest priority, followed by Task2, Task3 and Task4 which has the highest priority.<br /> Task1 and Task2 run periodically.

Task3 blocks until a character is received on UART terminal. Task3 registers a read<br /> callback with the UART PLIB and blocks on a UART receive semaphore. The semaphore is<br /> given from the registered callback which is called when a character is received on<br /> the terminal.

Task4 blocks until a user switch is pressed. Task4 registers a callback for the<br /> switch press event with the PIO peripheral and then blocks on the switch press<br /> semaphore. The semaphore is given from the registered callback which is called when<br /> the switch is pressed.

All the tasks print messages on the UART terminal to indicate tasks entry/exit. Since<br /> all the tasks use the same UART peripheral library, a mutex is used to guard the<br /> shared resource \(UART ring buffer\).

-   **Task1**: Task1 is configured for priority 1 \(lowest of all the application tasks\). The task1 runs for about 100 ticks and then blocks for 10 milliseconds. Each time task1 is run, it prints a message on the UART console “Tsk1-P1 <-“ where, the <- symbol indicates that task1 is running. Just before blocking it prints another message on the UART console “Tsk1-P1 -\>�? where, the -\> symbol indicates that task1 is about to put itself into a blocked state.
-   **Task2**: Task2 is configured for priority 2. The task2 runs for about 10 ticks and then blocks for 250 milliseconds. Each time task2 is run, it prints a message on the UART console “Tsk2-P2 <-“ where, the <- symbol indicates that task2 is running. Just before blocking it prints another message on the UART console “Tsk2-P2 -\>�? where, the -\> symbol indicates that task2 is about to put itself into a blocked state.
-   **Task3**: Task3 is configured for priority 3. It remains blocked on a semaphore which is released when a character is entered on the UART console. Once active, the task reads out the received characters and toggles LED if letter ‘L’ or ‘l’ is pressed. The task then runs for about 50 ticks, before again blocking itself until a new character is received. Each time task3 is run, it prints a message on the UART console “Tsk3-P3 <-“ where, the <- symbol indicates that task2 is running. Just before blocking it prints another message on the UART console “Tsk3-P3 -\>�? where, the -\> symbol indicates that task3 is about to put itself into a blocked state.
-   **Task4**: Task4 is configured for priority 4 \(highest of all the application tasks\). It remains blocked on a semaphore which is released when a user switch is pressed. Once active, the task runs for about 10 ticks, before again blocking itself until the switch is pressed again. Each time task4 is run, it prints a message on the UART console “Tsk4-P4 <-“ where, the <- symbol indicates that task4 is running. Just before blocking it prints another message on the UART console “Tsk4-P4 -\>�? where, the -\> symbol indicates that task4 is about to put itself into a blocked state.

The following figure shows possible context switching between the tasks.

![](GUID-7230D9AB-A7BC-4FB0-B133-8975164EA47D-low.png)

## Downloading and Building the Application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/core_apps_pic32ck_sg_gc) and then<br /> click **Clone** button to clone this repository or download as zip file. This<br /> content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is<br /> **apps/rtos/freertos/basic\_freertos/firmware**.

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

1.  Open the Terminal application \(Ex.:Tera Term\) on the computer.
2.  Connect to the PKOB4 Virtual COM port and configure the serial settings as follows:
    -   Baud : 115200
    -   Data : 8 Bits
    -   Parity : None
    -   Stop : 1 Bit
    -   Flow Control : None
3.  Build and program the application using its IDE.
4.  Observe the following output on the terminal.

    ![](GUID-933F6335-F4B6-4DF3-BBFC-1905C86AB55C-low.png)

5.  Enter any character on the terminal to run task3. Notice how task1 and task2 are pre-empted by task3 as task3 is of higher priority than task1 and task2. Pressing character ‘l’ or “L’ toggles the on board LED. Notice how task1 and task2 are not run when characters are entered continuously on the terminal.

    ![](GUID-CB41520B-AE69-41CA-81A6-B5A9A6B09015-low.png)

    ![](GUID-363150FF-B18F-4C23-90A9-9A28E3CA1C6B-low.png)

6.  Press the user switch on the board to run task4. Notice how task4 preempts all other tasks as it is of highest priority.

    ![](GUID-5E7B7773-DD7F-44B9-9CF3-3090FB966A19-low.png)


Refer to the following table for Switch and LED names:

|Board|Switch Name|LED Name|
|-----|-----------|--------|
|[PIC32CK GC01 Curiosity Ultra Development Board](https://www.microchip.com/en-us/development-tool/ea23j82a)|SW0|LED0|

