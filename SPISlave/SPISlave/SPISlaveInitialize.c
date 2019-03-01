/*
 * SPISlaveInitialize.c
 *
 * Created: 2/28/2019 8:12:54 PM
 *  Author: mffields
 */ 

 #include "SPISlaveInitialize.h"

 void SPIinitializeSlave()
 {
	//Setting port B to have (from MSB to LSB) SCK in, MISO out, MOSI in,
	//SS in, Pin 3 in (NC), Pin 2 in(NC), Pin 1 (NC) in, Pin 0 (NC) in. 
	DDRB = 0x40;

	//Setting the SS pin to logic high in the hopes that the slave won't 
	//start looking for a SCK signal.
	PORTB = 0x10;

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
			This is the slave code, so this bit will be disabled.

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
			Does not matter as this is a slave device. 

		0-SPR0 - SPI Clock Rate Select 0
			Does not matter as this is a slave device.
	**********************************************************************/
	SPCR = 0xCC;

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
			Data sheet is unclear, but it is assumed that this does not 
			matter, so it will be disabled.
	**********************************************************************/
	SPSR = 0x00;
 }