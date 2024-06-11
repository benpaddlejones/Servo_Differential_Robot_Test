#include <Servo.h>
#include "UltraSonicSensor.h"
#include "IRSensor.h"

Servo leftWheel;  // create servo object to control a servo
Servo rightWheel;
UltraSonicSensor myRanger;
IRSensor IRSensor1(A3);

void setup() {
  leftWheel.attach(9,500,2500);  // attaches the servo on pin 9 to the servo object
  rightWheel.attach(8,500,2500);  // attaches the servo on pin 9 to the servo object
  Serial.begin(9600);
  //pinMode(A3,INPUT);
}

void loop() {
  leftWheel.writeMicroseconds(2500);      
  rightWheel.writeMicroseconds(500); 
  delay(100000); 
  //Serial.println(myRanger.read());
  //Serial.println(IRSensor1.read());
  //Serial.println(analogRead(A3));
}