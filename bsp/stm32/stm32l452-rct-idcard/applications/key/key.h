#ifndef _KEY_H_
#define _KEY_H_

#include <stdint.h>
#include <rtdevice.h>
#include <drv_gpio.h>

/*
 * Key codes defination.
 */
#define KEYNUMBERS					7				//number of keys
#define KEYJITTER			2			//dejitter times  = KEYJITTER * duration

//KEY GPIO defination
#define PIN_POWER      GET_PIN(A, 0)		//PA0

//key scancode defination
typedef enum {
    AKEYCODE_UNKNOWN         = 0,
    AKEYCODE_SOFT_LEFT       = 1,
    AKEYCODE_SOFT_RIGHT      = 2,
    AKEYCODE_HOME            = 3,
    AKEYCODE_BACK            = 4,
    AKEYCODE_CALL            = 5,
    AKEYCODE_POWER           = 6,
}KEYCODE;

//Keypad status
#define KEYNULL 			0
#define KEYUP					1			//key release
#define KEYDOWN			  2			//key pressed maybe
#define KEYPRESSED    3			//key pressed actually (after jitter)
#define KEYLONGPRSED	4			//key pressed for 3+ second 
#define KEYNONE				9

//keypad struct
typedef struct {
		KEYCODE  keyCode;
		uint32_t lastSatus;		//last keyStatus
		uint32_t readSatus;		//current keyStatus
		uint32_t downJitter;	//keydown dejit Counter
		uint32_t upJitter;		//keyUp dejit Counter
}KEYPAD;





//key drivers
void keypad_init(void);
uint32_t keyprocess(void);
#endif
