#include <Servo.h> 
 
Servo myservo;

int sensor = 2;
int val;
int buttonState = 0;
int val_cyn = 0;

void setup(){
  Serial.begin(9600);
  pinMode(sensor, INPUT);
  myservo.attach(9);
  myservo.write(0);
}

void loop(){
  val_cyn = digitalRead(sensor);
  delay(1000);
  
  if(val_cyn == 0){
    val = 180;
  } else {
    val = 0;
  }
  
  myservo.write(val);
  delay(15);
}
