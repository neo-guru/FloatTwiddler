# FloatTwiddler
FloatTwiddler is a simple and small Arduino library for converting Float values in smaller data types

FloatTwiddler is library in development which I created for reading and storing MODBUS floating point uint16_t registers with Arduino, for now it only has two functions:

- Converting Float value in two unsigned int varibales
- Converting two unsigned int variables to Float

# Usage

###To convert Floating point variable in two unsigned integers use function:
```c
FloatToUint(FloatNumber, &uintHigh, &uintLow);
```
Where: 
- FloatNumber is your desired Floating point variable for conversion
- uintHigh is variable for storing your High order bytes
- uintLow is variable for storing your Low order bytes

###To convert two unsigned integers to Floating point variable use function:
```c
UintToFloat(uintHigh, uintLow, &FloatNumber);
```

Where: 
- uintHigh is variable where High order bytes are stored
- uintLow is variable where Low order bytes are stored
- FloatNumber is variable for holding converted Float
