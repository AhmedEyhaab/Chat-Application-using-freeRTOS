/*
 * DIO_cnfg.h
 *
 *  Created on: Sep 22, 2019
 *      Author: HOBA
 */

#ifndef DIO_CNFG_H_
#define DIO_CNFG_H_

#include "std_types.h"
#include <avr/io.h>
#include <util/delay.h>


typedef enum {Switch=0,keypad,LCD,LED,NUM_OF_PINS=28}PINS_t; // types

#define PORT_A              'A'
#define PORT_B              'B'
#define PORT_C              'C'
#define PORT_D              'D'


#define MAX_NUMBER_OF_PINS (uint8)32


#define PIN0                0
#define PIN1                1
#define PIN2                2
#define PIN3                3
#define PIN4                4
#define PIN5                5
#define PIN6                6
#define PIN7                7

#define OUTPUT  	        1
#define INPUT		        0

#define PULLUP	            1
#define PULLDOWN            0


#ifndef INITIALIZED
#define INITIALIZED			(1)
#endif

#ifndef NOT_INITIALIZED
#define NOT_INITIALIZED		(0u)
#endif


#define NA			        0xff

#define KEYPAD_PORT_	PORT_C
#define LCD_4Bits_PORT_ PORT_A
#define SWITCH_1_PORT_	PORT_B
#define SWITCH_2_PORT_	PORT_C
#define LED_PORT_		PORT_B

#define SWITCH_PORT_CR  DDRB
#define SWITCH_PORT_DR  PORTB

#define LED_3_PIN		PIN7
#define LED_2_PIN		PIN6
#define LED_1_PIN		PIN5
#define LED_0_PIN		PIN4

#define SWITCH_1_PIN	PIN2
#define SWITCH_2_PIN	PIN4

typedef struct
{
	uint8 PORT;
	uint8 PIN;
	uint8 DIR;
	uint8 VALUE;
	uint8 PULL;
	uint8 IS_init;
}DIO_cnfg_t;



extern DIO_cnfg_t DIO_cnfg_arr[NUM_OF_PINS];


#endif /* DIO_CNFG_H_ */
