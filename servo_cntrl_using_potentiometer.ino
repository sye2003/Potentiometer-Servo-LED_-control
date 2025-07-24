#include <Servo.h>

Servo myServo;

const int potPin = A0;
const int ledPin = 6;
const int servoPin = 9;

void setup() {
  myServo.attach(servoPin);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin);
  
  int servoAngle = map(potValue, 0, 1023, 0, 180);
  int ledBrightness = map(potValue, 0, 1023, 0, 255);

  myServo.write(servoAngle);
  analogWrite(ledPin, ledBrightness);

  delay(10);
}
