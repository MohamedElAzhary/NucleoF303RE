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

int main(void){
	uint32_t i = 0;

	PORT_Init();
	LED_Init();

	while(1){
		LED_ON();
		for(i=0; i<= 100000; i++);
		LED_OFF();
		for(i=0; i<= 100000; i++);
	}

	return 0;
}
