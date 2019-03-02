/*
 * Initialize.c
 *
 * Created: 2/28/2019 8:11:38 PM
 *  Author: mffields
 */ 

 #include "Initialize.h"

 void initialize()
 {
	//This sets Pin 7 of the MCU Control Register to 1. This must be done so that PORTC's secondary function (JTAG debugging) does not
	//over rule the DDRC declarations. It must also be written to twice (in less than 4 cycles) to actually change the register. 
	//This is a safety feature so that the JTAG does not get changed by accident. 
	MCUCR = 0x80;
	MCUCR = 0x80;
	
	//Setting the port for output
	DDRC = 0xFF;

	//Unnecessarily setting the pins to logic low.
	PORTC = 0x00;
 }