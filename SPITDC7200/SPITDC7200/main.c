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
	sei();

	//Over precaution because why the actual fuck not.
	_delay_ms(50);

	PORTA = 0xFF;

	_delay_ms(2000);

	PORTA = 0x00;

	_delay_ms(500);

	PORTB = PORTB ^ 0x08;
	SPDR = 0xAA;
    /* Replace with your application code */
    while (1) 
    {
		
    }
}

ISR(SPI_STC_vect)
{
	PORTA = SPDR;
	PORTB = PORTB ^ 0x08;
}