/*
 * IndividuallyAddressableLED.c
 *
 * Created: 9/18/2018 10:32:03 AM
 * Author : Morgan
 */ 

#include "main.h"


int main(void)
{
	//Setting up the micro-controllers ports and delaying so the system and peripherals can get setup.
    initialization();
	_delay_ms(250);

	//Indicator LED turned on.
	PORTB = 0x01;

	//Display a row of 72 red.
	for(int i = 0; i < 72; i++)
	{
		dispOneLED(0b000000001111111100000000);
	}

	//Allowing display to hold.
	_delay_ms(2000);

	//Display a row of 72 red blue.
	for(int i = 0; i < 72; i++)
	{
		dispOneLED(0b111111111111111100000000);
	}

	//Allowing display to hold.
	_delay_ms(2000);

	//Display a row of 72 blue
	for(int i = 0; i < 72; i++)
	{
		dispOneLED(0b111111110000000000000000);
	}

	//Allowing display to hold.
	_delay_ms(2000);

	//Display a row of 72 blue green
	for(int i = 0; i < 72; i++)
	{
		dispOneLED(0b111111110000000011111111);
	}

	//Allowing display to hold.
	_delay_ms(2000);

	//Display a row of 72 green
	for(int i = 0; i < 72; i++)
	{
		dispOneLED(0b000000000000000011111111);
	}

	//Allowing display to hold.
	_delay_ms(2000);

	//Display a row of 72 green red.
	for(int i = 0; i < 72; i++)
	{
		dispOneLED(0b000000001111111111111111);
	}

	//Allowing display to hold.
	_delay_ms(2000);

	//Display a row of 72 white
	for(int i = 0; i < 72; i++)
	{
		dispOneLED(0b111111111111111111111111);
	}

	//Allowing display to hold.
	_delay_ms(2000);

	//Clearing display
	clear(72);

    while (1) 
    {
		
    }
}

