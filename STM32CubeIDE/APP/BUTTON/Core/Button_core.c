/*****************************************************************************
* FileName     : Button_core.c
* Author       : &{user}
* Created      : Jan 21, 2022
* Description  :
*
*
*****************************************************************************/
#include "Button_core.h"

bool BUTTON_PullUp_IsPushed(){
	bool local_buttonState = false;
	if(BUTTON_CFG_PORT & (1<<BUTTON_CFG_PIN) ){
		local_buttonState = true;
	}
	return local_buttonState;
}

bool BUTTON_PullDown_IsPushed(){
	bool local_buttonState = false;
	if(!(BUTTON_CFG_PORT & (1<<BUTTON_CFG_PIN) )){
		local_buttonState = true;
	}
	return local_buttonState;
}


