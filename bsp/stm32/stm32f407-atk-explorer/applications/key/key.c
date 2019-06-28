#include "key.h"
#include "spi_flash_w25qxx.h"
#include "drv_spi.h"
#include "stm32f407xx.h"




/*******************************************************************************
* �� �� ��         : key_init
* ��������		   : ������ʼ��
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
* �� �� ��         : key_scan
* ��������		   : ����ɨ����
* ��    ��         : mode=0:���ΰ��°���
					 mode=1���������°���
* ��    ��         : 0��δ�а�������
					 KEY_UP��K_UP������
					 KEY_DOWN��K_DOWN������
					 KEY_LEFT��K_LEFT������
					 KEY_RIGHT��K_RIGHT������
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