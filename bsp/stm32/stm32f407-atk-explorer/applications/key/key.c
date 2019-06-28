#include "key.h"
#include "spi_flash_w25qxx.h"
#include "drv_spi.h"
#include "stm32f407xx.h"




/*******************************************************************************
* 函 数 名         : key_init
* 函数功能		   : 按键初始化
*******************************************************************************/

void key_init()
{
	    // left right down  pull up
    rt_pin_mode(KEY_LEFT_Pin, PIN_MODE_INPUT_PULLUP);
		rt_pin_mode(KEY_RIGHT_Pin, PIN_MODE_INPUT_PULLUP);
    rt_pin_mode(KEY_DOWN_Pin, PIN_MODE_INPUT_PULLUP);
    // up  pull down
    rt_pin_mode(KEY_UP_Pin, PIN_MODE_INPUT_PULLDOWN);
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
u8 key_scan()
{
		// 10ms
		rt_thread_delay(rt_tick_from_millisecond(10));
	
		if (rt_pin_read(KEY_LEFT_Pin) == PIN_LOW)
		{
			//rt_kprintf("KEY_LEFT pressed!\n");
			return KEY_LEFT;
		}

		if (rt_pin_read(KEY_RIGHT_Pin) == PIN_LOW)
		{
			//rt_kprintf("KEY_RIGHT pressed!\n");
			return KEY_RIGHT;
		}

		if (rt_pin_read(KEY_DOWN_Pin) == PIN_LOW)
		{
			//rt_kprintf("KEY_DOWN pressed!\n");
			return KEY_DOWN;
		}

		if (rt_pin_read(KEY_UP_Pin) == PIN_HIGH)
		{
			//rt_kprintf("KEY_UP pressed!\n");
			return KEY_UP;
		}
}