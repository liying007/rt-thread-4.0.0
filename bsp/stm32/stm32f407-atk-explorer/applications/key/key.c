#include "key.h"
#include "spi_flash_w25qxx.h"
#include "drv_spi.h"
#include "stm32f407xx.h"
#include "gpio.h"




/*******************************************************************************
* �� �� ��         : key_init
* ��������		   : ������ʼ��
*******************************************************************************/

void key_init()
{
		GPIO_InitTypeDef_ GPIO_InitStructure; //����ṹ�����	
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE|RCC_AHB1Periph_GPIOA,ENABLE); //ʹ�ܶ˿�ʱ��
		
		GPIO_InitStructure.GPIO_Mode=GPIO_Mode_IN; //����ģʽ
		GPIO_InitStructure.GPIO_Pin=KEY_LEFT_Pin|KEY_DOWN_Pin|KEY_RIGHT_Pin;//�ܽ�����
		GPIO_InitStructure.GPIO_PuPd=GPIO_PuPd_UP;//����
		GPIO_Init(KEY_Port,&GPIO_InitStructure); //��ʼ���ṹ��
		
		GPIO_InitStructure.GPIO_Mode=GPIO_Mode_IN; //����ģʽ
		GPIO_InitStructure.GPIO_Pin=KEY_UP_Pin;//�ܽ�����
		GPIO_InitStructure.GPIO_PuPd=GPIO_PuPd_DOWN;//����
		GPIO_Init(KEY_UP_Port,&GPIO_InitStructure); //��ʼ���ṹ��
	
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
u8 key_scan(u8 mode)
{
		static u8 key=1;
		if(key==1 && (READ_PIN_KEY_UP==PIN_HIGH || READ_PIN_KEY_DOWN==PIN_LOW || READ_PIN_KEY_LEFT==PIN_LOW || READ_PIN_KEY_RIGHT==PIN_LOW)) //����һ����������
		{
			rt_thread_delay(rt_tick_from_millisecond(10));  //����
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
		else if(READ_PIN_KEY_UP==PIN_LOW && READ_PIN_KEY_DOWN==PIN_HIGH && READ_PIN_KEY_LEFT==PIN_HIGH && READ_PIN_KEY_RIGHT==PIN_HIGH)    //�ް�������
		{
			key=1;
		}
		if(mode == 1) //������������
		{
			key=1;
		}
		
		return 0;
}
