/*
 * main.h
 *
 * Created: 2/28/2019 4:31:02 PM
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
#include "SPIMasterInitialize.h"

#endif /* MAIN_H_ */