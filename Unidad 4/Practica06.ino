#include <LiquidCrystal.h>

LiquidCrystal lcd(5,6,7,8,9,10);

void setup()
{
  lcd.begin(16,2);
  
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()){
    lcd.write(Serial.read());
  }
}
