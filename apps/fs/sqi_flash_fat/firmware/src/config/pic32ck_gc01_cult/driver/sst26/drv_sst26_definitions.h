/*******************************************************************************
  SST26 Driver Definitions Header File

  Company:
    Microchip Technology Inc.

  File Name:
    drv_sst26_definitions.h

  Summary:
    SST26 Driver Definitions Header File

  Description:
    This file provides implementation-specific definitions for the SST26
    driver's system interface.
*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2019 Microchip Technology Inc. and its subsidiaries.
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
//DOM-IGNORE-END

#ifndef DRV_SST26_DEFINITIONS_H
#define DRV_SST26_DEFINITIONS_H

// *****************************************************************************
// *****************************************************************************
// Section: File includes
// *****************************************************************************
// *****************************************************************************

#include "system/system.h"
#include "driver/driver.h"
#include "peripheral/sqi/plib_sqi.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
    extern "C" {
#endif
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: Data Types
// *****************************************************************************
// *****************************************************************************

/* SQI PLIB API Set

  Summary:
  The set of PLIB APIs used by the SST26 driver.

  Description:
  The API set holds the function names available at the PLIb level for the
  corresponding functionality. Driver may call these functions to make use of
  the features provided by the PLIB.

  Remarks:
    None.
*/

/* Pointer to perform DMA Transfer with SQI PLIB. */
typedef void (*DRV_SST26_PLIB_DMA_TRANSFER)( sqi_dma_desc_t *sqiDmaDesc );

/* Pointer to Register event handler with SQI PLIB. */
typedef void (*DRV_SST26_PLIB_REGISTER_CALLBACK)( SQI_EVENT_HANDLER event_handler, uintptr_t context );

typedef struct
{
    DRV_SST26_PLIB_DMA_TRANSFER DMATransfer;

    DRV_SST26_PLIB_REGISTER_CALLBACK RegisterCallback;
} DRV_SST26_PLIB_INTERFACE;

/* SST26 Driver Initialization Data Declaration */

typedef struct
{
    /* Identifies the PLIB API set to be used by the driver to access the
     * peripheral. */
    const DRV_SST26_PLIB_INTERFACE *sst26Plib;
} DRV_SST26_INIT;

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END


#endif // #ifndef DRV_SST26_DEFINITIONS_H
