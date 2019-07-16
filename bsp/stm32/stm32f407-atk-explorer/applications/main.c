/*
 * Copyright (c) 2006-2018, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2018-11-06     SummerGift   first version
 * 2018-11-19     flybreak     add stm32f407-atk-explorer bsp
 */
#include <integer.h>
#include <rtthread.h>
#include <rtdevice.h>
#include <board.h>
#include <dfs_fs.h>
#include <spi_flash_sfud.h>
#include <drivers/usb_host.h>
#include <fal.h>
#include <rtdbg.h>

#include "spi_flash_w25qxx.h"
#include "drv_spi.h"
#include "./tftlcd/tftlcd.h" 
#include "stm32f407xx.h"
#include "lv_port_disp.h"
#include "littlevgl2rtt.h"
#include "lv_conf.h"
#include "./key/key.h"
#include "app_uart.h"
#include "ff.h"
#include "dfs_file.h"
#include "led.h"
#include "sqlite3.h"


/* defined the LED0 pin: PF9 */
#define LED0_PIN    GET_PIN(F, 9)

extern void mkdir_sample(void);
extern void opendir_sample(void);
extern void readwrite_sample(void);
extern void spi_w25q_sample(int argc, char *argv[]);
extern int rt_lvgl_demo_init(void);
lv_res_t btn_action(lv_obj_t * btn);
static lv_res_t btn_click_action(lv_obj_t * btn);
void lv_tutorial_fonts(void);
static int testdb1(void);
//extern int rt_lvgl_demo_init(void);
//extern rt_err_t stm32_spi_bus_attach_device(rt_uint32_t pin, const char *bus_name, const char *device_name);


//uart3 thread
void test_thread_entry(void* parameter)
{    
    rt_uint8_t uart_rx_data;
    
    // open serial
    if (uart_open("uart3") != RT_EOK)
    {
        rt_kprintf("uart open error.\n");
         while (1)
         {
            rt_thread_delay(10);
         }
    }
       
    uart_putchar('2');
    uart_putchar('0');
    uart_putchar('1');
    uart_putchar('8');
    uart_putchar('\n');
    uart_putstring("Hello RT-Thread!\r\n");
    
    while (1)
    {   
        //read data
        uart_rx_data = uart_getchar();
        uart_rx_data = uart_rx_data + 1;
        //put data
        uart_putchar(uart_rx_data);

    }            
}

/*
//W25Q128
static int rt_hw_spi_flash_with_sfud_init(void)
{
		stm32_spi_bus_attach_device(14, "spi1", "spi10");
		w25qxx_init("W25Q128","spi10");
				
		 return RT_EOK;
}
INIT_COMPONENT_EXPORT(rt_hw_spi_flash_with_sfud_init);
*/

//mount flash  W25Q128		
static int mnt_init(void)
{
	rt_thread_delay(RT_TICK_PER_SECOND * 5);

	if(dfs_mount("W25Q128", "/", "elm", 0, 0) == 0)
	{
			rt_kprintf("spi flash mount to / success \n");
	}
	else
	{
			 rt_kprintf("spi flash mount to / failed \n");
	}
}

void test_hz1()
{
	lv_tutorial_fonts();
}

void test_hz(void)
{
    static lv_style_t style1;
    char *str="hello 你好啊吧";
 
    /*Create a style and use the new font*/
    lv_style_copy(&style1, &lv_style_pretty);
    style1.text.font = LV_FONT_DEFAULT; 
 
    /*Create a label and set new text*/
    lv_obj_t * label = lv_label_create(lv_scr_act(), NULL);
    lv_obj_set_pos(label, 10, 10);
    lv_label_set_style(label, &style1);
    lv_label_set_text(label, str);
}

FRESULT test_readSdFile()
{
		int ret;
		FIL *fd;
    FRESULT res;
		uint32_t br;
		uint8_t letterBuff[32] = {0};
		uint8_t *pBuf = "123456";
		
		fd = (FIL *)rt_malloc(sizeof(FIL));

		res = f_open(fd, "/123.txt",  FA_OPEN_EXISTING | FA_READ);
		
		if(res != FR_OK) 
		{ 
			return NULL;
		}
		
		//res = f_write(fd, pBuf, strlen(pBuf), &br);
		res = f_read(fd, letterBuff, 2, &br);
		f_close(fd);
		if(fd)
			rt_free(fd);
		
		return res;
}

void test_bar()
{
	/*Create a default bar*/
	lv_obj_t * bar1 = lv_bar_create(lv_scr_act(), NULL);
	lv_obj_set_size(bar1, 130, 20);
	lv_obj_align(bar1, NULL, LV_ALIGN_IN_TOP_RIGHT, -20, 30);
	lv_bar_set_value(bar1, 70);

	/*Create a label right to the bar*/
	lv_obj_t * bar1_label = lv_label_create(lv_scr_act(), NULL);
	lv_label_set_text(bar1_label, "default");
	lv_obj_align(bar1_label, bar1, LV_ALIGN_OUT_LEFT_MID, -10, 0);

	/*Create a bar and an indicator style*/
	static lv_style_t style_bar;
	static lv_style_t style_indic;

	lv_style_copy(&style_bar, &lv_style_pretty);
	style_bar.body.main_color = LV_COLOR_BLACK;
	style_bar.body.grad_color = LV_COLOR_GRAY;
	style_bar.body.radius = LV_RADIUS_CIRCLE;
	style_bar.body.border.color = LV_COLOR_WHITE;

	lv_style_copy(&style_indic, &lv_style_pretty);
	style_indic.body.grad_color =  LV_COLOR_GREEN;
	style_indic.body.main_color=  LV_COLOR_LIME;
	style_indic.body.radius = LV_RADIUS_CIRCLE;
	style_indic.body.shadow.width = 10;
	style_indic.body.shadow.color = LV_COLOR_LIME;
	style_indic.body.padding.hor = 3;           /*Make the indicator a little bit smaller*/
	style_indic.body.padding.ver = 3;

	/*Create a second bar*/
	lv_obj_t * bar2 = lv_bar_create(lv_scr_act(), bar1);
	lv_bar_set_style(bar2, LV_BAR_STYLE_BG, &style_bar);
	lv_bar_set_style(bar2, LV_BAR_STYLE_INDIC, &style_indic);
	lv_obj_align(bar2, bar1, LV_ALIGN_OUT_BOTTOM_MID, 0, 30); /*Align below 'bar1'*/

	/*Create a second label*/
	lv_obj_t * bar2_label = lv_label_create(lv_scr_act(), bar1_label);
	lv_label_set_text(bar2_label, "modified");
	lv_obj_align(bar2_label, bar2, LV_ALIGN_OUT_LEFT_MID, -10, 0);
}	

void test_line()
{
	LCD_Clear(0xFFFF);
	/*Create an array for the points of the line*/
	static lv_point_t line_points[] = { {5, 5}, {70, 70}, {120, 10}, {180, 60}, {240, 10} };

	/*Create line with default style*/
	lv_obj_t * line1;
	line1 = lv_line_create(lv_scr_act(), NULL);
	lv_line_set_points(line1, line_points, 5);     /*Set the points*/
	lv_obj_align(line1, NULL, LV_ALIGN_IN_TOP_MID, 0, 20);

	/*Create new style (thin light blue)*/
	static lv_style_t style_line2;
	lv_style_copy(&style_line2, &lv_style_plain);
	style_line2.line.color = LV_COLOR_MAKE(0x2e, 0x96, 0xff);
	style_line2.line.width = 2;

	/*Copy the previous line and apply the new style*/
	lv_obj_t * line2 = lv_line_create(lv_scr_act(), line1);
	lv_line_set_style(line2, &style_line2);
	lv_obj_align(line2, line1, LV_ALIGN_OUT_BOTTOM_MID, 0, -20);

	/*Create new style (thick dark blue)*/
	static lv_style_t style_line3;
	lv_style_copy(&style_line3, &lv_style_plain);
	style_line3.line.color = LV_COLOR_MAKE(0x00, 0x3b, 0x75);
	style_line3.line.width = 5;

	/*Copy the previous line and apply the new style*/
	lv_obj_t * line3 = lv_line_create(lv_scr_act(), line1);
	lv_line_set_style(line3, &style_line3);
	lv_obj_align(line3, line2, LV_ALIGN_OUT_BOTTOM_MID, 0, -20);
	
	
}

void test_button() 
{
	
		LCD_Clear(0xFFFF);
		static lv_style_t style1;
    char *str="default button";
 
    /*Create a style and use the new font*/
    lv_style_copy(&style1, &lv_style_plain);
    style1.text.font = LV_FONT_DEFAULT; 
 
    /*Create a label and set new text*/
    lv_obj_t * label = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_style(label, &style1);
    lv_label_set_text(label, str); 
		lv_obj_align(label, NULL, LV_ALIGN_IN_TOP_MID, 0, 5);

		/*Create a normal button*/
		lv_obj_t * btn1 = lv_btn_create(lv_scr_act(), NULL);
		lv_cont_set_fit(btn1, true, true); /*Enable resizing horizontally and vertically*/
		lv_obj_align(btn1, label, LV_ALIGN_OUT_BOTTOM_MID, 0, 10);
		lv_obj_set_free_num(btn1, 1);   /*Set a unique number for the button*/
		lv_btn_set_action(btn1, LV_BTN_ACTION_CLICK, btn_click_action);

		/*Add a label to the button*/
		label = lv_label_create(btn1, NULL);
		lv_label_set_text(label, "Normal");

		/*Copy the button and set toggled state. (The release action is copied too)*/
		lv_obj_t * btn2 = lv_btn_create(lv_scr_act(), btn1);
		lv_obj_align(btn2, btn1, LV_ALIGN_OUT_BOTTOM_MID, 0, 10);
		lv_btn_set_state(btn2, LV_BTN_STATE_TGL_REL);  /*Set toggled state*/
		lv_obj_set_free_num(btn2, 2);               /*Set a unique number for the button*/

		/*Add a label to the toggled button*/
		label = lv_label_create(btn2, NULL);
		lv_label_set_text(label, "Toggled");

		/*Copy the button and set inactive state.*/
		lv_obj_t * btn3 = lv_btn_create(lv_scr_act(), btn1);
		lv_obj_align(btn3, btn2, LV_ALIGN_OUT_BOTTOM_MID, 0, 10);
		lv_btn_set_state(btn3, LV_BTN_STATE_INA);   /*Set inactive state*/
		lv_obj_set_free_num(btn3, 3);               /*Set a unique number for the button*/

		/*Add a label to the inactive button*/
		label = lv_label_create(btn3, NULL);
		lv_label_set_text(label, "Inactive");
		
		rt_kprintf("Button create!\n");
}

void test_button2()
{
	LCD_Clear(0xFFFF);
	lv_obj_t * btn = lv_btn_create(lv_scr_act(), NULL);     /*Add a button the current screen*/
	lv_obj_set_pos(btn, 10, 10);                            /*Set its position*/
	lv_obj_set_size(btn, 100, 50);                          /*Set its size*/

	lv_btn_set_action(btn, LV_BTN_ACTION_CLICK, btn_action);/*Assign a callback to the button*/
	lv_obj_t * label = lv_label_create(btn, NULL);          /*Add a label to the button*/
	lv_label_set_text(label, "Button");                     /*Set the labels text*/
	
	
	static lv_style_t style_btn_rel;                        /*A variable to store the released style*/
	lv_style_copy(&style_btn_rel, &lv_style_plain);         /*Initialize from a built-in style*/
	style_btn_rel.body.border.color = LV_COLOR_HEX3(0x269);
	style_btn_rel.body.border.width = 1;
	style_btn_rel.body.main_color = LV_COLOR_HEX3(0xADF);
	style_btn_rel.body.grad_color = LV_COLOR_HEX3(0x46B);
	style_btn_rel.body.shadow.width = 4;
	style_btn_rel.body.shadow.type = LV_SHADOW_BOTTOM;
	style_btn_rel.body.radius = LV_RADIUS_CIRCLE;
	style_btn_rel.text.color = LV_COLOR_HEX3(0xDEF);

	static lv_style_t style_btn_pr;                         /*A variable to store the pressed style*/
	lv_style_copy(&style_btn_pr, &style_btn_rel);           /*Initialize from the released style*/
	style_btn_pr.body.border.color = LV_COLOR_HEX3(0x46B);
	style_btn_pr.body.main_color = LV_COLOR_HEX3(0x8BD);
	style_btn_pr.body.grad_color = LV_COLOR_HEX3(0x24A);
	style_btn_pr.body.shadow.width = 2;
	style_btn_pr.text.color = LV_COLOR_HEX3(0xBCD);

	lv_btn_set_style(btn, LV_BTN_STYLE_REL, &style_btn_rel);    /*Set the button's released style*/
	lv_btn_set_style(btn, LV_BTN_STYLE_PR, &style_btn_pr);      /*Set the button's pressed style*/
}

/*Will be called on click of a button of a list*/
static lv_res_t list_release_action(lv_obj_t * list_btn)
{
    printf("List element click:%s\n", lv_list_get_btn_text(list_btn));

    return LV_RES_OK; /*Return OK because the list is not deleted*/
}

void test_list()
{
	/************************
	 * Create a default list
	 ************************/
	LCD_Clear(0xFFFF);
	/*Crate the list*/
	lv_obj_t * list1 = lv_list_create(lv_scr_act(), NULL);
	lv_obj_set_size(list1, 130, 170);
	lv_obj_align(list1, NULL, LV_ALIGN_IN_TOP_LEFT, 20, 40);

	/*Add list elements*/
	lv_list_add(list1, SYMBOL_FILE, "New", list_release_action);
	lv_list_add(list1, SYMBOL_DIRECTORY, "Open", list_release_action);
	lv_list_add(list1, SYMBOL_CLOSE, "Delete", list_release_action);
	lv_list_add(list1, SYMBOL_EDIT, "Edit", list_release_action);
	lv_list_add(list1, SYMBOL_SAVE, "Save", list_release_action);

	/*Create a label above the list*/
	lv_obj_t * label;
	label = lv_label_create(lv_scr_act(), NULL);
	lv_label_set_text(label, "Default");
	lv_obj_align(label, list1, LV_ALIGN_OUT_TOP_MID, 0, -10);

	/*********************
	 * Create new styles
	 ********************/
	/*Create a scroll bar style*/
	static lv_style_t style_sb;
	lv_style_copy(&style_sb, &lv_style_plain);
	style_sb.body.main_color = LV_COLOR_BLACK;
	style_sb.body.grad_color = LV_COLOR_BLACK;
	style_sb.body.border.color = LV_COLOR_WHITE;
	style_sb.body.border.width = 1;
	style_sb.body.border.opa = LV_OPA_70;
	style_sb.body.radius = LV_RADIUS_CIRCLE;
	style_sb.body.opa = LV_OPA_60;

	/*Create styles for the buttons*/
	static lv_style_t style_btn_rel;
	static lv_style_t style_btn_pr;
	lv_style_copy(&style_btn_rel, &lv_style_btn_rel);
	style_btn_rel.body.main_color = LV_COLOR_MAKE(0x30, 0x30, 0x30);
	style_btn_rel.body.grad_color = LV_COLOR_BLACK;
	style_btn_rel.body.border.color = LV_COLOR_SILVER;
	style_btn_rel.body.border.width = 1;
	style_btn_rel.body.border.opa = LV_OPA_50;
	style_btn_rel.body.radius = 0;

	lv_style_copy(&style_btn_pr, &style_btn_rel);
	style_btn_pr.body.main_color = LV_COLOR_MAKE(0x55, 0x96, 0xd8);
	style_btn_pr.body.grad_color = LV_COLOR_MAKE(0x37, 0x62, 0x90);
	style_btn_pr.text.color = LV_COLOR_MAKE(0xbb, 0xd5, 0xf1);

	/**************************************
	 * Create a list with modified styles
	 **************************************/

	//Copy the previous list
	/*lv_obj_t * list2 = lv_list_create(lv_scr_act(),list1);
	lv_obj_align(list2, NULL, LV_ALIGN_IN_TOP_RIGHT, -20, 40);
	lv_list_set_sb_mode(list2, LV_SB_MODE_AUTO);
	lv_list_set_style(list2, LV_LIST_STYLE_BG, &lv_style_transp_tight);
	lv_list_set_style(list2, LV_LIST_STYLE_SCRL, &lv_style_transp_tight);
	lv_list_set_style(list2, LV_LIST_STYLE_BTN_REL, &style_btn_rel); //Set the new button styles
	lv_list_set_style(list2, LV_LIST_STYLE_BTN_PR, &style_btn_pr);

	//Create a label above the list
	label = lv_label_create(lv_scr_act(), label);       //Copy the previous label
	lv_label_set_text(label, "Modified");
	lv_obj_align(label, list2, LV_ALIGN_OUT_TOP_MID, 0, -10);
	*/
}






lv_res_t btn_action(lv_obj_t * btn)
{
		rt_kprintf("Clicked\n");
		return LV_RES_OK;
}

static lv_res_t btn_click_action(lv_obj_t * btn)
{
    uint8_t id = lv_obj_get_free_num(btn);

    printf("Button %d is released\n", id);

    /* The button is released.
     * Make something here */

    return LV_RES_OK; /*Return OK if the button is not deleted*/
}

//key thread
void key_thread_entry(void* parameter)
{
		key_init();
		while (1)
    {
				u8 key = key_scan(0);
				switch(key) 
				{
					case KEY_UP:
						rt_kprintf("key_scan KEY_UP pressed!\n");
						break;
					case KEY_DOWN:
						//testdb1();
						rt_kprintf("key_scan KEY_DOWN pressed!\n");
						break;
					case KEY_LEFT:
						//test_hz();
						rt_kprintf("key_scan KEY_LEFT pressed!\n");
						break;
					case KEY_RIGHT:
						//test_readSdFile();
						rt_kprintf("key_scan KEY_RIGHT pressed!\n");
						break;
				}
		}
}

void lv_tutorial_fonts(void)
{
    static lv_style_t style1;
    char *str="hello world! \n你好世界";
 
    /*Create a style and use the new font*/
    lv_style_copy(&style1, &lv_style_pretty);
    style1.text.font = LV_FONT_DEFAULT; 
 
    /*Create a label and set new text*/
    lv_obj_t * label = lv_label_create(lv_scr_act(), NULL);
    lv_obj_set_pos(label, 10, 10);
    lv_label_set_style(label, &style1);
    lv_label_set_text(label, str);
}



void convertStrToUnChar(char* str, unsigned char* UnChar)  
{  
    int i = strlen(str), j = 0, counter = 0;  
    char c[2];  
    unsigned int bytes[2];  
  
    for (j = 0; j < i; j += 2)   
    {  
        if(0 == j % 2)  
        {  
            c[0] = str[j];  
            c[1] = str[j + 1];  
            sscanf(c, "%02x" , &bytes[0]);  
            UnChar[counter] = bytes[0];  
            counter++;  
        }  
    }  
    return;  
}  


/*#define DB_NAME 		"/sdcard/m.db"
static int create_sqlite_db(void)
{ 
	int fd = open(DB_NAME, O_RDONLY);
	if(fd < 0) 
	{ 
		const char *sql = "CREATE TABLE userinfo( \ 
										id INTEGER PRIMARY KEY AUTOINCREMENT,\ 
										userid INT NOTNULL, \ 
										username varchar(32) NOTNULL);";
		return db_create_database(sql); 
	} 
	else 
	{ 
		close(fd);
		rt_kprintf("The database has already existed!\n"); 
	} 
	return -1; 
}*/

#define DB_FILE "/test.db"
#define JUDGE_ERR(pMsgErr)                          \
    do{                                             \
        if (pErrMsg != SQLITE_OK)                   \
        {                                           \
            rt_kprintf("%s:%d\tSQL error: %s\n",    \
                __FUNCTION__, __LINE__, pErrMsg);   \
            sqlite3_free(pErrMsg);                  \
        }                                           \
    } while (0)
	
static void _select_show(int row, int column, char** azResult)
{
    int i, j;

    rt_kprintf("row:%d column=%d\n", row, column);
    rt_kprintf("\nThe result of querying is : \n");

    for (i=0; i<row+1; i++)
    {
        for (j=0; j<column; j++)
        {
            rt_kprintf("%s\t", azResult[(i*column) + j]);
        }

        rt_kprintf("\n");
    }
}

static int testdb1(void)
{
    sqlite3* db = NULL;
    char* sql;
    char* pErrMsg = 0;
    char** azResult;
    int rc;
    int nrow = 0;
    int ncolumn = 0;

    rt_kprintf("\n=====case 1:\n");

    rc = sqlite3_open(DB_FILE, &db);
    if(rc)
    {
        rt_kprintf("Can’t open database: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return -1;
    }

    rt_kprintf("opened a sqlite3 database named %s successfully!\n", DB_FILE);

    sql = "CREATE TABLE test(ID INTEGER PRIMARY KEY,AGE INTEGER,LEVEL INTEGER,"
            "NAME VARCHAR(12),SALARY REAL);";
    sqlite3_exec(db, sql, 0, 0, &pErrMsg);
    JUDGE_ERR(pErrMsg);
    
    sql = "INSERT INTO test VALUES(NULL, 1, 1, '201312', 120.9);";
    sqlite3_exec(db, sql, 0, 0, &pErrMsg);
    JUDGE_ERR(pErrMsg);
    
    sql = "SELECT * FROM test";
    sqlite3_get_table(db, sql, &azResult, &nrow, &ncolumn, &pErrMsg);
    JUDGE_ERR(pErrMsg);
    _select_show(nrow, ncolumn, azResult);

    sql = "DELETE FROM test WHERE AGE = 1;";
    sqlite3_exec(db, sql, 0, 0, &pErrMsg);
    JUDGE_ERR(pErrMsg);

    sqlite3_free_table(azResult);
    sqlite3_close(db);

    return 0;
}


int main(void)
{
		struct rt_device *mtd_dev = RT_NULL;
	
		rt_kprintf("\n*****************main*****************\n");
    //led 
    Led_SetLight(LED1, true);
		Led_SetLight(LED2, true);

		//rt_usb_host_init();
	
		//key thread
		rt_thread_t tid = RT_NULL;
    tid = rt_thread_create("key",
                    key_thread_entry,
                    RT_NULL,
                    1024,
                    2,
                    10);
    if (tid != RT_NULL)
        rt_thread_startup(tid);
		
		
		
		
		//挂载flash
		/*rt_sfud_flash_probe("W25Q128", "spi10");
		w25qxx_init("W25Q128","spi10");
		mnt_init();
		*/
		
		
		//spi_w25q_sample(1, &pTemp);
		
		//testdb1();
		//test_readSdFile();

		//littlevGL thread
		/*rt_thread_t lvThread = RT_NULL; 
    lvThread = rt_thread_create("lv",
                    lv_port_disp_init,
                    RT_NULL,
                    2048,
                    3,
                    10);
    if (lvThread != RT_NULL)
			rt_thread_startup(lvThread);*/
		


		//rt_lvgl_demo_in  it();
		
		//mkdir_sample();
		
		//readwrite_sample();
	    
		/*
		fal_init();
		mtd_dev = fal_mtd_nor_device_create(FS_PARTITION_NAME);
		if (!mtd_dev)
		{
			LOG_E("Can't create a mtd device on '%s' partition", FS_PARTITION_NAME);
		}
		else
		{
			if (dfs_mount(FS_PARTITION_NAME, "/", "lfs", 0, 0) == 0)
			{
				LOG_I("Filesystem initialized!");
			}
			else
			{
				dfs_mkfs("elm", "W25Q128");
				if (dfs_mount("W25Q128", "/", "elm", 0, 0) == 0)
				{
					LOG_I("Filesystem initialized!");
				}
				else
				{
					LOG_E("Failed to initialized filesystem!");
				}
			}
		}*/
		return RT_EOK;
}
