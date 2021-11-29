#include <LiquidCrystal.h>

LiquidCrystal lcd(5,6,7,8,9,10);

int sensor = 2;
int val_cyn = 0;
int prod = 0;

void setup(){
  Serial.begin(9600);

  lcd.begin(16,2);
  
  pinMode(sensor, INPUT);
}

void loop(){
  val_cyn = digitalRead(sensor);
  delay(500);
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.write("Productos:");
  lcd.setCursor(0,1);
  lcd.print(prod);
  
  if(val_cyn != 0){
    prod = prod + 1;
  }
  
  delay(15);
}
