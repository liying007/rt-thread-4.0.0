#ifndef _key_H
#define _key_H


#include "gpio.h"

#define KEY_LEFT_Pin    GET_PIN(E, 4)   //GPIO_Pin_4    //define K_LEFT
#define KEY_DOWN_Pin    GET_PIN(E, 3)		//GPIO_Pin_3    //define K_DOWN
#define KEY_RIGHT_Pin   GET_PIN(E, 2)		//GPIO_Pin_2   	//define K_RIGHT
#define KEY_UP_Pin      GET_PIN(A, 0)		//GPIO_Pin_0  	//define KEY_UP

#define KEY_LEFT   1
#define KEY_RIGHT  2
#define KEY_DOWN   3
#define KEY_UP		 4

void key_init();

u8 KEY_Scan();

#endif
