/*
 * main.h
 *
 * Created: 2/28/2019 8:10:22 PM
 *  Author: mffields
 */ 


#ifndef MAIN_H_
#define MAIN_H_

#ifndef F_CPU
#define F_CPU 16000000UL  //16MHz Clock (external)
#endif

#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/cpufunc.h>
#include <util/delay.h>
#include "Initialize.h"
#include "SPISlaveInitialize.h"

#endif /* MAIN_H_ */