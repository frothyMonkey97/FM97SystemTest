/*
 * SPIMaster.c
 *
 * Created: 2/28/2019 4:29:35 PM
 * Author : mffields
 */ 

#include "main.h"


int main(void)
{
	//Delaying to allow for MCU and external systems to set up
	_delay_ms(50);
	
	//Initializing the MCU
	initialize();
	SPIinitializeMaster();

	//Over precaution because why the actual fuck not.
	_delay_ms(50);

	PORTC = 0x01;
    /* Replace with your application code */
    while (1) 
    {
    }
}

