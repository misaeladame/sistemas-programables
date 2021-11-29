#include <SoftwareSerial.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
SoftwareSerial mySerial(3, 4); //Rx,Tx

int potPin = A0; 
int potValue = 0;      // variable to store the value coming from the potentiometer
int brightness = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  mySerial.begin(9600);
  lcd.init();
  lcd.backlight();
  lcd.clear();
}
void loop() {
  String data;
  
  potValue = analogRead(potPin); 
  brightness=map(potValue, 0, 1024, 0, 255); 
  
  if (mySerial.available()) {
    data += mySerial.readString();
    data = data.substring(0, data.length() - 2);
    Serial.println(data);
    lcd.setCursor(0,0);
    lcd.print(data);
    
  }
  if (Serial.available()) {
    mySerial.println(Serial.read());
  }
}
