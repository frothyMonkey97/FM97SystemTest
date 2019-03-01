/*
 * Initialize.c
 *
 * Created: 2/28/2019 8:11:38 PM
 *  Author: mffields
 */ 

 #include "Initialize.h"

 void initialize()
 {
	//Setting pin one as output and the rest of the pins inputs
	DDRC = 0x01;

	//Unnecessarily setting the pins to logic low.
	PORTC = 0x00;
 }