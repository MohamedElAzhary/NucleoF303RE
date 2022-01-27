/*****************************************************************************
* FileName     : main.c
* Author       : &{user}
* Created      : Jan 21, 2022
* Description  :
*
*
*****************************************************************************/
#include "STM32F303RET6.h"
#include "Port.h"
#include "Led.h"
#include "Button.h"

int main(void){
	//uint32_t i = 0;

	PORT_Init();
	LED_Init();

	while(1){
		if(BUTTON_PullDown_IsPushed()){
			while(BUTTON_PullDown_IsPushed());
			LED_TOGGLE();
		}
	}

	return 0;
}
