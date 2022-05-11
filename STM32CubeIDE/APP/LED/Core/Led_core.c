/*****************************************************************************
* FileName     : Led_core.c
* Author       : &{user}
* Created      : Jan 21, 2022
* Description  :
*
*
*****************************************************************************/
#include "Led.h"

void LED_ON(){
	LED_CFG_PORT |= (1<<LED_CFG_PIN);
}

void LED_OFF(){
	LED_CFG_PORT &= ~(1<<LED_CFG_PIN);
}

void LED_TOGGLE(){
	LED_CFG_PORT ^= (1<<LED_CFG_PIN);
}

void LED_Init(){
	LED_CFG_PORT &= ~(1<<LED_CFG_PIN);
	LED_CFG_PORT |= (LED_CFG_INIT_PIN_STATE<<LED_CFG_PIN);

}
