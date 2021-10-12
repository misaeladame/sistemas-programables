#include<LiquidCrystal.h>
int sensor = A0;
int temp = 0;
int tempF = 0;
int tempK = 0;
LiquidCrystal lcd(8, 9, 7, 6, 5, 4);
byte UNO[8] = {
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
};
byte DOS[8] = {
    B11000,
    B11000,
    B11000,
    B11000,
    B11000,
    B11000,
    B11000,
    B11000,
};
byte TRES[8] = {
    B11100,
    B11100,
    B11100,
    B11100,
    B11100,
    B11100,
    B11100,
    B11100,
};
byte CUATRO[8] = {
    B11110,
    B11110,
    B11110,
    B11110,
    B11110,
    B11110,
    B11110,
    B11110,
};
byte CINCO[8] = {
    B11111,
    B11111,
    B11111,
    B11111,
    B11111,
    B11111,
    B11111,
    B11111,
};
byte simGrad[8] = {
  B00110,
  B01001,
  B01001,
  B00110,
  B00000,
  B00000,
  B00000,
  B00000,
};
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.createChar(0, UNO);
  lcd.createChar(1, DOS);
  lcd.createChar(2, TRES);
  lcd.createChar(3, CUATRO);
  lcd.createChar(4, CINCO);
  lcd.createChar(5, simGrad);
  lcd.begin(16, 2);
  lcd.setCursor(4,0);
  lcd.print("CARGANDO");
  for(int i =0; i<=15; i++){
    lcd.setCursor(i,1);
    lcd.write(byte(0));
    delay(50);
    lcd.setCursor(i, 1);
    lcd.write(byte(1)); 
    delay(50);
    lcd.setCursor(i, 1);
    lcd.write(byte(2)); 
    delay(50);
    lcd.setCursor(i, 1);
    lcd.write(byte(3)); 
    delay(50);
    lcd.setCursor(i, 1);
    lcd.write(byte(4)); 
    delay(50);
  }
  lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  temp = (5 * analogRead(sensor) * 100) / 1024;
  tempF = (temp*1.85)+32;
  tempK = temp + 273.1;
  /*
  lcd.setCursor(0,0);
  lcd.print("T");
  lcd.write(byte(5));
  lcd.print("C=");
  lcd.print(temp);
  lcd.setCursor(0,1);
  lcd.print("T");
  lcd.print(byte(5));
  lcd.print("F="); 
  lcd.print(tempF);
  lcd.setCursor(8,0);
  lcd.print("T");
  lcd.print("K="); 
  lcd.print(tempK);
  delay(300);
  lcd.clear();
  */
  Serial.print("T");
  Serial.print(" C = ");
  Serial.println(temp);
  Serial.print("T");
  Serial.print(" F = ");
  Serial.println(tempF);
  Serial.print("T");
  Serial.print(" K = ");
  Serial.println("tempK");
  delay(300);
}
