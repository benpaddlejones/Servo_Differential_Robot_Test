/***********************************************************************

***********************************************************************/

#ifndef ULTRASONICSENSOR_H
#define ULTRASONICSENSOR_H

#include <Arduino.h>

class UltraSonicSensor{
  public:
    UltraSonicSensor();  // do not use
    //UltraSonicSensor(byte trig, byte echo);
    unsigned int read();

  private:
    unsigned long previousMicros;

    unsigned int timing();
};

#endif 