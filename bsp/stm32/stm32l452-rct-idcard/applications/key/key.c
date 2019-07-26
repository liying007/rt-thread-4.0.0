#include "key.h"



/*******************************************************************************
* 函 数 名         : keypad_init
* 函数功能		     : initialize keypad
*******************************************************************************/
static KEYPAD keypad[KEYNUMBERS];

//key thread
void key_thread_entry(void* parameter)
{
		while (1)
    {
				keyprocess();
				rt_thread_delay(rt_tick_from_millisecond(10));
		}
}

void keypad_init()
{
		/* set PowerKey pin mode to inpuput */
		keypad[AKEYCODE_POWER].keyCode = AKEYCODE_POWER;
		keypad[AKEYCODE_POWER].readSatus  = KEYNULL;
		keypad[AKEYCODE_POWER].lastSatus = KEYNULL;
		keypad[AKEYCODE_POWER].downJitter = 0;
		keypad[AKEYCODE_POWER].upJitter = 0;
	
	  /* 
			set other keys if necessary 
			......
		*/
		
	/* start a os thread to poll all keys in fixed time, eg:20ms*/
		rt_thread_t keyThread = RT_NULL; 
    keyThread = rt_thread_create("key",
                    key_thread_entry,
                    RT_NULL,
                    1024,
                    2,
                    10);
    if (keyThread != RT_NULL)
			rt_thread_startup(keyThread);
}


/*******************************************************************************
* 函 数 名         : 
* 函数功能		     : 按键扫描检测
* 输    入         : void
* 输    出         : 0：未有按键按下
					           1：按键按下
*******************************************************************************/
void keyupevent()
{
}

void keypressedevent()
{
}

void keylpressedevent()
{
}


/*******************************************************************************
* 函 数 名         : keypad_scan
* 函数功能		     : 按键扫描检测
* 输    入         : void
* 输    出         : 0：未有按键按下
					           1：按键按下
*******************************************************************************/
uint32_t keyscan(uint32_t serial)
{
	  volatile int keyflag = KEYUP;
	  
		//scan all keys
		switch (keypad[serial].keyCode)
		{
			case AKEYCODE_SOFT_LEFT:
					break;
			case AKEYCODE_SOFT_RIGHT:
					break;
			case AKEYCODE_HOME:
					break;
			case AKEYCODE_BACK:
					break;
			case AKEYCODE_CALL:
					break;
			case AKEYCODE_POWER:
					if ( rt_pin_read(PIN_POWER) )
					{
							  keyflag = KEYDOWN; 
								keypad[serial].readSatus = KEYDOWN;
					}else {
								keyflag = KEYUP; 
								keypad[serial].readSatus = KEYUP;
					}
					break;
			case AKEYCODE_UNKNOWN:
			default:					
					break;
		}

		return keyflag;
}

/*******************************************************************************
* 函 数 名         : keystatus
* 函数功能		     : dejitter & long pressed detection
* 输    入         : void
* 输    出         : 0：未有按键按下
					           1：按键按下
*******************************************************************************/
uint32_t keystatus(uint32_t ser,uint32_t status)
{
	switch (keypad[ser].lastSatus)
	{
			case KEYNULL:
						if ( status == KEYDOWN ) 
						{
								keypad[ser].lastSatus = KEYDOWN;
						}
				break;
					 
			case KEYUP:
						if ( status == KEYDOWN )
						{
								keypad[ser].lastSatus = KEYDOWN;
								keypad[ser].upJitter = 0;
								keypad[ser].downJitter = 0;
							
						}else if ( status == KEYUP )
						{
							  keypad[ser].upJitter++;
								if ( keypad[ser].upJitter >= KEYJITTER ) 
								{
									keypad[ser].lastSatus = KEYNULL;
									keypad[ser].upJitter = 0;
									/*add call back */
									keyupevent();
								}
						}
				break;
			
			case KEYDOWN:
						if ( status == KEYDOWN )
						{
								keypad[ser].downJitter++;
								if (keypad[ser].downJitter >= KEYJITTER)
								{
									keypad[ser].lastSatus = KEYPRESSED;
									keypad[ser].downJitter = 0;
									/*add call back*/
									keypressedevent();
								}								
						}else if ( status == KEYUP )
						{
								keypad[ser].lastSatus = KEYUP;
							  keypad[ser].downJitter = 0;
							  keypad[ser].upJitter = 0;
						}	
				break;
			
			case KEYPRESSED:
						if ( status == KEYDOWN )
						{
								keypad[ser].downJitter++;
								if (keypad[ser].downJitter >= KEYJITTER)
								{
									keypad[ser].lastSatus = KEYLONGPRSED;
									keypad[ser].downJitter = 0;
									/*add call back*/
									keylpressedevent();
								}								
						}else if ( status == KEYUP )
						{
								keypad[ser].lastSatus = KEYUP;
							  keypad[ser].downJitter = 0;
							  keypad[ser].upJitter = 0;
						}	
				break;
			
			case KEYLONGPRSED:
						if ( status == KEYDOWN )
						{
								keypad[ser].downJitter++;												
						}else if ( status == KEYUP )
						{
								keypad[ser].lastSatus = KEYUP;
							  keypad[ser].downJitter = 0;
							  keypad[ser].upJitter = 0;
						}	
				break;
						
			default:
					keypad[ser].lastSatus = KEYNULL;
					keypad[ser].readSatus = KEYNULL;
					keypad[ser].downJitter = 0;
					keypad[ser].upJitter 	 = 0;
				break;
	}	
	
	return 1;
}
	



/*******************************************************************************
* 函 数 名         : keyprocess
* 函数功能		     : polling all keys and run key state machine
* 输    入         : void
* 输    出         : void
*******************************************************************************/

uint32_t keyprocess(void)
{
	for (int i=0; i< KEYNUMBERS ; i++)
	{
			keyscan(keypad[i].keyCode);				//scan every key
			keystatus(i,keypad[i].readSatus);	  //key state machine
	}
	
	return 1;
}
