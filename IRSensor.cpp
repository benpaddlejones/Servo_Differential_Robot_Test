#include "IRSensor.h"

IRSensor::IRSensor(byte pin)
{
  this->pin = pin;
}


unsigned int IRSensor::read()
{
  digitalRead(pin);
}