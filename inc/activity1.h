#ifndef __LEDSTAT_H_
#define __LEDSTAT_H_
/**
 * @file activity1.h
 * @author 256268 (dikshithcs123@gmail.com)
 * @brief activity 1 ,assigning pins for led ,swaitch and heater.
 * @version 0.1
 * @date 2021-04-30
 *
 * @copyright Copyright (c) 2021
 *
 */



/**
 * Include files
 */
#include <avr/io.h>
#include "activity1.h"

//The required Macro definitions

#define LED_ON 	(0x01)			/* LED state=HIGH */
#define LED_OFF	(0x00)			/* LED state=LOW */
#define F_CPU 16000000UL 	/* Clock Frequency of MCU is set to 16 MHz */
#define LED_PORT (PORTD)    /* LED Port*/
#define LED_PIN  (PORTD4)   /* Pin number where LED is connected */
#define SWITCH_ON (PINC&(1<<5)) // S1 ON
#define HEATER_ON (PINC&(1<<4)) // S2 ON

/**
 * Function Definitions
 */

/**
 * @brief To change the state of the LED Pin according to the value of S1 and S2.
 *
 * @param state voltage level to which the LED Pin should be set.
 */
void ledchange(uint8_t state);


#endif /** __LEDCHANGE_H_ */
