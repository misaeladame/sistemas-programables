#include <SoftwareSerial.h> // libreria que permite establecer pines digitales
        // para comunicacion serie

SoftwareSerial miBT(3, 4);  // pin 10 como TX, pin 11 como RX

char val;
int brillo = 0;

void setup(){
  Serial.begin(9600);   // comunicacion de monitor serial a 9600 bps
  Serial.println("Listo");  // escribe Listo en el monitor
  miBT.begin(9600);    // comunicacion serie entre Arduino y el modulo a 38400 bps
  pinMode(5,OUTPUT);
}

void loop(){
  if (miBT.available()){    // si hay informacion disponible desde modulo
     val = miBT.read();

     if(val == '1'){
      brillo = brillo + 15;
      if(brillo > 255) {
        brillo = 255;
      }
      Serial.println((String)"El brillo es de " +brillo);
      analogWrite(5, brillo);
      
     }
     if(val == '0'){
     
      brillo = brillo - 15;
      if(brillo < 0) {
        brillo = 0;
      }
      Serial.println((String)"El brillo es de " +brillo);
      analogWrite(5, brillo);
      
     }
  }
}
