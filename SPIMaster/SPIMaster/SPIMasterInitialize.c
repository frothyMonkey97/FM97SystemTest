/*
 * SPIMasterInitialize.c
 *
 * Created: 2/28/2019 4:56:56 PM
 *  Author: mffields
 */ 

 #include "SPIMasterInitialize.h"

 void SPIinitializeMaster(void)
 {
	//Setting port B to have (from MSB to LSB) SCK out, MISO in, MOSI out,
	//SS out, Pin 3 out (MCU #2 SS line), Pin 2 out (TDC SS line), 
	//Pin 1 (NC) in, Pin 0 (NC) in. 
	DDRB = 0xBC;

	//We will set two of the port pins to be logic high in order to keep
	//the slave devices deactivated, (Pin 2 and Pin 3)
	PORTB = 0x0C;

	/**********************************************************************
		7		6		5		4		3		2		1		0
		SPIE	SPE		DORD	MSTR	CPOL	CPHA	SPR1	SPR0
		
		7-SPIE - SPI Interrupt Enable
			This will be enabled to allow the MCU to send an interrupt when
			the data transfer is complete. We want this to allow the MCU to
			work on other code (if the communication speed allows) when not
			working on communications. 

		6-SPE - SPI Enable
			Enabled to allow SPI communication.

		5-DORD - Data ORDer
			Since the TDC sends the MSB first, everyone else will.

		4-MSTR - Master/Slave Select
			This is the master code, so this bit will be enabled.

		3-CPOL - Clock Polarity
			THIS BIT WAS CHOSEN IN PARALLEL WITH CPHA! These two bits were
			selected based off of the TDC slave behavior. The slave will 
			set its output bit at the start of the SCK. For this reason,
			CPHA will need to be enabled to select the read time to be 
			after the first logical change of the SCK. The CPOL will be 
			enabled to set the read edge to be rising edge.

		2-CPHA - Clock Phase
			See CPOL for details

		1-SPR1 - SPI Clock Rate Select 1
			This is likely to change based off of testing, but the goal is
			to have it run as fast as possible.
			As of 6:50 02/28/19, set to 0.

		0-SPR0 - SPI Clock Rate Select 0
			This is likely to change based off of testing, but the goal is
			to have it run as fast as possible.
			As of 6:50 02/28/19, set to 0.
	**********************************************************************/
	SPCR = 0xDC;

	/**********************************************************************
		7		6		5		4		3		2		1		0
		SPIF	WCOL	RESV	RESV	RESV	RESV	RESV	SPI2X

		7-SPIF - SPI Interrupt Flag
			Read only.

		6-WCOL - Write COLission Flag
			Read only.

		5-1-RESV - Reserved
			Reserved

		0-SPI2X - Double SPI Speed Bit
			This is likely to change based off of testing, but the goal is
			to have it run as fast as possible.
			As of 6:50 02/28/19, set to 0.
	**********************************************************************/
	SPSR = 0x00;
 }