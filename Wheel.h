/***********************************************************************
#include <Servo.h>
#include "Arduino_LED_Matrix.h"

ArduinoLEDMatrix matrix;
Servo leftWheel;  // create servo object to control a servo
Servo rightWheel;

void setup() {
  leftWheel.attach(9,500,2500);  // attaches the servo on pin 9 to the servo object
  rightWheel.attach(6,500,2500);  // attaches the servo on pin 9 to the servo object
  Serial.begin(9600);
  matrix.begin();

  matrix.beginDraw();
  matrix.stroke(0xFFFFFFFF);
  matrix.textScrollSpeed(50);
  const char text[] = "v0.0.001";
  matrix.textFont(Font_4x6);
  matrix.beginText(0, 1, 0xFFFFFF);
  matrix.println(text);
  matrix.endText();
  matrix.endDraw();

  delay(3000);
}

void loop() {
  leftWheel.writeMicroseconds(2500);      
  rightWheel.writeMicroseconds(500); 
  delay(30); 
}
***********************************************************************/