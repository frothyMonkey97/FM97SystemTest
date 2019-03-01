/*
 * SPISlave.c
 *
 * Created: 2/28/2019 8:07:43 PM
 * Author : mffields
 */ 

#include "main.h"


int main(void)
{
	//Delay to allow MCU to power up and master to get set first.
	_delay_ms(100);

	//Initializing the MCU
	initialize();
	SPIinitializeSlave();

	//Over precaution because why the actual fuck not.
	_delay_ms(50);

	PORTC = 0x01;
	
    /* Replace with your application code */
    while (1) 
    {
    }
}

