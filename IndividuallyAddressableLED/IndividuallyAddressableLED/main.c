/*
 * IndividuallyAddressableLED.c
 *
 * Created: 9/18/2018 10:32:03 AM
 * Author : Morgan
 */ 

#include "main.h"


int main(void)
{
    initialization();
	_delay_ms(250);


	//Hard coding the value for white into the system for two LEDs.
	//LED 1
	PORTD = 0x01;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	PORTD = 0x00;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	//G7 (0)
	PORTD = 0x01;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	PORTD = 0x00;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	//G6 (1)
	PORTD = 0x01;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	PORTD = 0x00;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	//G5 (1)
	PORTD = 0x01;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	PORTD = 0x00;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	//G4 (1)
	PORTD = 0x01;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	PORTD = 0x00;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	//G3 (1)
	PORTD = 0x01;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	PORTD = 0x00;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	//G2 (1)
	PORTD = 0x01;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	PORTD = 0x00;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	//G1 (1)
	PORTD = 0x01;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	PORTD = 0x00;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	//G0 (1)
	PORTD = 0x01;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	PORTD = 0x00;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	//R7 (0)
	PORTD = 0x01;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	PORTD = 0x00;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	//R6 (1)
	PORTD = 0x01;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	PORTD = 0x00;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	//R5 (1)
	PORTD = 0x01;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	PORTD = 0x00;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	//R4 (1)
	PORTD = 0x01;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	PORTD = 0x00;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	//R3 (1)
	PORTD = 0x01;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	PORTD = 0x00;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	//R2 (1)
	PORTD = 0x01;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	PORTD = 0x00;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	//R1 (1)
	PORTD = 0x01;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	PORTD = 0x00;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	//R0 (1)
	PORTD = 0x01;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	PORTD = 0x00;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	//B7 (0)
	PORTD = 0x01;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	PORTD = 0x00;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	//B6 (1)
	PORTD = 0x01;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	PORTD = 0x00;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	//B5 (1)
	PORTD = 0x01;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	PORTD = 0x00;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	//B4 (1)
	PORTD = 0x01;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	PORTD = 0x00;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	//B3 (1)
	PORTD = 0x01;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	PORTD = 0x00;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	//B2 (1)
	PORTD = 0x01;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	PORTD = 0x00;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	//B1 (1)
	PORTD = 0x01;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	PORTD = 0x00;
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	_NOP();
	//B0(1)

	


	PORTB = 0x01;

	_delay_ms(2000);

	PORTB = 0x00;

	_delay_ms(2000);

	for (int i = 0; i < 14; i++)
	{
		sendOne();
	}
	for (int i = 0; i < 10; i++)
	{
		sendZero();
	}


	for (int i = 0; i < 24; i++)
	{
		sendZero();
	}

	PORTB = 0x01;

	_delay_ms(2000);

	for (int i = 0; i < 24; i++)
	{
		sendZero();
	}

	PORTB = 0x00;

	dispOneLED(0b001111110011111100111111);

	PORTB = 0x01;

    while (1) 
    {
		

    }
}

