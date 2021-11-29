#include <Servo.h>
#include <SoftwareSerial.h> // libreria que permite establecer pines digitales

SoftwareSerial miBT(3, 4); 
Servo servomotor;

char val;
int brillo = 0;

void setup(){
  Serial.begin(9600);   // comunicacion de monitor serial a 9600 bps
  miBT.begin(9600);    // comunicacion serie entre Arduino y el modulo a 38400 bps
  servomotor.attach(5);
  servomotor.write(90);
}

void loop(){
  if (miBT.available()){    // si hay informacion disponible desde modulo
     val = miBT.read();

     if(val == '1'){
      servomotor.write(180);
      Serial.println("Giro a la Izquierda");
     }
     
     if(val == '0'){
      servomotor.write(0);
      Serial.println("Giro a la Derecha");
     }
  }
}
