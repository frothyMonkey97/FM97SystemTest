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
	sei();

	//Over precaution because why the actual fuck not.
	_delay_ms(50);

	PORTC = 0xFF;

	_delay_ms(2000);

	PORTC = 0x00;

	SPDR = 0xD5;
	
    /* Replace with your application code */
    while (1) 
    {
    }
}

ISR(SPI_STC_vect)
{
	PORTC = SPDR;
}