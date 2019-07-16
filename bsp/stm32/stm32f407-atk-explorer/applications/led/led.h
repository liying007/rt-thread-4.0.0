#ifndef _led_H
#define _led_H


#include <rtthread.h>
#include <rtdevice.h>
#include <board.h>
#include <stdbool.h>


/* defined the LED0 pin: PF9 */
#define LED1_PIN    GET_PIN(F, 9)
#define LED2_PIN    GET_PIN(F, 10)

#define LED1   1
#define LED2   2


void Led_SetLight(int led, bool isOn);

#endif