#include <Servo.h>

Servo myservo;  // create servo object to control a servo


void setup() {
  myservo.attach(9,700,2300);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  myservo.writeMicroseconds(2300);                  // sets the servo position according to the scaled value
  delay(3000);                           // waits for the servo to get there
  myservo.writeMicroseconds(1500);                  // sets the servo position according to the scaled value
  delay(3000);                           // waits for the servo to get there
  myservo.writeMicroseconds(700);                  // sets the servo position according to the scaled value
  delay(3000);                           // waits for the servo to get there
  myservo.writeMicroseconds(1500);                  // sets the servo position according to the scaled value
  delay(3000);                           // waits for the servo to get there

}