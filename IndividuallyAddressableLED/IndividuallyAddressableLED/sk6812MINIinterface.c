/*
 * sk6812MINIinterface.c
 *
 * Created: 10/8/2018 6:30:52 PM
 *  Author: Morgan
 */ 

 #include <avr/io.h>
 #include <avr/cpufunc.h>
 #include <inttypes.h>


 void sendOne()
 {
	PORTD = 0x01;
	for(int i = 0; i < 8; i++)
	{
		_NOP();
	}
	PORTD = 0x00;
	for(int i = 0; i< 8; i++)
	{
		_NOP();
	}
 }

 void sendZero()
 {
	 PORTD = 0x01;
	 for(int i = 0; i < 4; i++)
	 {
		 _NOP();
	 }
	 PORTD = 0x00;
	 for(int i = 0; i< 12; i++)
	 {
		 _NOP();
	 }
 }

 void dispOneLED(uint32_t input)
 {
	uint32_t mask = 0x01;
	for(int i = 0; i < 24; i++)
	{
		if((input & mask) == 0)
		{
			sendZero();
		}
		else if((input & mask) == 1)
		{
			sendOne();
		}
		mask <<= 1;
	}
 }