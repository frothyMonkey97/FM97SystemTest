/*
 * main.h
 *
 * Created: 9/18/2018 10:33:40 AM
 *  Author: Morgan
 */ 


#ifndef MAIN_H_
#define MAIN_H_

#ifndef F_CPU
	#define F_CPU 16000000UL  //16MHz Clock (external)
#endif

#include <avr/io.h>
#include <avr/cpufunc.h>
#include <util/delay.h>
#include "initialization.h"
#include "sk6812MINIinterface.h"


#endif /* MAIN_H_ */