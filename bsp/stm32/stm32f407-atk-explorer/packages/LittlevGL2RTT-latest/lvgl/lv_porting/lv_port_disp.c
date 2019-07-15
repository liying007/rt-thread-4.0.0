/**
 * @file lv_port_disp_templ.c
 *
 */

 /*Copy this file as "lv_port_disp.c" and set this value to "1" to enable content*/
#if 1

/*********************
 *      INCLUDES
 *********************/
#include "lv_port_disp.h"
#include "stm32f4xx_hal.h"
#include "tftlcd.h" 
#include "key.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void disp_init(void);

static void disp_flush(int32_t x1, int32_t y1, int32_t x2, int32_t y2, const lv_color_t * color_p);
static void disp_map(int32_t x1, int32_t y1, int32_t x2, int32_t y2, const lv_color_t * color_p);
static void disp_fill(int32_t x1, int32_t y1, int32_t x2, int32_t y2,  lv_color_t color);
#if USE_LV_GPU
static void mem_blend(lv_color_t * dest, const lv_color_t * src, uint32_t length, lv_opa_t opa);
static void mem_fill(lv_color_t * dest, uint32_t length, lv_color_t color);
#endif

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

static void lvgl_tick_run(void *p)
{
    while(1)
    {
        lv_tick_inc(1); 
        rt_thread_delay(1);
    }
} 
/**********************
 *   GLOBAL FUNCTIONS
 **********************/

bool keyboard_read(lv_indev_data_t*data){
  //data->key = last_key();            /*Set the last pressed or released key*/
	u8 key = key_scan();
  if(key){
		data->key = key;
    data->state = LV_INDEV_STATE_PR;
  }
  else{
		data->key = 0;
    data->state = LV_INDEV_STATE_REL;
  }
  return false; /*No buffering so no more data read*/
}

lv_action_t keyboard_action(lv_obj_t * kb)
{
		lv_action_t action;
		rt_kprintf("Clicked\n");
		return action;
}

void test_keyboard()
{
	/*Create styl0es for the keyboard*/
	static lv_style_t rel_style, pr_style;

	lv_style_copy(&rel_style, &lv_style_btn_rel);
	rel_style.body.radius = 0;

	lv_style_copy(&pr_style, &lv_style_btn_pr);
	pr_style.body.radius = 0;

	/*Create a keyboard and apply the styles*/
	lv_obj_t *kb = lv_kb_create(lv_scr_act(), NULL);
	lv_kb_set_cursor_manage(kb, true);
	lv_kb_set_style(kb, LV_KB_STYLE_BG, &lv_style_transp_tight);
	lv_kb_set_style(kb, LV_KB_STYLE_BTN_REL, &rel_style);
	lv_kb_set_style(kb, LV_KB_STYLE_BTN_PR, &pr_style);

	/*Create a text area. The keyboard will write here*/
	lv_obj_t *ta = lv_ta_create(lv_scr_act(), NULL);
	lv_obj_align(ta, NULL, LV_ALIGN_IN_TOP_MID, 0, 10);
	lv_ta_set_text(ta, "");

	/*Assign the text area to the keyboard*/
	lv_kb_set_ta(kb, ta);
	//lv_kb_set_ok_action(kb, keyboard_action);
}

void lv_port_disp_init(void *p)
//void lv_port_disp_init(void)
{
    /*-------------------------
     * Initialize your display
     * -----------------------*/  
    disp_init();

    /*-----------------------------------
     * Register the display in LittlevGL
     *----------------------------------*/

    lv_disp_drv_t disp_drv;                         /*Descriptor of a display driver*/
    lv_disp_drv_init(&disp_drv);                    /*Basic initialization*/

    /*Set up the functions to access to your display*/

    /*Used in buffered mode (LV_VDB_SIZE != 0  in lv_conf.h)*/
    disp_drv.disp_flush = disp_flush;

    /*Used in unbuffered mode (LV_VDB_SIZE == 0  in lv_conf.h)*/
    disp_drv.disp_fill = disp_fill;

    /*Used in unbuffered mode (LV_VDB_SIZE == 0  in lv_conf.h)*/
    disp_drv.disp_map = disp_map;

#if USE_LV_GPU
    /*Optionally add functions to access the GPU. (Only in buffered mode, LV_VDB_SIZE != 0)*/

    /*Blend two color array using opacity*/
    disp_drv.mem_blend = mem_blend;

    /*Fill a memory array with a color*/
    disp_drv.mem_fill = mem_fill;
#endif

    /*Finally register the driver*/
    lv_disp_drv_register(&disp_drv);
		
		
		lv_indev_drv_t indev_drv;
    lv_indev_drv_init(&indev_drv);          //Basic initialization
    indev_drv.type = LV_INDEV_TYPE_KEYPAD;
    indev_drv.read = keyboard_read;         //This function will be called periodically (by the library) to get the mouse position and state
    lv_indev_drv_register(&indev_drv);
		
		rt_thread_t thread = RT_NULL; 
    thread = rt_thread_create("lv_tick", lvgl_tick_run, RT_NULL, 1024, 2, 5); 
    if(thread != RT_NULL)
    {
        rt_thread_startup(thread);
    }

		//test_keyboard();
		//test_hz();
		
		while(1) {
        /* Periodically call this function.
         * The timing is not critical but should be between 1..10 ms */
        lv_task_handler();
        HAL_Delay(5);/*delay_ms(5)*/
    }
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

/* Initialize your display and the required peripherals. */
static void disp_init(void)
{
    /*You code here*/
		lv_init();
		TFTLCD_Init();			//LCD≥ı ºªØ
}

/* Flush the content of the internal buffer the specific area on the display
 * You can use DMA o   r any hardware acceleration to do this operation in the background but
 * 'lv_flush_ready()' has to be called when finished
 * This function is required only when LV_VDB_SIZE != 0 in lv_conf.h*/
static void disp_flush(int32_t x1, int32_t y1, int32_t x2, int32_t y2, const lv_color_t * color_p)
{
    /*The most simple case (but also the slowest) to put all pixels to the screen one-by-one*/
    int32_t x;
    int32_t y;
    for(y = y1; y <= y2; y++) {
        for(x = x1; x <= x2; x++) {
            // Put a pixel to the display. For example: 
            // put_px(x, y, *color_p)
						LCD_DrawFRONT_COLOR(x, y, color_p->full);
						color_p++;
        }
    }
		
	
    /* IMPORTANT!!!
     * Inform the graphics library that you are ready with the flushing*/
    lv_flush_ready();
}


/* Write a pixel array (called 'map') to the a specific area on the display
 * This function is required only when LV_VDB_SIZE == 0 in lv_conf.h*/
static void disp_map(int32_t x1, int32_t y1, int32_t x2, int32_t y2, const lv_color_t * color_p)
{
    /*The most simple case (but also the slowest) to put all pixels to the screen one-by-one*/

    int32_t x;
    int32_t y;
    for(y = y1; y <= y2; y++) {
        for(x = x1; x <= x2; x++) {
            /* Put a pixel to the display. For example: */
            /* put_px(x, y, *color_p)*/
						LCD_DrawFRONT_COLOR(x, y, color_p->full);
            color_p++;
        }
    }
}


/* Write a pixel array (called 'map') to the a specific area on the display
 * This function is required only when LV_VDB_SIZE == 0 in lv_conf.h*/
static void disp_fill(int32_t x1, int32_t y1, int32_t x2, int32_t y2,  lv_color_t color)
{
    /*The most simple case (but also the slowest) to put all pixels to the screen one-by-one*/

    int32_t x;
    int32_t y;
    for(y = y1; y <= y2; y++) {
        for(x = x1; x <= x2; x++) {
            /* Put a pixel to the display. For example: */
            /* put_px(x, y, *color)*/
						LCD_DrawFRONT_COLOR(x, y, color.full);
        }
    }

    (void)color; /*Just to avid warnings*/
}

/*OPTIONAL: GPU INTERFACE*/
#if USE_LV_GPU

/* If your MCU has hardware accelerator (GPU) then you can use it to blend to memories using opacity
 * It can be used only in buffered mode (LV_VDB_SIZE != 0 in lv_conf.h)*/
static void mem_blend(lv_color_t * dest, const lv_color_t * src, uint32_t length, lv_opa_t opa)
{
    /*It's an example code which should be done by your GPU*/

    uint32_t i;
    for(i = 0; i < length; i++) {
        dest[i] = lv_color_mix(dest[i], src[i], opa);
    }
}

/* If your MCU has hardware accelerator (GPU) then you can use it to fill a memory with a color
 * It can be used only in buffered mode (LV_VDB_SIZE != 0 in lv_conf.h)*/
static void mem_fill(lv_color_t * dest, uint32_t length, lv_color_t color)
{
    /*It's an example code which should be done by your GPU*/

    uint32_t i;
    for(i = 0; i < length; i++) {
        dest[i] = color;
    }
}

#endif  /*USE_LV_GPU*/

#endif