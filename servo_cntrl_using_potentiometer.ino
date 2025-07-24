#include<Servo.h>
int pot=A0;
int value;
int angle;
Servo myservo;
void setup() {
  pinMode(A0,INPUT);
  myservo.attach(10);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  value=analogRead(A0);
  Serial.println(value);
  angle=map(value,0,1023,0,180);
  myservo.write(angle);

  // put your main code here, to run repeatedly:

}
