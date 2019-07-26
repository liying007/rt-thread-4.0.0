#include "tcon.h"
/**
  ******************************************************************************
  * @file           : tcon.c
  * @brief          : drive sid13531 to lighten EINK 3.5' screen
  ******************************************************************************
  * @attention
  *
	*			SID 13531 is a chip which can drive eink screen. Host cpu can communicate
	*	with it through spi interface
	*
	*     mcu ---(i2c)--- pmic -------
	*          |											|-------eink screen
	*					 |-(spi)--- sid_tcon ---
  *
  ******************************************************************************
  */
	
	
/**
  * @brief   
  * @note    
  * @retval 
  */
void tcon_poweron(void)
{

}

void tcon_poweroff(void)
{
	
}


void tcon_init(void)
{
	//s2: init sid
	//s3: init eink screen cmd
	//s4: clear screen 
}

void tcon_rotate(void);
void tcon_mirror(void);
void tcon_clear_screen(void);
void tcon_ld_image_full(uint8_t buf,uint32_t width,uint32_t height);
void tcon_ld_image_area(uint8_t buf,uint32_t startX,uint32_t startY,uint32_t width,uint32_t height);

void tcon_upd_init();
void tcon_upd_full(uint8_t buf,uint32_t width,uint32_t height);
void tcon_upd_full_area(uint8_t buf,uint32_t startX,uint32_t startY,uint32_t width,uint32_t height);
void tcon_upd_part();
void tcon_upd_part_area(uint8_t buf,uint32_t startX,uint32_t startY,uint32_t width,uint32_t height);
void tcon_enter_sleep();
void tcon_exit_sleep();
	