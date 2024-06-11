
#include "UltraSonicSensor.h"

UltraSonicSensor::UltraSonicSensor(){
  static uint8_t trigPin = 4;
  static uint8_t echoPin = 5;

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

unsigned int UltraSonicSensor::read() {
  return timing() / 2.8 / 2;  //distance by divisor
}

unsigned int UltraSonicSensor::timing() {
  delay(30);
  static uint8_t trig = 4;
  static uint8_t echo = 5;
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  previousMicros = micros();
  while(!digitalRead(echo) && (micros() - previousMicros) <= 20000UL); // wait for the echo pin HIGH or timeout
  previousMicros = micros();
  while(digitalRead(echo)  && (micros() - previousMicros) <= 20000UL); // wait for the echo pin LOW or timeout
  if (micros() - previousMicros > 3000) {
    return 0;
  } else {
    return micros() - previousMicros; // duration
  }  
}
