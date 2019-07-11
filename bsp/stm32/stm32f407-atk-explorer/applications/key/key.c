#include "key.h"
#include "spi_flash_w25qxx.h"
#include "drv_spi.h"
#include "stm32f407xx.h"
#include "gpio.h"




/*******************************************************************************
* 函 数 名         : key_init
* 函数功能		   : 按键初始化
*******************************************************************************/

void key_init()
{
		GPIO_InitTypeDef_ GPIO_InitStructure; //定义结构体变量	
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE|RCC_AHB1Periph_GPIOA,ENABLE); //使能端口时钟
		
		GPIO_InitStructure.GPIO_Mode=GPIO_Mode_IN; //输入模式
		GPIO_InitStructure.GPIO_Pin=KEY_LEFT_Pin|KEY_DOWN_Pin|KEY_RIGHT_Pin;//管脚设置
		GPIO_InitStructure.GPIO_PuPd=GPIO_PuPd_UP;//上拉
		GPIO_Init(KEY_Port,&GPIO_InitStructure); //初始化结构体
		
		GPIO_InitStructure.GPIO_Mode=GPIO_Mode_IN; //输入模式
		GPIO_InitStructure.GPIO_Pin=KEY_UP_Pin;//管脚设置
		GPIO_InitStructure.GPIO_PuPd=GPIO_PuPd_DOWN;//下拉
		GPIO_Init(KEY_UP_Port,&GPIO_InitStructure); //初始化结构体
	
}

/*******************************************************************************
* 函 数 名         : key_scan
* 函数功能		   : 按键扫描检测
* 输    入         : mode=0:单次按下按键
					 mode=1：连续按下按键
* 输    出         : 0：未有按键按下
					 KEY_UP：K_UP键按下
					 KEY_DOWN：K_DOWN键按下
					 KEY_LEFT：K_LEFT键按下
					 KEY_RIGHT：K_RIGHT键按下
*******************************************************************************/
u8 key_scan(u8 mode)
{
		static u8 key=1;
		if(key==1 && (READ_PIN_KEY_UP==PIN_HIGH || READ_PIN_KEY_DOWN==PIN_LOW || READ_PIN_KEY_LEFT==PIN_LOW || READ_PIN_KEY_RIGHT==PIN_LOW)) //任意一个按键按下
		{
			rt_thread_delay(rt_tick_from_millisecond(10));  //消抖
			key=0;
			if(READ_PIN_KEY_UP == PIN_HIGH)
			{
				return KEY_UP; 
			}
			else if(READ_PIN_KEY_DOWN == PIN_LOW)
			{
				return KEY_DOWN; 
			}
			else if(READ_PIN_KEY_LEFT == PIN_LOW)
			{
				return KEY_LEFT; 
			}
			else if(READ_PIN_KEY_RIGHT == PIN_LOW)
			{
				return KEY_RIGHT;
			}
		}
		else if(READ_PIN_KEY_UP==PIN_LOW && READ_PIN_KEY_DOWN==PIN_HIGH && READ_PIN_KEY_LEFT==PIN_HIGH && READ_PIN_KEY_RIGHT==PIN_HIGH)    //无按键按下
		{
			key=1;
		}
		if(mode == 1) //连续按键按下
		{
			key=1;
		}
		
		return 0;
}
