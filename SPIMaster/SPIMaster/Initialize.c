/*
 * Initialize.c
 *
 * Created: 2/28/2019 4:58:14 PM
 *  Author: mffields
 */ 

 #include "Initialize.h"

 void initialize(void)
 {
	//Set port A to be all output
	DDRA = 0xFF;

	//Set port A to have all pins be logic low
	PORTA = 0x00;
	
 }