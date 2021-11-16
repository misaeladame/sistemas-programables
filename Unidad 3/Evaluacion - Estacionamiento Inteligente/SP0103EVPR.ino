#include <Servo.h> // Incluye la librería Servo

Servo servo1; // Servo de entrada/salida
const int led1 = 4; // botón de entrada
const int led2 = 6; // botón de salida
int n=0;
int pulsador1 = LOW;
int pulsador2 = LOW;

void setup() {
  servo1.attach(8); // Asocia el servo1 al pin 8
  
  pinMode(led1,OUTPUT); // VERDE a un hay lugares y están prendidos las lámparas de adentro
  pinMode(led2,OUTPUT); //ROJO ya no hay lugares
  attachInterrupt (digitalPinToInterrupt(2), entrada, RISING);
  attachInterrupt (digitalPinToInterrupt(3), salida, CHANGE);
}

void loop() {
  if(pulsador1== LOW &&  pulsador2 == LOW){
    servo1.write(0);
  }
  if(pulsador1==HIGH){
    servo1.write(90); // Gira el servo a 90 grados para que ingresen los carros
    delay(3000);
    servo1.write(0);
    
    if(n<3){ // si hay menos de 3 lugares el foco verde estará en verde
      digitalWrite(led1,HIGH);
      digitalWrite(led2,LOW);
    } else {
      digitalWrite(led2,HIGH);
      digitalWrite(led1,LOW);
    }
    pulsador1 = LOW;
  }
  
  if(pulsador2==HIGH){
    servo1.write(90);
    delay(3000);
    servo1.write(0);
    
    if(n>3) { // si hay más de 11 lugares el foco rojo estará en rojo
      digitalWrite(led2,LOW);
      digitalWrite(led1,HIGH);
    }
    pulsador2 = LOW;
  }
}

void entrada(){
  pulsador1 = HIGH;
  n=n+1;
}

void salida(){
  pulsador2 = HIGH;
  n=n-1;
}
