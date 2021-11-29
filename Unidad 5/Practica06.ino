#include <SoftwareSerial.h>
#include <Wire.h> 
SoftwareSerial mySerial(3, 4); //Tx,Rx
#include <Servo.h> 

Servo myservo;

const int Trigger = 6;
const int Echo = 7;
char val;

void setup()
{
  Serial.begin(9600);
  mySerial.begin(9600);
  pinMode(Trigger, OUTPUT); //pin como salida
  pinMode(Echo, INPUT);  //pin como entrada
  digitalWrite(Trigger, LOW);//Inicializamos el pin con 0
  myservo.attach(5);
  myservo.write(0);

  // attachInterrupt(digitalPinToInterrupt(interruptPin), blink, CHANGE);
  
}

void loop()
{ 
  long t; //timepo que demora en llegar el eco
  long d; //distancia en centimetros

  digitalWrite(Trigger, HIGH);
  delayMicroseconds(10);          //Enviamos un pulso de 10us
  digitalWrite(Trigger, LOW);
  
  t = pulseIn(Echo, HIGH); //obtenemos el ancho del pulso
  d = t/59; 

  Serial.println(d);

  
    if(d < 20){
      for(int i = 0; i < 181; i++){
        myservo.write(i);
      }
      for(int i = 180; i >= 0; i--) {
        myservo.write(i);
      }
   }
  
   if(d > 20){
      myservo.write(0);
      
   }

  if (mySerial.available()) {
    val = mySerial.read();
    
    Serial.println(val);
    
    if(val == '1') {
      for(int i = 0; i < 181; i++) {
        myservo.write(i);
      }
      for(int i = 180; i >= 0; i--) {
        myservo.write(i);
      }
   }
   if(val == '0'){
      myservo.write(0);
      delay(3000);
    }
  }
  
  if (Serial.available()) {
    mySerial.println(Serial.read());
  }
}

/*
void blink() {
  
  
}*/
