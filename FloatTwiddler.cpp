/*
FloatTwiddler.h - Library for splitting float to smaller types variable.
Created by Denis Petljak 28.08.2016.
Released into the public domain.
*/

#include "Arduino.h"
#include "FloatTwiddler.h"

FloatToUint::FloatToUint(float floatNumber, unsigned int *highBytes, unsigned int *lowBytes)
{
	
	*highBytes = 0;
	*lowBytes = 0;

	uint32_t i = *(uint32_t*)&floatNumber;

	*highBytes = (i >> 16) | 0x0000;
	*lowBytes = i | 0x0000;
	
}


UintToFloat::UintToFloat(unsigned int highBytes, unsigned int lowBytes, float *floatNumber)
{

	uint32_t ocitanoint = 0;
	ocitanoint = highBytes | 0x00000000;
	ocitanoint = lowBytes | (ocitanoint << 16);

	*floatNumber = *(float*)&ocitanoint;

}