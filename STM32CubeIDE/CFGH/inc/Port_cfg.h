/*****************************************************************************
* FileName     : Port_cfg.h
* Author       : &{user}
* Created      : Jan 16, 2022
* Description  :
*
*
*****************************************************************************/
#ifndef PORT_CFG_H_
#define PORT_CFG_H_

#include "stdint.h"
#include "STM32F303RET6.h"

/****************************************************************************
***************************** PORTS CONFIGURATIONS***************************
*****************************************************************************/
#define PORT_CFG_PORT_A_ENABLE		(STD_ON)
#define PORT_CFG_PORT_B_ENABLE		(STD_OFF)
#define PORT_CFG_PORT_C_ENABLE		(STD_ON)
#define PORT_CFG_PORT_D_ENABLE		(STD_OFF)
#define PORT_CFG_PORT_E_ENABLE		(STD_OFF)
#define PORT_CFG_PORT_F_ENABLE		(STD_OFF)
#define PORT_CFG_PORT_G_ENABLE		(STD_OFF)
#define PORT_CFG_PORT_H_ENABLE		(STD_OFF)

/****************************************************************************
***************************** PORT A CONFIGURATIONS**************************
*****************************************************************************/


#if(PORT_CFG_PORT_A_ENABLE == STD_ON)
/* PORT A - Pin 0 - Configurations */
#define PORT_CFG_PORT_A_PIN_0_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines Port A Pin 0 Mode */
#define PORT_CFG_PORT_A_PIN_0_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines Port A Pin 0 Output Type */
#define PORT_CFG_PORT_A_PIN_0_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines Port A Pin 0 Pull Type */
#define PORT_CFG_PORT_A_PIN_0_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines Port A Pin 0 Speed */
#define PORT_CFG_PORT_A_PIN_0_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines Port A Pin 0 Alternate Functionality */

/* PORT A - Pin 1 - Configurations */
#define PORT_CFG_PORT_A_PIN_1_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines Port A Pin 1 Mode */
#define PORT_CFG_PORT_A_PIN_1_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines Port A Pin 1 Output Type */
#define PORT_CFG_PORT_A_PIN_1_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines Port A Pin 1 Pull Type */
#define PORT_CFG_PORT_A_PIN_1_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines Port A Pin 1 Speed */
#define PORT_CFG_PORT_A_PIN_1_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines Port A Pin 1 Alternate Functionality */

/* PORT A - Pin 2 - Configurations */
#define PORT_CFG_PORT_A_PIN_2_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines Port A Pin 2 Mode */
#define PORT_CFG_PORT_A_PIN_2_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines Port A Pin 2 Output Type */
#define PORT_CFG_PORT_A_PIN_2_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines Port A Pin 2 Pull Type */
#define PORT_CFG_PORT_A_PIN_2_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines Port A Pin 2 Speed */
#define PORT_CFG_PORT_A_PIN_2_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines Port A Pin 2 Alternate Functionality */

/* PORT A - Pin 3 - Configurations */
#define PORT_CFG_PORT_A_PIN_3_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines Port A Pin 3 Mode */
#define PORT_CFG_PORT_A_PIN_3_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines Port A Pin 3 Output Type */
#define PORT_CFG_PORT_A_PIN_3_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines Port A Pin 3 Pull Type */
#define PORT_CFG_PORT_A_PIN_3_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines Port A Pin 3 Speed */
#define PORT_CFG_PORT_A_PIN_3_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines Port A Pin 3 Alternate Functionality */

/* PORT A - Pin 4 - Configurations */
#define PORT_CFG_PORT_A_PIN_4_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines Port A Pin 4 Mode */
#define PORT_CFG_PORT_A_PIN_4_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines Port A Pin 4 Output Type */
#define PORT_CFG_PORT_A_PIN_4_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines Port A Pin 4 Pull Type */
#define PORT_CFG_PORT_A_PIN_4_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines Port A Pin 4 Speed */
#define PORT_CFG_PORT_A_PIN_4_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines Port A Pin 4 Alternate Functionality */

/* PORT A - Pin 5 - Configurations */
#define PORT_CFG_PORT_A_PIN_5_MODE				(PORT_CONST_PORT_PIN_MODE_OUTPUT)		/* Defines Port A Pin 5 Mode */
#define PORT_CFG_PORT_A_PIN_5_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines Port A Pin 5 Output Type */
#define PORT_CFG_PORT_A_PIN_5_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines Port A Pin 5 Pull Type */
#define PORT_CFG_PORT_A_PIN_5_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines Port A Pin 5 Speed */
#define PORT_CFG_PORT_A_PIN_5_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines Port A Pin 5 Alternate Functionality */

/* PORT A - Pin 6 - Configurations */
#define PORT_CFG_PORT_A_PIN_6_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines Port A Pin 6 Mode */
#define PORT_CFG_PORT_A_PIN_6_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines Port A Pin 6 Output Type */
#define PORT_CFG_PORT_A_PIN_6_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines Port A Pin 6 Pull Type */
#define PORT_CFG_PORT_A_PIN_6_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines Port A Pin 6 Speed */
#define PORT_CFG_PORT_A_PIN_6_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines Port A Pin 6 Alternate Functionality */

/* PORT A - Pin 7 - Configurations */
#define PORT_CFG_PORT_A_PIN_7_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines Port A Pin 7 Mode */
#define PORT_CFG_PORT_A_PIN_7_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines Port A Pin 7 Output Type */
#define PORT_CFG_PORT_A_PIN_7_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines Port A Pin 7 Pull Type */
#define PORT_CFG_PORT_A_PIN_7_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines Port A Pin 7 Speed */
#define PORT_CFG_PORT_A_PIN_7_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines Port A Pin 7 Alternate Functionality */

/* PORT A - Pin 8 - Configurations */
#define PORT_CFG_PORT_A_PIN_8_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines Port A Pin 8 Mode */
#define PORT_CFG_PORT_A_PIN_8_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines Port A Pin 8 Output Type */
#define PORT_CFG_PORT_A_PIN_8_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines Port A Pin 8 Pull Type */
#define PORT_CFG_PORT_A_PIN_8_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines Port A Pin 8 Speed */
#define PORT_CFG_PORT_A_PIN_8_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines Port A Pin 8 Alternate Functionality */

/* PORT A - Pin 9 - Configurations */
#define PORT_CFG_PORT_A_PIN_9_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines Port A Pin 9 Mode */
#define PORT_CFG_PORT_A_PIN_9_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines Port A Pin 9 Output Type */
#define PORT_CFG_PORT_A_PIN_9_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines Port A Pin 9 Pull Type */
#define PORT_CFG_PORT_A_PIN_9_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines Port A Pin 9 Speed */
#define PORT_CFG_PORT_A_PIN_9_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines Port A Pin 9 Alternate Functionality */

/* PORT A - Pin 10 - Configurations */
#define PORT_CFG_PORT_A_PIN_10_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines Port A Pin 10 Mode */
#define PORT_CFG_PORT_A_PIN_10_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines Port A Pin 10 Output Type */
#define PORT_CFG_PORT_A_PIN_10_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines Port A Pin 10 Pull Type */
#define PORT_CFG_PORT_A_PIN_10_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines Port A Pin 10 Speed */
#define PORT_CFG_PORT_A_PIN_10_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines Port A Pin 10 Alternate Functionality */

/* PORT A - Pin 11 - Configurations */
#define PORT_CFG_PORT_A_PIN_11_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines Port A Pin 11 Mode */
#define PORT_CFG_PORT_A_PIN_11_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines Port A Pin 11 Output Type */
#define PORT_CFG_PORT_A_PIN_11_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines Port A Pin 11 Pull Type */
#define PORT_CFG_PORT_A_PIN_11_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines Port A Pin 11 Speed */
#define PORT_CFG_PORT_A_PIN_11_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines Port A Pin 11 Alternate Functionality */

/* PORT A - Pin 12 - Configurations */
#define PORT_CFG_PORT_A_PIN_12_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines Port A Pin 12 Mode */
#define PORT_CFG_PORT_A_PIN_12_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines Port A Pin 12 Output Type */
#define PORT_CFG_PORT_A_PIN_12_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines Port A Pin 12 Pull Type */
#define PORT_CFG_PORT_A_PIN_12_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines Port A Pin 12 Speed */
#define PORT_CFG_PORT_A_PIN_12_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines Port A Pin 12 Alternate Functionality */

/* PORT A - Pin 13 - Configurations */
#define PORT_CFG_PORT_A_PIN_13_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines Port A Pin 13 Mode */
#define PORT_CFG_PORT_A_PIN_13_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines Port A Pin 13 Output Type */
#define PORT_CFG_PORT_A_PIN_13_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines Port A Pin 13 Pull Type */
#define PORT_CFG_PORT_A_PIN_13_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines Port A Pin 13 Speed */
#define PORT_CFG_PORT_A_PIN_13_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines Port A Pin 13 Alternate Functionality */

/* PORT A - Pin 14 - Configurations */
#define PORT_CFG_PORT_A_PIN_14_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines Port A Pin 14 Mode */
#define PORT_CFG_PORT_A_PIN_14_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines Port A Pin 14 Output Type */
#define PORT_CFG_PORT_A_PIN_14_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines Port A Pin 14 Pull Type */
#define PORT_CFG_PORT_A_PIN_14_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines Port A Pin 14 Speed */
#define PORT_CFG_PORT_A_PIN_14_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines Port A Pin 14 Alternate Functionality */

/* PORT A - Pin 15 - Configurations */
#define PORT_CFG_PORT_A_PIN_15_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines Port A Pin 15 Mode */
#define PORT_CFG_PORT_A_PIN_15_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines Port A Pin 15 Output Type */
#define PORT_CFG_PORT_A_PIN_15_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines Port A Pin 15 Pull Type */
#define PORT_CFG_PORT_A_PIN_15_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines Port A Pin 15 Speed */
#define PORT_CFG_PORT_A_PIN_15_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines Port A Pin 15 Alternate Functionality */

#endif /* End of #if(PORT_CFG_PORT_A_ENABLE == STD_ON) */

/****************************************************************************
***************************** PORT B CONFIGURATIONS**************************
*****************************************************************************/

#if(PORT_CFG_PORT_B_ENABLE == STD_ON)
/* PORT B - Pin 0 - Configurations */
#define PORT_CFG_PORT_B_PIN_0_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT B Pin 0 Mode */
#define PORT_CFG_PORT_B_PIN_0_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT B Pin 0 Output Type */
#define PORT_CFG_PORT_B_PIN_0_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT B Pin 0 Pull Type */
#define PORT_CFG_PORT_B_PIN_0_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT B Pin 0 Speed */
#define PORT_CFG_PORT_B_PIN_0_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT B Pin 0 Alternate Functionality */

/* PORT B - Pin 1 - Configurations */
#define PORT_CFG_PORT_B_PIN_1_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT B Pin 1 Mode */
#define PORT_CFG_PORT_B_PIN_1_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT B Pin 1 Output Type */
#define PORT_CFG_PORT_B_PIN_1_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT B Pin 1 Pull Type */
#define PORT_CFG_PORT_B_PIN_1_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT B Pin 1 Speed */
#define PORT_CFG_PORT_B_PIN_1_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT B Pin 1 Alternate Functionality */

/* PORT B - Pin 2 - Configurations */
#define PORT_CFG_PORT_B_PIN_2_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT B Pin 2 Mode */
#define PORT_CFG_PORT_B_PIN_2_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT B Pin 2 Output Type */
#define PORT_CFG_PORT_B_PIN_2_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT B Pin 2 Pull Type */
#define PORT_CFG_PORT_B_PIN_2_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT B Pin 2 Speed */
#define PORT_CFG_PORT_B_PIN_2_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT B Pin 2 Alternate Functionality */

/* PORT B - Pin 3 - Configurations */
#define PORT_CFG_PORT_B_PIN_3_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT B Pin 3 Mode */
#define PORT_CFG_PORT_B_PIN_3_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT B Pin 3 Output Type */
#define PORT_CFG_PORT_B_PIN_3_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT B Pin 3 Pull Type */
#define PORT_CFG_PORT_B_PIN_3_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT B Pin 3 Speed */
#define PORT_CFG_PORT_B_PIN_3_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT B Pin 3 Alternate Functionality */

/* PORT B - Pin 4 - Configurations */
#define PORT_CFG_PORT_B_PIN_4_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT B Pin 4 Mode */
#define PORT_CFG_PORT_B_PIN_4_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT B Pin 4 Output Type */
#define PORT_CFG_PORT_B_PIN_4_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT B Pin 4 Pull Type */
#define PORT_CFG_PORT_B_PIN_4_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT B Pin 4 Speed */
#define PORT_CFG_PORT_B_PIN_4_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT B Pin 4 Alternate Functionality */

/* PORT B - Pin 5 - Configurations */
#define PORT_CFG_PORT_B_PIN_5_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT B Pin 5 Mode */
#define PORT_CFG_PORT_B_PIN_5_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT B Pin 5 Output Type */
#define PORT_CFG_PORT_B_PIN_5_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT B Pin 5 Pull Type */
#define PORT_CFG_PORT_B_PIN_5_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT B Pin 5 Speed */
#define PORT_CFG_PORT_B_PIN_5_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT B Pin 5 Alternate Functionality */

/* PORT B - Pin 6 - Configurations */
#define PORT_CFG_PORT_B_PIN_6_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT B Pin 6 Mode */
#define PORT_CFG_PORT_B_PIN_6_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT B Pin 6 Output Type */
#define PORT_CFG_PORT_B_PIN_6_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT B Pin 6 Pull Type */
#define PORT_CFG_PORT_B_PIN_6_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT B Pin 6 Speed */
#define PORT_CFG_PORT_B_PIN_6_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT B Pin 6 Alternate Functionality */

/* PORT B - Pin 7 - Configurations */
#define PORT_CFG_PORT_B_PIN_7_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT B Pin 7 Mode */
#define PORT_CFG_PORT_B_PIN_7_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT B Pin 7 Output Type */
#define PORT_CFG_PORT_B_PIN_7_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT B Pin 7 Pull Type */
#define PORT_CFG_PORT_B_PIN_7_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT B Pin 7 Speed */
#define PORT_CFG_PORT_B_PIN_7_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT B Pin 7 Alternate Functionality */

/* PORT B - Pin 8 - Configurations */
#define PORT_CFG_PORT_B_PIN_8_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT B Pin 8 Mode */
#define PORT_CFG_PORT_B_PIN_8_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT B Pin 8 Output Type */
#define PORT_CFG_PORT_B_PIN_8_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT B Pin 8 Pull Type */
#define PORT_CFG_PORT_B_PIN_8_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT B Pin 8 Speed */
#define PORT_CFG_PORT_B_PIN_8_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT B Pin 8 Alternate Functionality */

/* PORT B - Pin 9 - Configurations */
#define PORT_CFG_PORT_B_PIN_9_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT B Pin 9 Mode */
#define PORT_CFG_PORT_B_PIN_9_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT B Pin 9 Output Type */
#define PORT_CFG_PORT_B_PIN_9_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT B Pin 9 Pull Type */
#define PORT_CFG_PORT_B_PIN_9_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT B Pin 9 Speed */
#define PORT_CFG_PORT_B_PIN_9_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT B Pin 9 Alternate Functionality */

/* PORT B - Pin 10 - Configurations */
#define PORT_CFG_PORT_B_PIN_10_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT B Pin 10 Mode */
#define PORT_CFG_PORT_B_PIN_10_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT B Pin 10 Output Type */
#define PORT_CFG_PORT_B_PIN_10_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT B Pin 10 Pull Type */
#define PORT_CFG_PORT_B_PIN_10_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT B Pin 10 Speed */
#define PORT_CFG_PORT_B_PIN_10_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT B Pin 10 Alternate Functionality */

/* PORT B - Pin 11 - Configurations */
#define PORT_CFG_PORT_B_PIN_11_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT B Pin 11 Mode */
#define PORT_CFG_PORT_B_PIN_11_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT B Pin 11 Output Type */
#define PORT_CFG_PORT_B_PIN_11_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT B Pin 11 Pull Type */
#define PORT_CFG_PORT_B_PIN_11_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT B Pin 11 Speed */
#define PORT_CFG_PORT_B_PIN_11_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT B Pin 11 Alternate Functionality */

/* PORT B - Pin 12 - Configurations */
#define PORT_CFG_PORT_B_PIN_12_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT B Pin 12 Mode */
#define PORT_CFG_PORT_B_PIN_12_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT B Pin 12 Output Type */
#define PORT_CFG_PORT_B_PIN_12_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT B Pin 12 Pull Type */
#define PORT_CFG_PORT_B_PIN_12_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT B Pin 12 Speed */
#define PORT_CFG_PORT_B_PIN_12_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT B Pin 12 Alternate Functionality */

/* PORT B - Pin 13 - Configurations */
#define PORT_CFG_PORT_B_PIN_13_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT B Pin 13 Mode */
#define PORT_CFG_PORT_B_PIN_13_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT B Pin 13 Output Type */
#define PORT_CFG_PORT_B_PIN_13_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT B Pin 13 Pull Type */
#define PORT_CFG_PORT_B_PIN_13_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT B Pin 13 Speed */
#define PORT_CFG_PORT_B_PIN_13_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT B Pin 13 Alternate Functionality */

/* PORT B - Pin 14 - Configurations */
#define PORT_CFG_PORT_B_PIN_14_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT B Pin 14 Mode */
#define PORT_CFG_PORT_B_PIN_14_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT B Pin 14 Output Type */
#define PORT_CFG_PORT_B_PIN_14_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT B Pin 14 Pull Type */
#define PORT_CFG_PORT_B_PIN_14_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT B Pin 14 Speed */
#define PORT_CFG_PORT_B_PIN_14_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT B Pin 14 Alternate Functionality */

/* PORT B - Pin 15 - Configurations */
#define PORT_CFG_PORT_B_PIN_15_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT B Pin 15 Mode */
#define PORT_CFG_PORT_B_PIN_15_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT B Pin 15 Output Type */
#define PORT_CFG_PORT_B_PIN_15_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT B Pin 15 Pull Type */
#define PORT_CFG_PORT_B_PIN_15_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT B Pin 15 Speed */
#define PORT_CFG_PORT_B_PIN_15_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT B Pin 15 Alternate Functionality */

#endif /* End of #if(PORT_CFG_PORT_B_ENABLE == STD_ON) */

/****************************************************************************
***************************** PORT C CONFIGURATIONS**************************
*****************************************************************************/

#if(PORT_CFG_PORT_C_ENABLE == STD_ON)

/* PORT C - Pin 0 - Configurations */
#define PORT_CFG_PORT_C_PIN_0_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT C Pin 0 Mode */
#define PORT_CFG_PORT_C_PIN_0_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT C Pin 0 Output Type */
#define PORT_CFG_PORT_C_PIN_0_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT C Pin 0 Pull Type */
#define PORT_CFG_PORT_C_PIN_0_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT C Pin 0 Speed */
#define PORT_CFG_PORT_C_PIN_0_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT C Pin 0 Alternate Functionality */

/* PORT C - Pin 1 - Configurations */
#define PORT_CFG_PORT_C_PIN_1_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT C Pin 1 Mode */
#define PORT_CFG_PORT_C_PIN_1_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT C Pin 1 Output Type */
#define PORT_CFG_PORT_C_PIN_1_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT C Pin 1 Pull Type */
#define PORT_CFG_PORT_C_PIN_1_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT C Pin 1 Speed */
#define PORT_CFG_PORT_C_PIN_1_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT C Pin 1 Alternate Functionality */

/* PORT C - Pin 2 - Configurations */
#define PORT_CFG_PORT_C_PIN_2_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT C Pin 2 Mode */
#define PORT_CFG_PORT_C_PIN_2_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT C Pin 2 Output Type */
#define PORT_CFG_PORT_C_PIN_2_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT C Pin 2 Pull Type */
#define PORT_CFG_PORT_C_PIN_2_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT C Pin 2 Speed */
#define PORT_CFG_PORT_C_PIN_2_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT C Pin 2 Alternate Functionality */

/* PORT C - Pin 3 - Configurations */
#define PORT_CFG_PORT_C_PIN_3_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT C Pin 3 Mode */
#define PORT_CFG_PORT_C_PIN_3_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT C Pin 3 Output Type */
#define PORT_CFG_PORT_C_PIN_3_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT C Pin 3 Pull Type */
#define PORT_CFG_PORT_C_PIN_3_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT C Pin 3 Speed */
#define PORT_CFG_PORT_C_PIN_3_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT C Pin 3 Alternate Functionality */

/* PORT C - Pin 4 - Configurations */
#define PORT_CFG_PORT_C_PIN_4_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT C Pin 4 Mode */
#define PORT_CFG_PORT_C_PIN_4_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT C Pin 4 Output Type */
#define PORT_CFG_PORT_C_PIN_4_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT C Pin 4 Pull Type */
#define PORT_CFG_PORT_C_PIN_4_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT C Pin 4 Speed */
#define PORT_CFG_PORT_C_PIN_4_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT C Pin 4 Alternate Functionality */

/* PORT C - Pin 5 - Configurations */
#define PORT_CFG_PORT_C_PIN_5_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT C Pin 5 Mode */
#define PORT_CFG_PORT_C_PIN_5_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT C Pin 5 Output Type */
#define PORT_CFG_PORT_C_PIN_5_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT C Pin 5 Pull Type */
#define PORT_CFG_PORT_C_PIN_5_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT C Pin 5 Speed */
#define PORT_CFG_PORT_C_PIN_5_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT C Pin 5 Alternate Functionality */

/* PORT C - Pin 6 - Configurations */
#define PORT_CFG_PORT_C_PIN_6_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT C Pin 6 Mode */
#define PORT_CFG_PORT_C_PIN_6_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT C Pin 6 Output Type */
#define PORT_CFG_PORT_C_PIN_6_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT C Pin 6 Pull Type */
#define PORT_CFG_PORT_C_PIN_6_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT C Pin 6 Speed */
#define PORT_CFG_PORT_C_PIN_6_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT C Pin 6 Alternate Functionality */

/* PORT C - Pin 7 - Configurations */
#define PORT_CFG_PORT_C_PIN_7_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT C Pin 7 Mode */
#define PORT_CFG_PORT_C_PIN_7_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT C Pin 7 Output Type */
#define PORT_CFG_PORT_C_PIN_7_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT C Pin 7 Pull Type */
#define PORT_CFG_PORT_C_PIN_7_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT C Pin 7 Speed */
#define PORT_CFG_PORT_C_PIN_7_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT C Pin 7 Alternate Functionality */

/* PORT C - Pin 8 - Configurations */
#define PORT_CFG_PORT_C_PIN_8_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT C Pin 8 Mode */
#define PORT_CFG_PORT_C_PIN_8_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT C Pin 8 Output Type */
#define PORT_CFG_PORT_C_PIN_8_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT C Pin 8 Pull Type */
#define PORT_CFG_PORT_C_PIN_8_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT C Pin 8 Speed */
#define PORT_CFG_PORT_C_PIN_8_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT C Pin 8 Alternate Functionality */

/* PORT C - Pin 9 - Configurations */
#define PORT_CFG_PORT_C_PIN_9_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT C Pin 9 Mode */
#define PORT_CFG_PORT_C_PIN_9_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT C Pin 9 Output Type */
#define PORT_CFG_PORT_C_PIN_9_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT C Pin 9 Pull Type */
#define PORT_CFG_PORT_C_PIN_9_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT C Pin 9 Speed */
#define PORT_CFG_PORT_C_PIN_9_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT C Pin 9 Alternate Functionality */

/* PORT C - Pin 10 - Configurations */
#define PORT_CFG_PORT_C_PIN_10_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT C Pin 10 Mode */
#define PORT_CFG_PORT_C_PIN_10_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT C Pin 10 Output Type */
#define PORT_CFG_PORT_C_PIN_10_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT C Pin 10 Pull Type */
#define PORT_CFG_PORT_C_PIN_10_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT C Pin 10 Speed */
#define PORT_CFG_PORT_C_PIN_10_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT C Pin 10 Alternate Functionality */

/* PORT C - Pin 11 - Configurations */
#define PORT_CFG_PORT_C_PIN_11_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT C Pin 11 Mode */
#define PORT_CFG_PORT_C_PIN_11_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT C Pin 11 Output Type */
#define PORT_CFG_PORT_C_PIN_11_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT C Pin 11 Pull Type */
#define PORT_CFG_PORT_C_PIN_11_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT C Pin 11 Speed */
#define PORT_CFG_PORT_C_PIN_11_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT C Pin 11 Alternate Functionality */

/* PORT C - Pin 12 - Configurations */
#define PORT_CFG_PORT_C_PIN_12_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT C Pin 12 Mode */
#define PORT_CFG_PORT_C_PIN_12_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT C Pin 12 Output Type */
#define PORT_CFG_PORT_C_PIN_12_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT C Pin 12 Pull Type */
#define PORT_CFG_PORT_C_PIN_12_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT C Pin 12 Speed */
#define PORT_CFG_PORT_C_PIN_12_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT C Pin 12 Alternate Functionality */

/* PORT C - Pin 13 - Configurations */
#define PORT_CFG_PORT_C_PIN_13_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT C Pin 13 Mode */
#define PORT_CFG_PORT_C_PIN_13_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT C Pin 13 Output Type */
#define PORT_CFG_PORT_C_PIN_13_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT C Pin 13 Pull Type */
#define PORT_CFG_PORT_C_PIN_13_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT C Pin 13 Speed */
#define PORT_CFG_PORT_C_PIN_13_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT C Pin 13 Alternate Functionality */

/* PORT C - Pin 14 - Configurations */
#define PORT_CFG_PORT_C_PIN_14_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT C Pin 14 Mode */
#define PORT_CFG_PORT_C_PIN_14_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT C Pin 14 Output Type */
#define PORT_CFG_PORT_C_PIN_14_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT C Pin 14 Pull Type */
#define PORT_CFG_PORT_C_PIN_14_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT C Pin 14 Speed */
#define PORT_CFG_PORT_C_PIN_14_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT C Pin 14 Alternate Functionality */

/* PORT C - Pin 15 - Configurations */
#define PORT_CFG_PORT_C_PIN_15_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT C Pin 15 Mode */
#define PORT_CFG_PORT_C_PIN_15_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT C Pin 15 Output Type */
#define PORT_CFG_PORT_C_PIN_15_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT C Pin 15 Pull Type */
#define PORT_CFG_PORT_C_PIN_15_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT C Pin 15 Speed */
#define PORT_CFG_PORT_C_PIN_15_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT C Pin 15 Alternate Functionality */

#endif /* End of #if(PORT_CFG_PORT_C_ENABLE == STD_ON) */

/****************************************************************************
***************************** PORT D CONFIGURATIONS**************************
*****************************************************************************/

#if(PORT_CFG_PORT_D_ENABLE == STD_ON)

/* PORT D - Pin 0 - Configurations */
#define PORT_CFG_PORT_D_PIN_0_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT D Pin 0 Mode */
#define PORT_CFG_PORT_D_PIN_0_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT D Pin 0 Output Type */
#define PORT_CFG_PORT_D_PIN_0_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT D Pin 0 Pull Type */
#define PORT_CFG_PORT_D_PIN_0_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT D Pin 0 Speed */
#define PORT_CFG_PORT_D_PIN_0_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT D Pin 0 Alternate Functionality */

/* PORT D - Pin 1 - Configurations */
#define PORT_CFG_PORT_D_PIN_1_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT D Pin 1 Mode */
#define PORT_CFG_PORT_D_PIN_1_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT D Pin 1 Output Type */
#define PORT_CFG_PORT_D_PIN_1_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT D Pin 1 Pull Type */
#define PORT_CFG_PORT_D_PIN_1_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT D Pin 1 Speed */
#define PORT_CFG_PORT_D_PIN_1_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT D Pin 1 Alternate Functionality */

/* PORT D - Pin 2 - Configurations */
#define PORT_CFG_PORT_D_PIN_2_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT D Pin 2 Mode */
#define PORT_CFG_PORT_D_PIN_2_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT D Pin 2 Output Type */
#define PORT_CFG_PORT_D_PIN_2_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT D Pin 2 Pull Type */
#define PORT_CFG_PORT_D_PIN_2_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT D Pin 2 Speed */
#define PORT_CFG_PORT_D_PIN_2_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT D Pin 2 Alternate Functionality */

/* PORT D - Pin 3 - Configurations */
#define PORT_CFG_PORT_D_PIN_3_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT D Pin 3 Mode */
#define PORT_CFG_PORT_D_PIN_3_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT D Pin 3 Output Type */
#define PORT_CFG_PORT_D_PIN_3_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT D Pin 3 Pull Type */
#define PORT_CFG_PORT_D_PIN_3_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT D Pin 3 Speed */
#define PORT_CFG_PORT_D_PIN_3_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT D Pin 3 Alternate Functionality */

/* PORT D - Pin 4 - Configurations */
#define PORT_CFG_PORT_D_PIN_4_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT D Pin 4 Mode */
#define PORT_CFG_PORT_D_PIN_4_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT D Pin 4 Output Type */
#define PORT_CFG_PORT_D_PIN_4_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT D Pin 4 Pull Type */
#define PORT_CFG_PORT_D_PIN_4_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT D Pin 4 Speed */
#define PORT_CFG_PORT_D_PIN_4_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT D Pin 4 Alternate Functionality */

/* PORT D - Pin 5 - Configurations */
#define PORT_CFG_PORT_D_PIN_5_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT D Pin 5 Mode */
#define PORT_CFG_PORT_D_PIN_5_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT D Pin 5 Output Type */
#define PORT_CFG_PORT_D_PIN_5_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT D Pin 5 Pull Type */
#define PORT_CFG_PORT_D_PIN_5_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT D Pin 5 Speed */
#define PORT_CFG_PORT_D_PIN_5_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT D Pin 5 Alternate Functionality */

/* PORT D - Pin 6 - Configurations */
#define PORT_CFG_PORT_D_PIN_6_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT D Pin 6 Mode */
#define PORT_CFG_PORT_D_PIN_6_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT D Pin 6 Output Type */
#define PORT_CFG_PORT_D_PIN_6_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT D Pin 6 Pull Type */
#define PORT_CFG_PORT_D_PIN_6_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT D Pin 6 Speed */
#define PORT_CFG_PORT_D_PIN_6_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT D Pin 6 Alternate Functionality */

/* PORT D - Pin 7 - Configurations */
#define PORT_CFG_PORT_D_PIN_7_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT D Pin 7 Mode */
#define PORT_CFG_PORT_D_PIN_7_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT D Pin 7 Output Type */
#define PORT_CFG_PORT_D_PIN_7_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT D Pin 7 Pull Type */
#define PORT_CFG_PORT_D_PIN_7_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT D Pin 7 Speed */
#define PORT_CFG_PORT_D_PIN_7_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT D Pin 7 Alternate Functionality */

/* PORT D - Pin 8 - Configurations */
#define PORT_CFG_PORT_D_PIN_8_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT D Pin 8 Mode */
#define PORT_CFG_PORT_D_PIN_8_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT D Pin 8 Output Type */
#define PORT_CFG_PORT_D_PIN_8_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT D Pin 8 Pull Type */
#define PORT_CFG_PORT_D_PIN_8_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT D Pin 8 Speed */
#define PORT_CFG_PORT_D_PIN_8_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT D Pin 8 Alternate Functionality */

/* PORT D - Pin 9 - Configurations */
#define PORT_CFG_PORT_D_PIN_9_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT D Pin 9 Mode */
#define PORT_CFG_PORT_D_PIN_9_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT D Pin 9 Output Type */
#define PORT_CFG_PORT_D_PIN_9_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT D Pin 9 Pull Type */
#define PORT_CFG_PORT_D_PIN_9_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT D Pin 9 Speed */
#define PORT_CFG_PORT_D_PIN_9_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT D Pin 9 Alternate Functionality */

/* PORT D - Pin 10 - Configurations */
#define PORT_CFG_PORT_D_PIN_10_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT D Pin 10 Mode */
#define PORT_CFG_PORT_D_PIN_10_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT D Pin 10 Output Type */
#define PORT_CFG_PORT_D_PIN_10_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT D Pin 10 Pull Type */
#define PORT_CFG_PORT_D_PIN_10_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT D Pin 10 Speed */
#define PORT_CFG_PORT_D_PIN_10_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT D Pin 10 Alternate Functionality */

/* PORT D - Pin 11 - Configurations */
#define PORT_CFG_PORT_D_PIN_11_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT D Pin 11 Mode */
#define PORT_CFG_PORT_D_PIN_11_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT D Pin 11 Output Type */
#define PORT_CFG_PORT_D_PIN_11_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT D Pin 11 Pull Type */
#define PORT_CFG_PORT_D_PIN_11_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT D Pin 11 Speed */
#define PORT_CFG_PORT_D_PIN_11_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT D Pin 11 Alternate Functionality */

/* PORT D - Pin 12 - Configurations */
#define PORT_CFG_PORT_D_PIN_12_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT D Pin 12 Mode */
#define PORT_CFG_PORT_D_PIN_12_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT D Pin 12 Output Type */
#define PORT_CFG_PORT_D_PIN_12_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT D Pin 12 Pull Type */
#define PORT_CFG_PORT_D_PIN_12_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT D Pin 12 Speed */
#define PORT_CFG_PORT_D_PIN_12_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT D Pin 12 Alternate Functionality */

/* PORT D - Pin 13 - Configurations */
#define PORT_CFG_PORT_D_PIN_13_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT D Pin 13 Mode */
#define PORT_CFG_PORT_D_PIN_13_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT D Pin 13 Output Type */
#define PORT_CFG_PORT_D_PIN_13_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT D Pin 13 Pull Type */
#define PORT_CFG_PORT_D_PIN_13_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT D Pin 13 Speed */
#define PORT_CFG_PORT_D_PIN_13_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT D Pin 13 Alternate Functionality */

/* PORT D - Pin 14 - Configurations */
#define PORT_CFG_PORT_D_PIN_14_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT D Pin 14 Mode */
#define PORT_CFG_PORT_D_PIN_14_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT D Pin 14 Output Type */
#define PORT_CFG_PORT_D_PIN_14_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT D Pin 14 Pull Type */
#define PORT_CFG_PORT_D_PIN_14_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT D Pin 14 Speed */
#define PORT_CFG_PORT_D_PIN_14_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT D Pin 14 Alternate Functionality */

/* PORT D - Pin 15 - Configurations */
#define PORT_CFG_PORT_D_PIN_15_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT D Pin 15 Mode */
#define PORT_CFG_PORT_D_PIN_15_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT D Pin 15 Output Type */
#define PORT_CFG_PORT_D_PIN_15_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT D Pin 15 Pull Type */
#define PORT_CFG_PORT_D_PIN_15_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT D Pin 15 Speed */
#define PORT_CFG_PORT_D_PIN_15_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT D Pin 15 Alternate Functionality */

#endif /* End of #if(PORT_CFG_PORT_D_ENABLE == STD_ON) */

/****************************************************************************
***************************** PORT E CONFIGURATIONS**************************
*****************************************************************************/

#if(PORT_CFG_PORT_E_ENABLE == STD_ON)

/* PORT E - Pin 0 - Configurations */
#define PORT_CFG_PORT_E_PIN_0_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT E Pin 0 Mode */
#define PORT_CFG_PORT_E_PIN_0_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT E Pin 0 Output Type */
#define PORT_CFG_PORT_E_PIN_0_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT E Pin 0 Pull Type */
#define PORT_CFG_PORT_E_PIN_0_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT E Pin 0 Speed */
#define PORT_CFG_PORT_E_PIN_0_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT E Pin 0 Alternate Functionality */

/* PORT E - Pin 1 - Configurations */
#define PORT_CFG_PORT_E_PIN_1_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT E Pin 1 Mode */
#define PORT_CFG_PORT_E_PIN_1_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT E Pin 1 Output Type */
#define PORT_CFG_PORT_E_PIN_1_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT E Pin 1 Pull Type */
#define PORT_CFG_PORT_E_PIN_1_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT E Pin 1 Speed */
#define PORT_CFG_PORT_E_PIN_1_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT E Pin 1 Alternate Functionality */

/* PORT E - Pin 2 - Configurations */
#define PORT_CFG_PORT_E_PIN_2_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT E Pin 2 Mode */
#define PORT_CFG_PORT_E_PIN_2_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT E Pin 2 Output Type */
#define PORT_CFG_PORT_E_PIN_2_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT E Pin 2 Pull Type */
#define PORT_CFG_PORT_E_PIN_2_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT E Pin 2 Speed */
#define PORT_CFG_PORT_E_PIN_2_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT E Pin 2 Alternate Functionality */

/* PORT E - Pin 3 - Configurations */
#define PORT_CFG_PORT_E_PIN_3_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT E Pin 3 Mode */
#define PORT_CFG_PORT_E_PIN_3_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT E Pin 3 Output Type */
#define PORT_CFG_PORT_E_PIN_3_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT E Pin 3 Pull Type */
#define PORT_CFG_PORT_E_PIN_3_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT E Pin 3 Speed */
#define PORT_CFG_PORT_E_PIN_3_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT E Pin 3 Alternate Functionality */

/* PORT E - Pin 4 - Configurations */
#define PORT_CFG_PORT_E_PIN_4_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT E Pin 4 Mode */
#define PORT_CFG_PORT_E_PIN_4_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT E Pin 4 Output Type */
#define PORT_CFG_PORT_E_PIN_4_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT E Pin 4 Pull Type */
#define PORT_CFG_PORT_E_PIN_4_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT E Pin 4 Speed */
#define PORT_CFG_PORT_E_PIN_4_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT E Pin 4 Alternate Functionality */

/* PORT E - Pin 5 - Configurations */
#define PORT_CFG_PORT_E_PIN_5_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT E Pin 5 Mode */
#define PORT_CFG_PORT_E_PIN_5_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT E Pin 5 Output Type */
#define PORT_CFG_PORT_E_PIN_5_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT E Pin 5 Pull Type */
#define PORT_CFG_PORT_E_PIN_5_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT E Pin 5 Speed */
#define PORT_CFG_PORT_E_PIN_5_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT E Pin 5 Alternate Functionality */

/* PORT E - Pin 6 - Configurations */
#define PORT_CFG_PORT_E_PIN_6_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT E Pin 6 Mode */
#define PORT_CFG_PORT_E_PIN_6_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT E Pin 6 Output Type */
#define PORT_CFG_PORT_E_PIN_6_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT E Pin 6 Pull Type */
#define PORT_CFG_PORT_E_PIN_6_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT E Pin 6 Speed */
#define PORT_CFG_PORT_E_PIN_6_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT E Pin 6 Alternate Functionality */

/* PORT E - Pin 7 - Configurations */
#define PORT_CFG_PORT_E_PIN_7_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT E Pin 7 Mode */
#define PORT_CFG_PORT_E_PIN_7_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT E Pin 7 Output Type */
#define PORT_CFG_PORT_E_PIN_7_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT E Pin 7 Pull Type */
#define PORT_CFG_PORT_E_PIN_7_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT E Pin 7 Speed */
#define PORT_CFG_PORT_E_PIN_7_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT E Pin 7 Alternate Functionality */

/* PORT E - Pin 8 - Configurations */
#define PORT_CFG_PORT_E_PIN_8_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT E Pin 8 Mode */
#define PORT_CFG_PORT_E_PIN_8_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT E Pin 8 Output Type */
#define PORT_CFG_PORT_E_PIN_8_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT E Pin 8 Pull Type */
#define PORT_CFG_PORT_E_PIN_8_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT E Pin 8 Speed */
#define PORT_CFG_PORT_E_PIN_8_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT E Pin 8 Alternate Functionality */

/* PORT E - Pin 9 - Configurations */
#define PORT_CFG_PORT_E_PIN_9_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT E Pin 9 Mode */
#define PORT_CFG_PORT_E_PIN_9_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT E Pin 9 Output Type */
#define PORT_CFG_PORT_E_PIN_9_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT E Pin 9 Pull Type */
#define PORT_CFG_PORT_E_PIN_9_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT E Pin 9 Speed */
#define PORT_CFG_PORT_E_PIN_9_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT E Pin 9 Alternate Functionality */

/* PORT E - Pin 10 - Configurations */
#define PORT_CFG_PORT_E_PIN_10_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT E Pin 10 Mode */
#define PORT_CFG_PORT_E_PIN_10_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT E Pin 10 Output Type */
#define PORT_CFG_PORT_E_PIN_10_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT E Pin 10 Pull Type */
#define PORT_CFG_PORT_E_PIN_10_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT E Pin 10 Speed */
#define PORT_CFG_PORT_E_PIN_10_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT E Pin 10 Alternate Functionality */

/* PORT E - Pin 11 - Configurations */
#define PORT_CFG_PORT_E_PIN_11_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT E Pin 11 Mode */
#define PORT_CFG_PORT_E_PIN_11_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT E Pin 11 Output Type */
#define PORT_CFG_PORT_E_PIN_11_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT E Pin 11 Pull Type */
#define PORT_CFG_PORT_E_PIN_11_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT E Pin 11 Speed */
#define PORT_CFG_PORT_E_PIN_11_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT E Pin 11 Alternate Functionality */

/* PORT E - Pin 12 - Configurations */
#define PORT_CFG_PORT_E_PIN_12_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT E Pin 12 Mode */
#define PORT_CFG_PORT_E_PIN_12_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT E Pin 12 Output Type */
#define PORT_CFG_PORT_E_PIN_12_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT E Pin 12 Pull Type */
#define PORT_CFG_PORT_E_PIN_12_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT E Pin 12 Speed */
#define PORT_CFG_PORT_E_PIN_12_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT E Pin 12 Alternate Functionality */

/* PORT E - Pin 13 - Configurations */
#define PORT_CFG_PORT_E_PIN_13_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT E Pin 13 Mode */
#define PORT_CFG_PORT_E_PIN_13_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT E Pin 13 Output Type */
#define PORT_CFG_PORT_E_PIN_13_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT E Pin 13 Pull Type */
#define PORT_CFG_PORT_E_PIN_13_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT E Pin 13 Speed */
#define PORT_CFG_PORT_E_PIN_13_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT E Pin 13 Alternate Functionality */

/* PORT E - Pin 14 - Configurations */
#define PORT_CFG_PORT_E_PIN_14_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT E Pin 14 Mode */
#define PORT_CFG_PORT_E_PIN_14_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT E Pin 14 Output Type */
#define PORT_CFG_PORT_E_PIN_14_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT E Pin 14 Pull Type */
#define PORT_CFG_PORT_E_PIN_14_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT E Pin 14 Speed */
#define PORT_CFG_PORT_E_PIN_14_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT E Pin 14 Alternate Functionality */

/* PORT E - Pin 15 - Configurations */
#define PORT_CFG_PORT_E_PIN_15_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT E Pin 15 Mode */
#define PORT_CFG_PORT_E_PIN_15_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT E Pin 15 Output Type */
#define PORT_CFG_PORT_E_PIN_15_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT E Pin 15 Pull Type */
#define PORT_CFG_PORT_E_PIN_15_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT E Pin 15 Speed */
#define PORT_CFG_PORT_E_PIN_15_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT E Pin 15 Alternate Functionality */

#endif /* End of #if(PORT_CFG_PORT_E_ENABLE == STD_ON) */

/****************************************************************************
***************************** PORT F CONFIGURATIONS**************************
*****************************************************************************/

#if(PORT_CFG_PORT_F_ENABLE == STD_ON)

/* PORT F - Pin 0 - Configurations */
#define PORT_CFG_PORT_F_PIN_0_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT F Pin 0 Mode */
#define PORT_CFG_PORT_F_PIN_0_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT F Pin 0 Output Type */
#define PORT_CFG_PORT_F_PIN_0_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT F Pin 0 Pull Type */
#define PORT_CFG_PORT_F_PIN_0_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT F Pin 0 Speed */
#define PORT_CFG_PORT_F_PIN_0_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT F Pin 0 Alternate Functionality */

/* PORT F - Pin 1 - Configurations */
#define PORT_CFG_PORT_F_PIN_1_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT F Pin 1 Mode */
#define PORT_CFG_PORT_F_PIN_1_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT F Pin 1 Output Type */
#define PORT_CFG_PORT_F_PIN_1_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT F Pin 1 Pull Type */
#define PORT_CFG_PORT_F_PIN_1_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT F Pin 1 Speed */
#define PORT_CFG_PORT_F_PIN_1_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT F Pin 1 Alternate Functionality */

/* PORT F - Pin 2 - Configurations */
#define PORT_CFG_PORT_F_PIN_2_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT F Pin 2 Mode */
#define PORT_CFG_PORT_F_PIN_2_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT F Pin 2 Output Type */
#define PORT_CFG_PORT_F_PIN_2_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT F Pin 2 Pull Type */
#define PORT_CFG_PORT_F_PIN_2_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT F Pin 2 Speed */
#define PORT_CFG_PORT_F_PIN_2_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT F Pin 2 Alternate Functionality */

/* PORT F - Pin 3 - Configurations */
#define PORT_CFG_PORT_F_PIN_3_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT F Pin 3 Mode */
#define PORT_CFG_PORT_F_PIN_3_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT F Pin 3 Output Type */
#define PORT_CFG_PORT_F_PIN_3_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT F Pin 3 Pull Type */
#define PORT_CFG_PORT_F_PIN_3_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT F Pin 3 Speed */
#define PORT_CFG_PORT_F_PIN_3_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT F Pin 3 Alternate Functionality */

/* PORT F - Pin 4 - Configurations */
#define PORT_CFG_PORT_F_PIN_4_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT F Pin 4 Mode */
#define PORT_CFG_PORT_F_PIN_4_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT F Pin 4 Output Type */
#define PORT_CFG_PORT_F_PIN_4_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT F Pin 4 Pull Type */
#define PORT_CFG_PORT_F_PIN_4_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT F Pin 4 Speed */
#define PORT_CFG_PORT_F_PIN_4_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT F Pin 4 Alternate Functionality */

/* PORT F - Pin 5 - Configurations */
#define PORT_CFG_PORT_F_PIN_5_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT F Pin 5 Mode */
#define PORT_CFG_PORT_F_PIN_5_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT F Pin 5 Output Type */
#define PORT_CFG_PORT_F_PIN_5_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT F Pin 5 Pull Type */
#define PORT_CFG_PORT_F_PIN_5_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT F Pin 5 Speed */
#define PORT_CFG_PORT_F_PIN_5_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT F Pin 5 Alternate Functionality */

/* PORT F - Pin 6 - Configurations */
#define PORT_CFG_PORT_F_PIN_6_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT F Pin 6 Mode */
#define PORT_CFG_PORT_F_PIN_6_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT F Pin 6 Output Type */
#define PORT_CFG_PORT_F_PIN_6_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT F Pin 6 Pull Type */
#define PORT_CFG_PORT_F_PIN_6_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT F Pin 6 Speed */
#define PORT_CFG_PORT_F_PIN_6_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT F Pin 6 Alternate Functionality */

/* PORT F - Pin 7 - Configurations */
#define PORT_CFG_PORT_F_PIN_7_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT F Pin 7 Mode */
#define PORT_CFG_PORT_F_PIN_7_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT F Pin 7 Output Type */
#define PORT_CFG_PORT_F_PIN_7_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT F Pin 7 Pull Type */
#define PORT_CFG_PORT_F_PIN_7_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT F Pin 7 Speed */
#define PORT_CFG_PORT_F_PIN_7_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT F Pin 7 Alternate Functionality */

/* PORT F - Pin 8 - Configurations */
#define PORT_CFG_PORT_F_PIN_8_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT F Pin 8 Mode */
#define PORT_CFG_PORT_F_PIN_8_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT F Pin 8 Output Type */
#define PORT_CFG_PORT_F_PIN_8_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT F Pin 8 Pull Type */
#define PORT_CFG_PORT_F_PIN_8_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT F Pin 8 Speed */
#define PORT_CFG_PORT_F_PIN_8_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT F Pin 8 Alternate Functionality */

/* PORT F - Pin 9 - Configurations */
#define PORT_CFG_PORT_F_PIN_9_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT F Pin 9 Mode */
#define PORT_CFG_PORT_F_PIN_9_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT F Pin 9 Output Type */
#define PORT_CFG_PORT_F_PIN_9_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT F Pin 9 Pull Type */
#define PORT_CFG_PORT_F_PIN_9_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT F Pin 9 Speed */
#define PORT_CFG_PORT_F_PIN_9_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT F Pin 9 Alternate Functionality */

/* PORT F - Pin 10 - Configurations */
#define PORT_CFG_PORT_F_PIN_10_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT F Pin 10 Mode */
#define PORT_CFG_PORT_F_PIN_10_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT F Pin 10 Output Type */
#define PORT_CFG_PORT_F_PIN_10_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT F Pin 10 Pull Type */
#define PORT_CFG_PORT_F_PIN_10_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT F Pin 10 Speed */
#define PORT_CFG_PORT_F_PIN_10_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT F Pin 10 Alternate Functionality */

/* PORT F - Pin 11 - Configurations */
#define PORT_CFG_PORT_F_PIN_11_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT F Pin 11 Mode */
#define PORT_CFG_PORT_F_PIN_11_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT F Pin 11 Output Type */
#define PORT_CFG_PORT_F_PIN_11_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT F Pin 11 Pull Type */
#define PORT_CFG_PORT_F_PIN_11_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT F Pin 11 Speed */
#define PORT_CFG_PORT_F_PIN_11_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT F Pin 11 Alternate Functionality */

/* PORT F - Pin 12 - Configurations */
#define PORT_CFG_PORT_F_PIN_12_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT F Pin 12 Mode */
#define PORT_CFG_PORT_F_PIN_12_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT F Pin 12 Output Type */
#define PORT_CFG_PORT_F_PIN_12_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT F Pin 12 Pull Type */
#define PORT_CFG_PORT_F_PIN_12_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT F Pin 12 Speed */
#define PORT_CFG_PORT_F_PIN_12_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT F Pin 12 Alternate Functionality */

/* PORT F - Pin 13 - Configurations */
#define PORT_CFG_PORT_F_PIN_13_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT F Pin 13 Mode */
#define PORT_CFG_PORT_F_PIN_13_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT F Pin 13 Output Type */
#define PORT_CFG_PORT_F_PIN_13_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT F Pin 13 Pull Type */
#define PORT_CFG_PORT_F_PIN_13_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT F Pin 13 Speed */
#define PORT_CFG_PORT_F_PIN_13_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT F Pin 13 Alternate Functionality */

/* PORT F - Pin 14 - Configurations */
#define PORT_CFG_PORT_F_PIN_14_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT F Pin 14 Mode */
#define PORT_CFG_PORT_F_PIN_14_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT F Pin 14 Output Type */
#define PORT_CFG_PORT_F_PIN_14_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT F Pin 14 Pull Type */
#define PORT_CFG_PORT_F_PIN_14_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT F Pin 14 Speed */
#define PORT_CFG_PORT_F_PIN_14_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT F Pin 14 Alternate Functionality */

/* PORT F - Pin 15 - Configurations */
#define PORT_CFG_PORT_F_PIN_15_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT F Pin 15 Mode */
#define PORT_CFG_PORT_F_PIN_15_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT F Pin 15 Output Type */
#define PORT_CFG_PORT_F_PIN_15_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT F Pin 15 Pull Type */
#define PORT_CFG_PORT_F_PIN_15_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT F Pin 15 Speed */
#define PORT_CFG_PORT_F_PIN_15_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT F Pin 15 Alternate Functionality */

#endif /* End of #if(PORT_CFG_PORT_F_ENABLE == STD_ON) */

/****************************************************************************
***************************** PORT G CONFIGURATIONS**************************
*****************************************************************************/

#if(PORT_CFG_PORT_G_ENABLE == STD_ON)

/* PORT G - Pin 0 - Configurations */
#define PORT_CFG_PORT_G_PIN_0_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT G Pin 0 Mode */
#define PORT_CFG_PORT_G_PIN_0_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT G Pin 0 Output Type */
#define PORT_CFG_PORT_G_PIN_0_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT G Pin 0 Pull Type */
#define PORT_CFG_PORT_G_PIN_0_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT G Pin 0 Speed */
#define PORT_CFG_PORT_G_PIN_0_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT G Pin 0 Alternate Functionality */

/* PORT G - Pin 1 - Configurations */
#define PORT_CFG_PORT_G_PIN_1_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT G Pin 1 Mode */
#define PORT_CFG_PORT_G_PIN_1_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT G Pin 1 Output Type */
#define PORT_CFG_PORT_G_PIN_1_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT G Pin 1 Pull Type */
#define PORT_CFG_PORT_G_PIN_1_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT G Pin 1 Speed */
#define PORT_CFG_PORT_G_PIN_1_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT G Pin 1 Alternate Functionality */

/* PORT G - Pin 2 - Configurations */
#define PORT_CFG_PORT_G_PIN_2_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT G Pin 2 Mode */
#define PORT_CFG_PORT_G_PIN_2_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT G Pin 2 Output Type */
#define PORT_CFG_PORT_G_PIN_2_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT G Pin 2 Pull Type */
#define PORT_CFG_PORT_G_PIN_2_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT G Pin 2 Speed */
#define PORT_CFG_PORT_G_PIN_2_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT G Pin 2 Alternate Functionality */

/* PORT G - Pin 3 - Configurations */
#define PORT_CFG_PORT_G_PIN_3_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT G Pin 3 Mode */
#define PORT_CFG_PORT_G_PIN_3_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT G Pin 3 Output Type */
#define PORT_CFG_PORT_G_PIN_3_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT G Pin 3 Pull Type */
#define PORT_CFG_PORT_G_PIN_3_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT G Pin 3 Speed */
#define PORT_CFG_PORT_G_PIN_3_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT G Pin 3 Alternate Functionality */

/* PORT G - Pin 4 - Configurations */
#define PORT_CFG_PORT_G_PIN_4_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT G Pin 4 Mode */
#define PORT_CFG_PORT_G_PIN_4_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT G Pin 4 Output Type */
#define PORT_CFG_PORT_G_PIN_4_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT G Pin 4 Pull Type */
#define PORT_CFG_PORT_G_PIN_4_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT G Pin 4 Speed */
#define PORT_CFG_PORT_G_PIN_4_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT G Pin 4 Alternate Functionality */

/* PORT G - Pin 5 - Configurations */
#define PORT_CFG_PORT_G_PIN_5_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT G Pin 5 Mode */
#define PORT_CFG_PORT_G_PIN_5_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT G Pin 5 Output Type */
#define PORT_CFG_PORT_G_PIN_5_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT G Pin 5 Pull Type */
#define PORT_CFG_PORT_G_PIN_5_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT G Pin 5 Speed */
#define PORT_CFG_PORT_G_PIN_5_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT G Pin 5 Alternate Functionality */

/* PORT G - Pin 6 - Configurations */
#define PORT_CFG_PORT_G_PIN_6_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT G Pin 6 Mode */
#define PORT_CFG_PORT_G_PIN_6_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT G Pin 6 Output Type */
#define PORT_CFG_PORT_G_PIN_6_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT G Pin 6 Pull Type */
#define PORT_CFG_PORT_G_PIN_6_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT G Pin 6 Speed */
#define PORT_CFG_PORT_G_PIN_6_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT G Pin 6 Alternate Functionality */

/* PORT G - Pin 7 - Configurations */
#define PORT_CFG_PORT_G_PIN_7_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT G Pin 7 Mode */
#define PORT_CFG_PORT_G_PIN_7_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT G Pin 7 Output Type */
#define PORT_CFG_PORT_G_PIN_7_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT G Pin 7 Pull Type */
#define PORT_CFG_PORT_G_PIN_7_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT G Pin 7 Speed */
#define PORT_CFG_PORT_G_PIN_7_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT G Pin 7 Alternate Functionality */

/* PORT G - Pin 8 - Configurations */
#define PORT_CFG_PORT_G_PIN_8_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT G Pin 8 Mode */
#define PORT_CFG_PORT_G_PIN_8_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT G Pin 8 Output Type */
#define PORT_CFG_PORT_G_PIN_8_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT G Pin 8 Pull Type */
#define PORT_CFG_PORT_G_PIN_8_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT G Pin 8 Speed */
#define PORT_CFG_PORT_G_PIN_8_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT G Pin 8 Alternate Functionality */

/* PORT G - Pin 9 - Configurations */
#define PORT_CFG_PORT_G_PIN_9_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT G Pin 9 Mode */
#define PORT_CFG_PORT_G_PIN_9_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT G Pin 9 Output Type */
#define PORT_CFG_PORT_G_PIN_9_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT G Pin 9 Pull Type */
#define PORT_CFG_PORT_G_PIN_9_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT G Pin 9 Speed */
#define PORT_CFG_PORT_G_PIN_9_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT G Pin 9 Alternate Functionality */

/* PORT G - Pin 10 - Configurations */
#define PORT_CFG_PORT_G_PIN_10_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT G Pin 10 Mode */
#define PORT_CFG_PORT_G_PIN_10_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT G Pin 10 Output Type */
#define PORT_CFG_PORT_G_PIN_10_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT G Pin 10 Pull Type */
#define PORT_CFG_PORT_G_PIN_10_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT G Pin 10 Speed */
#define PORT_CFG_PORT_G_PIN_10_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT G Pin 10 Alternate Functionality */

/* PORT G - Pin 11 - Configurations */
#define PORT_CFG_PORT_G_PIN_11_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT G Pin 11 Mode */
#define PORT_CFG_PORT_G_PIN_11_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT G Pin 11 Output Type */
#define PORT_CFG_PORT_G_PIN_11_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT G Pin 11 Pull Type */
#define PORT_CFG_PORT_G_PIN_11_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT G Pin 11 Speed */
#define PORT_CFG_PORT_G_PIN_11_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT G Pin 11 Alternate Functionality */

/* PORT G - Pin 12 - Configurations */
#define PORT_CFG_PORT_G_PIN_12_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT G Pin 12 Mode */
#define PORT_CFG_PORT_G_PIN_12_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT G Pin 12 Output Type */
#define PORT_CFG_PORT_G_PIN_12_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT G Pin 12 Pull Type */
#define PORT_CFG_PORT_G_PIN_12_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT G Pin 12 Speed */
#define PORT_CFG_PORT_G_PIN_12_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT G Pin 12 Alternate Functionality */

/* PORT G - Pin 13 - Configurations */
#define PORT_CFG_PORT_G_PIN_13_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT G Pin 13 Mode */
#define PORT_CFG_PORT_G_PIN_13_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT G Pin 13 Output Type */
#define PORT_CFG_PORT_G_PIN_13_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT G Pin 13 Pull Type */
#define PORT_CFG_PORT_G_PIN_13_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT G Pin 13 Speed */
#define PORT_CFG_PORT_G_PIN_13_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT G Pin 13 Alternate Functionality */

/* PORT G - Pin 14 - Configurations */
#define PORT_CFG_PORT_G_PIN_14_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT G Pin 14 Mode */
#define PORT_CFG_PORT_G_PIN_14_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT G Pin 14 Output Type */
#define PORT_CFG_PORT_G_PIN_14_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT G Pin 14 Pull Type */
#define PORT_CFG_PORT_G_PIN_14_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT G Pin 14 Speed */
#define PORT_CFG_PORT_G_PIN_14_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT G Pin 14 Alternate Functionality */

/* PORT G - Pin 15 - Configurations */
#define PORT_CFG_PORT_G_PIN_15_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT G Pin 15 Mode */
#define PORT_CFG_PORT_G_PIN_15_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT G Pin 15 Output Type */
#define PORT_CFG_PORT_G_PIN_15_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT G Pin 15 Pull Type */
#define PORT_CFG_PORT_G_PIN_15_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT G Pin 15 Speed */
#define PORT_CFG_PORT_G_PIN_15_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT G Pin 15 Alternate Functionality */


#endif /* End of #if(PORT_CFG_PORT_G_ENABLE == STD_ON) */

/****************************************************************************
***************************** PORT H CONFIGURATIONS**************************
*****************************************************************************/

#if(PORT_CFG_PORT_H_ENABLE == STD_ON)

/* PORT H - Pin 0 - Configurations */
#define PORT_CFG_PORT_H_PIN_0_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT H Pin 0 Mode */
#define PORT_CFG_PORT_H_PIN_0_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT H Pin 0 Output Type */
#define PORT_CFG_PORT_H_PIN_0_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT H Pin 0 Pull Type */
#define PORT_CFG_PORT_H_PIN_0_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT H Pin 0 Speed */
#define PORT_CFG_PORT_H_PIN_0_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT H Pin 0 Alternate Functionality */

/* PORT H - Pin 1 - Configurations */
#define PORT_CFG_PORT_H_PIN_1_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT H Pin 1 Mode */
#define PORT_CFG_PORT_H_PIN_1_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT H Pin 1 Output Type */
#define PORT_CFG_PORT_H_PIN_1_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT H Pin 1 Pull Type */
#define PORT_CFG_PORT_H_PIN_1_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT H Pin 1 Speed */
#define PORT_CFG_PORT_H_PIN_1_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT H Pin 1 Alternate Functionality */

/* PORT H - Pin 2 - Configurations */
#define PORT_CFG_PORT_H_PIN_2_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT H Pin 2 Mode */
#define PORT_CFG_PORT_H_PIN_2_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT H Pin 2 Output Type */
#define PORT_CFG_PORT_H_PIN_2_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT H Pin 2 Pull Type */
#define PORT_CFG_PORT_H_PIN_2_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT H Pin 2 Speed */
#define PORT_CFG_PORT_H_PIN_2_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT H Pin 2 Alternate Functionality */

/* PORT H - Pin 3 - Configurations */
#define PORT_CFG_PORT_H_PIN_3_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT H Pin 3 Mode */
#define PORT_CFG_PORT_H_PIN_3_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT H Pin 3 Output Type */
#define PORT_CFG_PORT_H_PIN_3_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT H Pin 3 Pull Type */
#define PORT_CFG_PORT_H_PIN_3_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT H Pin 3 Speed */
#define PORT_CFG_PORT_H_PIN_3_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT H Pin 3 Alternate Functionality */

/* PORT H - Pin 4 - Configurations */
#define PORT_CFG_PORT_H_PIN_4_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT H Pin 4 Mode */
#define PORT_CFG_PORT_H_PIN_4_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT H Pin 4 Output Type */
#define PORT_CFG_PORT_H_PIN_4_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT H Pin 4 Pull Type */
#define PORT_CFG_PORT_H_PIN_4_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT H Pin 4 Speed */
#define PORT_CFG_PORT_H_PIN_4_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT H Pin 4 Alternate Functionality */

/* PORT H - Pin 5 - Configurations */
#define PORT_CFG_PORT_H_PIN_5_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT H Pin 5 Mode */
#define PORT_CFG_PORT_H_PIN_5_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT H Pin 5 Output Type */
#define PORT_CFG_PORT_H_PIN_5_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT H Pin 5 Pull Type */
#define PORT_CFG_PORT_H_PIN_5_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT H Pin 5 Speed */
#define PORT_CFG_PORT_H_PIN_5_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT H Pin 5 Alternate Functionality */

/* PORT H - Pin 6 - Configurations */
#define PORT_CFG_PORT_H_PIN_6_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT H Pin 6 Mode */
#define PORT_CFG_PORT_H_PIN_6_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT H Pin 6 Output Type */
#define PORT_CFG_PORT_H_PIN_6_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT H Pin 6 Pull Type */
#define PORT_CFG_PORT_H_PIN_6_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT H Pin 6 Speed */
#define PORT_CFG_PORT_H_PIN_6_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT H Pin 6 Alternate Functionality */

/* PORT H - Pin 7 - Configurations */
#define PORT_CFG_PORT_H_PIN_7_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT H Pin 7 Mode */
#define PORT_CFG_PORT_H_PIN_7_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT H Pin 7 Output Type */
#define PORT_CFG_PORT_H_PIN_7_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT H Pin 7 Pull Type */
#define PORT_CFG_PORT_H_PIN_7_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT H Pin 7 Speed */
#define PORT_CFG_PORT_H_PIN_7_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT H Pin 7 Alternate Functionality */

/* PORT H - Pin 8 - Configurations */
#define PORT_CFG_PORT_H_PIN_8_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT H Pin 8 Mode */
#define PORT_CFG_PORT_H_PIN_8_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT H Pin 8 Output Type */
#define PORT_CFG_PORT_H_PIN_8_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT H Pin 8 Pull Type */
#define PORT_CFG_PORT_H_PIN_8_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT H Pin 8 Speed */
#define PORT_CFG_PORT_H_PIN_8_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT H Pin 8 Alternate Functionality */

/* PORT H - Pin 9 - Configurations */
#define PORT_CFG_PORT_H_PIN_9_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT H Pin 9 Mode */
#define PORT_CFG_PORT_H_PIN_9_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT H Pin 9 Output Type */
#define PORT_CFG_PORT_H_PIN_9_PULL_TYPE			(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT H Pin 9 Pull Type */
#define PORT_CFG_PORT_H_PIN_9_SPEED				(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT H Pin 9 Speed */
#define PORT_CFG_PORT_H_PIN_9_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT H Pin 9 Alternate Functionality */

/* PORT H - Pin 10 - Configurations */
#define PORT_CFG_PORT_H_PIN_10_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT H Pin 10 Mode */
#define PORT_CFG_PORT_H_PIN_10_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT H Pin 10 Output Type */
#define PORT_CFG_PORT_H_PIN_10_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT H Pin 10 Pull Type */
#define PORT_CFG_PORT_H_PIN_10_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT H Pin 10 Speed */
#define PORT_CFG_PORT_H_PIN_10_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT H Pin 10 Alternate Functionality */

/* PORT H - Pin 11 - Configurations */
#define PORT_CFG_PORT_H_PIN_11_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT H Pin 11 Mode */
#define PORT_CFG_PORT_H_PIN_11_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT H Pin 11 Output Type */
#define PORT_CFG_PORT_H_PIN_11_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT H Pin 11 Pull Type */
#define PORT_CFG_PORT_H_PIN_11_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT H Pin 11 Speed */
#define PORT_CFG_PORT_H_PIN_11_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT H Pin 11 Alternate Functionality */

/* PORT H - Pin 12 - Configurations */
#define PORT_CFG_PORT_H_PIN_12_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT H Pin 12 Mode */
#define PORT_CFG_PORT_H_PIN_12_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT H Pin 12 Output Type */
#define PORT_CFG_PORT_H_PIN_12_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT H Pin 12 Pull Type */
#define PORT_CFG_PORT_H_PIN_12_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT H Pin 12 Speed */
#define PORT_CFG_PORT_H_PIN_12_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT H Pin 12 Alternate Functionality */

/* PORT H - Pin 13 - Configurations */
#define PORT_CFG_PORT_H_PIN_13_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT H Pin 13 Mode */
#define PORT_CFG_PORT_H_PIN_13_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT H Pin 13 Output Type */
#define PORT_CFG_PORT_H_PIN_13_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT H Pin 13 Pull Type */
#define PORT_CFG_PORT_H_PIN_13_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT H Pin 13 Speed */
#define PORT_CFG_PORT_H_PIN_13_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT H Pin 13 Alternate Functionality */

/* PORT H - Pin 14 - Configurations */
#define PORT_CFG_PORT_H_PIN_14_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT H Pin 14 Mode */
#define PORT_CFG_PORT_H_PIN_14_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT H Pin 14 Output Type */
#define PORT_CFG_PORT_H_PIN_14_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT H Pin 14 Pull Type */
#define PORT_CFG_PORT_H_PIN_14_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT H Pin 14 Speed */
#define PORT_CFG_PORT_H_PIN_14_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT H Pin 14 Alternate Functionality */

/* PORT H - Pin 15 - Configurations */
#define PORT_CFG_PORT_H_PIN_15_MODE				(PORT_CONST_PORT_PIN_MODE_INPUT)		/* Defines PORT H Pin 15 Mode */
#define PORT_CFG_PORT_H_PIN_15_OUTPUT_TYPE		(PORT_CONST_PORT_PIN_OUTPUT_PUSH_PULL)	/* Defines PORT H Pin 15 Output Type */
#define PORT_CFG_PORT_H_PIN_15_PULL_TYPE		(PORT_CONST_PORT_PIN_NO_PULL)			/* Defines PORT H Pin 15 Pull Type */
#define PORT_CFG_PORT_H_PIN_15_SPEED			(PORT_CONST_PORT_PIN_SPEED_LOW)			/* Defines PORT H Pin 15 Speed */
#define PORT_CFG_PORT_H_PIN_15_ALT_FUNC			(PORT_CONST_PORT_PIN_ALT_FUNC_AF0)		/* Defines PORT H Pin 15 Alternate Functionality */

#endif /* End of #if(PORT_CFG_PORT_H_ENABLE == STD_ON) */

#endif /* PORT_CFG_H_ */
