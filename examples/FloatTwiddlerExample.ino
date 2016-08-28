// FloatTwiddler Library v1.0.0 
// Created By Denis Petljak 28.08.2016
// This is example for using FloatTwiddler library
// Input your desired float value to be divided in two unsigned ints in SetfloatValue variable
// Floatwill be split in two parts HighOrderBytes and LowOrderBytes by calling FloatToUint function
// Finally the HighOrderBytes and LowOrderBytes will be reassembled in float value by calling UintToFloat function
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <FloatTwiddler.h>

//FloatTwiddler FloatTwiddler(a, b, c);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

  float SetfloatValue = 3.141592;
  unsigned int HighOrderBytes;
  unsigned int LowOrderBytes;
  float ReadfloatValue;
  
  Serial.print("Original float value is: ");
  Serial.println(SetfloatValue, HEX);

  //FloatToUint(Float to convert to 2 unsigned integers, &FirstUnsignedInt, &SecondUnsignedInt);
  FloatToUint(SetfloatValue, &HighOrderBytes, &LowOrderBytes);

  Serial.print("Higher bytes of original float value: ");
  Serial.println(HighOrderBytes, HEX);

  Serial.print("Lower bytes of original float value: ");
  Serial.println(LowOrderBytes, HEX);

  UintToFloat(HighOrderBytes, LowOrderBytes, &ReadfloatValue);
  Serial.print("Reassembled float value: ");
  Serial.println(ReadfloatValue, HEX);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  

}
