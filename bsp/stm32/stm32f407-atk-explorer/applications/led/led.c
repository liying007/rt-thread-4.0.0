#include "led.h"


/**
* Name: Led_SetLight
* Description: 设置led灯的开关状态
* @led : 灯号 1/2
* @isOn : 开关状态，true开 false关
* Return : 空
*/
void Led_SetLight(int led, bool isOn)
{
	switch(led) {
		case LED1:
			rt_pin_mode(LED1_PIN, PIN_MODE_OUTPUT);
			if(isOn)
					rt_pin_write(LED1_PIN, PIN_LOW);
			else
					rt_pin_write(LED1_PIN, PIN_HIGH);
		break;
		case LED2:
			rt_pin_mode(LED2_PIN, PIN_MODE_OUTPUT);
			if(isOn)
					rt_pin_write(LED2_PIN, PIN_LOW);
			else
					rt_pin_write(LED2_PIN, PIN_HIGH);
		break;
	}
}