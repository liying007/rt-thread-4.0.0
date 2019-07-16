#ifndef _key_H
#define _key_H


#include "gpio.h"


#define KEY_LEFT_Pin    GPIO_Pin_4    //定义K_LEFT管脚
#define KEY_DOWN_Pin    GPIO_Pin_3    //定义K_DOWN管脚
#define KEY_RIGHT_Pin   GPIO_Pin_2   //定义K_RIGHT管脚
#define KEY_UP_Pin      GPIO_Pin_0  //定义KEY_UP管脚


/*
#define KEY_LEFT_Pin    rt_pin_read(GET_PIN(E, 4))   //GPIO_Pin_4    //define K_LEFT
#define KEY_DOWN_Pin    rt_pin_read(GET_PIN(E, 3))		//GPIO_Pin_3    //define K_DOWN
#define KEY_RIGHT_Pin   rt_pin_read(GET_PIN(E, 2))		//GPIO_Pin_2   	//define K_RIGHT
#define KEY_UP_Pin      rt_pin_read(GET_PIN(A, 0))		//GPIO_Pin_0  	//define KEY_UP
*/

//使用位操作定义
#define READ_PIN_KEY_LEFT    rt_pin_read(GET_PIN(E, 4))   //GPIO_Pin_4    //define K_LEFT
#define READ_PIN_KEY_DOWN    rt_pin_read(GET_PIN(E, 3))		//GPIO_Pin_3    //define K_DOWN
#define READ_PIN_KEY_RIGHT   rt_pin_read(GET_PIN(E, 2))		//GPIO_Pin_2   	//define K_RIGHT
#define READ_PIN_KEY_UP      rt_pin_read(GET_PIN(A, 0))		//GPIO_Pin_0  	//define KEY_UP


#define KEY_UP 		1
#define KEY_DOWN 	2
#define KEY_LEFT 	3
#define KEY_RIGHT 4  


#define KEY_Port (GPIOE) //定义端口
#define KEY_UP_Port (GPIOA) //定义端口


void key_init(void);
u8 KEY_Scan(void);
//void key_thread_entry(void* parameter);

#endif
