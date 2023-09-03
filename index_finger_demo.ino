#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards


void setup() {
  Serial.begin(9600);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  if (Serial.available() > 0) {
    int value = Serial.parseInt();
    if (119<value && value<181) {
      Serial.println("entered condition");
      int n_angle = map(value,120,170,1,180);
      n_angle=180-n_angle;
      myservo.write(n_angle);
    }
  }
}