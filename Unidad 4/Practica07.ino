#include <LiquidCrystal.h>

#define VELOCIDAD 300 

LiquidCrystal lcd(5,6,7,8,9,10);

String texto_fila;

void setup()
{
  lcd.begin(16,2);
  
  Serial.begin(9600);
}

void loop()
{
  
  if(Serial.available()){
    texto_fila = Serial.readString();
  }
  
  // Obtenemos el tamaño del texto
  int tam_texto=texto_fila.length();
 
  // Mostramos entrada texto por la izquierda
  for(int i=tam_texto; i>0 ; i--)
  {
    String texto = texto_fila.substring(i-1);
 
    // Limpiamos pantalla
    lcd.clear();
 
    //Situamos el cursor
    lcd.setCursor(0, 0);
 
    // Escribimos el texto
    lcd.print(texto);
 
    // Esperamos
    delay(VELOCIDAD);
    
    // Desplazamos el texto hacia la derecha
  for(int i=1; i<=16;i++)
  {
    // Limpiamos pantalla
    lcd.clear();
 
    //Situamos el cursor
    lcd.setCursor(i, 0);
 
    // Escribimos el texto
    lcd.print(texto_fila);
 
    // Esperamos
    delay(VELOCIDAD);
  }
 
  // Desplazamos el texto hacia la izquierda en la segunda fila
  for(int i=16;i>=1;i--)
  {
    // Limpiamos pantalla
    lcd.clear();
 
    //Situamos el cursor
    lcd.setCursor(i, 1);
 
    // Escribimos el texto
    lcd.print(texto_fila);
 
    // Esperamos
    delay(VELOCIDAD);
  }
 
  // Mostramos salida del texto por la izquierda
  for(int i=1; i<=tam_texto ; i++)
  {
    String texto = texto_fila.substring(i-1);
 
    // Limpiamos pantalla
    lcd.clear();
 
    //Situamos el cursor
    lcd.setCursor(0, 1);
 
    // Escribimos el texto
    lcd.print(texto);
 
    // Esperamos
    delay(VELOCIDAD);
  }
}
}
