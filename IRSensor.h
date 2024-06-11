/***********************************************************************

***********************************************************************/

#ifndef IRSENSOR_H
#define IRSENSOR_H

#include <Arduino.h>

class IRSensor
{
private:
  byte pin;
  
public:
  IRSensor() {};  // do not use
  IRSensor(byte pin);
  
  unsigned int read();
};

#endif