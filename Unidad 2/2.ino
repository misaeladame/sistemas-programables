#include <Servo.h> 
 
Servo myservo;
 
const int led1 = 4;
const int led2 = 3;
const int led3 = 5;
const int led4 = 2;
 
void setup(){ 
  myservo.attach(9);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  myservo.write(0);
} 
 
void loop(){ 
  for(int i = 0; i <= 180; i++){
    myservo.write(i);
    if(i == 0){
      digitalWrite(led1, HIGH);
    }
    if(i == 60){
      digitalWrite(led2, HIGH);
    }
    if(i == 120){
      digitalWrite(led3, HIGH);
    }
    if(i == 180){
      digitalWrite(led4, HIGH);
    }
    delay(15);
  }
  delay(500);
  for(int x = 180; x >= 0; x--){
    myservo.write(x);
    if(x == 180){
      digitalWrite(led4, LOW);
    }
    if(x == 120){
      digitalWrite(led3, LOW);
    }
    if(x == 60){
      digitalWrite(led2, LOW);
    }
    if(x == 0){
      digitalWrite(led1, LOW);
    }
    delay(15);
  }
  delay(1000);
}
