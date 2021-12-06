/*************************************************************
  Download latest Blynk library here:
    https://github.com/blynkkk/blynk-library/releases/latest

  Blynk is a platform with iOS and Android apps to control
  Arduino, Raspberry Pi and the likes over the Internet.
  You can easily build graphic interfaces for all your
  projects by simply dragging and dropping widgets.

    Downloads, docs, tutorials: http://www.blynk.cc
    Sketch generator:           http://examples.blynk.cc
    Blynk community:            http://community.blynk.cc
    Follow us:                  http://www.fb.com/blynkapp
                                http://twitter.com/blynk_app

  Blynk library is licensed under MIT license
  This example code is in public domain.

 *************************************************************
  This example runs directly on ESP8266 chip.

  Note: This requires ESP8266 support package:
    https://github.com/esp8266/Arduino

  Please be sure to select the right ESP8266 module
  in the Tools -> Board menu!

  Change WiFi ssid, pass, and Blynk auth token to run :)
  Feel free to apply it to any other example. It's simple!
 *************************************************************/

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT DebugSerial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#include <Servo.h>
Servo servo;

int led = 10;

const int trigPin = 7;
const int echoPin = 6;
int distancia = 0;

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "Tu Token";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Tu red";
char pass[] = "La contraseña de tu red";

int estBtnServo;

void setup()
{
  // Debug console
  DebugSerial.begin(9600);

  Blynk.begin(auth, ssid, pass);
  servo.attach(8);
}

void loop()
{
  Blynk.run();
  if(estBtnServo == 1){
    digitalWrite(led,HIGH);
    for(int i=0; i<180; i++){
      servo.write(i);
      delay(20);
    }
  
    distancia = calcularDistancia(trigPin, echoPin);
    
    if(distancia > 50){
      digitalWrite(led,LOW);
      for(int i=180; i>0; i--){
          servo.write(i);
          delay(20);
      }
    }
  }
}

BLYNK_WRITE(V8){
  estBtnServo = param.asInt();
}

int calcularDistancia(int trig, int echo){
  int duracion = 0;
  int distancia = 0;
  
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  
  duracion = pulseIn(echo, HIGH);
  distancia = (duracion * 0.034) / 2;
  
  return distancia;
}
