/***********************************************************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only intended for use with Renesas products.
* No other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all
* applicable laws, including copyright laws. 
* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING THIS SOFTWARE, WHETHER EXPRESS, IMPLIED
* OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
* NON-INFRINGEMENT.  ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED.TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY
* LAW, NEITHER RENESAS ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE LIABLE FOR ANY DIRECT,
* INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR
* ITS AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this software and to discontinue the availability 
* of this software. By using this software, you agree to the additional terms and conditions found by accessing the 
* following link:
* http://www.renesas.com/disclaimer
*
* Copyright (C) 2019 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/

/***********************************************************************************************************************
* File Name        : Config_PORT.c
* Component Version: 2.3.0
* Device(s)        : R5F523W8CxLN
* Description      : This file implements device driver for Config_PORT.
***********************************************************************************************************************/

/***********************************************************************************************************************
Pragma directive
***********************************************************************************************************************/
/* Start user code for pragma. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "r_cg_macrodriver.h"
#include "Config_PORT.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#include "r_cg_userdefine.h"

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
/* Start user code for global. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_Config_PORT_Create
* Description  : This function initializes the PORT
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/

void R_Config_PORT_Create(void)
{
    /* Set PORT1 registers */
    PORT1.ODR1.BYTE = _00_Pm4_CMOS_OUTPUT | _00_Pm6_CMOS_OUTPUT | _00_Pm7_CMOS_OUTPUT;
    PORT1.PCR.BYTE = _20_Pm5_PULLUP_ON;
    PORT1.PMR.BYTE = _00_Pm5_PIN_GPIO | (PORT1.PMR.BYTE & _0C_PMR1_MASK);
    PORT1.PDR.BYTE = _00_Pm5_MODE_INPUT | _03_PDR1_DEFAULT | (PORT1.PDR.BYTE & _0C_PDR1_MASK);

    /* Set PORTB registers */
    PORTB.PODR.BYTE = _01_Pm0_OUTPUT_1;
    PORTB.ODR0.BYTE = _01_Pm0_NCH_OPEN_DRAIN | _00_Pm1_CMOS_OUTPUT | _00_Pm3_CMOS_OUTPUT;
    PORTB.ODR1.BYTE = _00_Pm5_CMOS_OUTPUT | _00_Pm7_CMOS_OUTPUT;
    PORTB.PCR.BYTE = _02_Pm1_PULLUP_ON;
    PORTB.DSCR.BYTE = _00_Pm0_HIDRV_OFF;
    PORTB.PMR.BYTE = _00_Pm0_PIN_GPIO;
    PORTB.PDR.BYTE = _01_Pm0_MODE_OUTPUT | _54_PDRB_DEFAULT;

    /* Set PORTC registers */
    PORTC.PODR.BYTE = _01_Pm0_OUTPUT_1;
    PORTC.ODR0.BYTE = _01_Pm0_NCH_OPEN_DRAIN | _00_Pm2_CMOS_OUTPUT | _00_Pm3_CMOS_OUTPUT;
    PORTC.ODR1.BYTE = _00_Pm4_CMOS_OUTPUT | _00_Pm5_CMOS_OUTPUT | _00_Pm6_CMOS_OUTPUT | _00_Pm7_CMOS_OUTPUT;
    PORTC.DSCR.BYTE = _00_Pm0_HIDRV_OFF;
    PORTC.PMR.BYTE = _00_Pm0_PIN_GPIO;
    PORTC.PDR.BYTE = _01_Pm0_MODE_OUTPUT | _02_PDRC_DEFAULT;

    R_Config_PORT_Create_UserInit();
}

/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
