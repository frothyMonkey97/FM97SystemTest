/*
 * initialization.c
 *
 * Created: 9/18/2018 10:33:21 AM
 *  Author: Morgan
 * 
 * Initializes the MCU hardware for:
 * PORTD PIN0 : out
 * PORTB PIN0 : out
 *
 */ 

#include "initialization.h"

void initialization()
{
	//Initialization of Port B to be all input excluding PIN 0, which will be output. Then ensuring that the pin is active low.
	DDRB  = 0x01;
	PORTB = 0x00;

	//Initialization of Port D to be all input excluding PIN 0, which will be output. Then ensuring that the pin is active low.
	DDRD  = 0x01;
	PORTD = 0x00;
}