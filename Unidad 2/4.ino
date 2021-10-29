#include <Servo.h>
Servo MiServo;
int const PotPin=A5;

void setup() {
  MiServo.attach(10);
}

void loop() {
  for(int pos =0; pos<180; pos += map(analogRead(PotPin),0,1023,0,30)){
  MiServo.write(pos);
  delay(500);
  }
}
