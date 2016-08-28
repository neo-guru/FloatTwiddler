/*
FloatTwiddler.h - Library for splitting float to smaller types variable.
Created by Denis Petljak 28.08.2016.
Released into the public domain.
*/

#ifndef FloatTwiddler_h
#define FloatTwiddler_h

#include "Arduino.h"

class FloatToUint
{
public:
	FloatToUint(float floatNumber, unsigned int *highBytes, unsigned int *lowBytes);
	
};

class UintToFloat
{
public:
	
	UintToFloat(unsigned int highBytes, unsigned int lowBytes, float *floatNumber);
	
};

#endif