#include <Servo.h> 
 
Servo myservo;
 
const int led1 = 5;
const int led2 = 4;
const int led3 = 6;
const int led4 = 3;
int val;
volatile int i = 0;
 
void setup(){ 
  myservo.attach(9);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  myservo.write(0);
  attachInterrupt(digitalPinToInterrupt(2), reinicio, CHANGE);
} 
 
void loop(){ 
  for(i = 0; i <= 359; i++){
    myservo.write(i);
    if(i == 0){
      digitalWrite(led1, HIGH);
    }
    if(i == 90){
      digitalWrite(led2, HIGH);
    }
    if(i == 180){
      digitalWrite(led3, HIGH);
    }
    if(i == 270){
      digitalWrite(led4, HIGH);
    }
    delay(15);
  }
  
  for(i = 359; i >= 0; i--){
    myservo.write(i);
    if(i == 270){
      digitalWrite(led4, LOW);
    }
    if(i == 180){
      digitalWrite(led3, LOW);
    }
    if(i == 90){
      digitalWrite(led2, LOW);
    }
    if(i == 0){
      digitalWrite(led1, LOW);
    }
    delay(15);
  }
}

void reinicio(){
  i = 0;
}
