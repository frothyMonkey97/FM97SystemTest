/*
 * Initialize.c
 *
 * Created: 2/28/2019 4:58:14 PM
 *  Author: mffields
 */ 

 #include "Initialize.h"

 void initialize(void)
 {
	//Set port C to be all input excluding pin 1 (PORTC PIN1) to be output
	DDRC = 0x01;

	//Set port C to have all pins be logic low
	PORTC = 0x00;
	
 }