#include <Servo.h> 
 
Servo myservo;

//Sensor distancia
const int Trigger = 2;
const int Echo = 3;
//Buzzer
const byte pinBuzzer = 10;
//LEDs
int led1 = 6;
int led2 = 7;
int led3 = 8;
int led4 = 9;

long t;
long d; 
int pos;

void setup() {
  //Monitor serial
  Serial.begin(9600);
  //Sensor distancia
  pinMode(Trigger, OUTPUT);
  pinMode(Echo, INPUT);
  digitalWrite(Trigger, LOW);
  //Servo
  myservo.attach(5);
  myservo.write(0);
  //Interrumptor
  //attachInterrupt(digitalPinToInterrupt(3), detener, RISING);
  //LEDs
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop(){
  for(int i = 0; i <= 180; i++){
    digitalWrite(Trigger, HIGH);
    delayMicroseconds(10);
    digitalWrite(Trigger, LOW);
    t = pulseIn(Echo, HIGH);
    d = t/59;
    
    myservo.write(i);
    pos = i;
    
    if(d < 60){
      detener(pos);
      break;
    }else{
      seguir(pos);
    }
    delay(50);
  }
  
  
  for(int i = 180; i >= 0; i--){
    digitalWrite(Trigger, HIGH);
    delayMicroseconds(10);
    digitalWrite(Trigger, LOW);
    t = pulseIn(Echo, HIGH);
    d = t/59;
    
    myservo.write(i);
    pos = i;
    
    if(d < 60){
      detener(pos);
      break;
    }else{
      seguir(pos);
    }
    delay(50);
  }

}

void detener(int pos){
  myservo.write(pos);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  analogWrite(pinBuzzer, 100);
}

void seguir(int pos){
  myservo.write(pos);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  analogWrite(pinBuzzer, 0);
}
