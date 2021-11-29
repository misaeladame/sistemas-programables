#include <SoftwareSerial.h> // libreria que permite establecer pines digitales

SoftwareSerial miBT(3, 4); 

char val;

void setup(){
  Serial.begin(9600);   // comunicacion de monitor serial a 9600 bps
  miBT.begin(9600);    // comunicacion serie entre Arduino y el modulo a 38400 bps
  pinMode(8, OUTPUT);
}

void loop(){
  if (miBT.available()){    // si hay informacion disponible desde modulo
     val = miBT.read();

     if(val == '1'){
      digitalWrite(8, HIGH);
      Serial.println("Se prende el foco");
     }
     
     if(val == '0'){
      digitalWrite(8, LOW);
      Serial.println("Se apaga el foco");
     }
  }
}
