/**
 * @file activity4.h
 * @author 256268 (dikshithcs123@gmail.com)
 * @brief Configuration for USART communication.
 * @version 0.1
 * @date 2021-04-30
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED

#define F_CPU 16000000UL 	//Clock is set to 16 MHz 

#include<avr/io.h>
#include <util/delay.h>
#include <stdint.h>

/**
 * @brief Function to initialize the USART communication
 * @param[in] unsigned integer to set the baud rate to 9600
 * @note All the transmitter and receivers are enabled
 */
void InitUSART(uint16_t);

/**
 * @brief Function to read the character from UDR register
 * @return Returning the character that is stored in UDR register
 * @note Wait until the data is available and store it in UDR register
 */
char USARTRead();

/**
 * @brief Function to write the character to the USART buffer
 * @param[in] uint16_t type integer is temperature value which is passed as input value
 * @note Wait until the transimitter is ready and store it in UDR register
 */
void USARTWrite(uint16_t);

#endif // ACTIVITY4_H_INCLUDED
