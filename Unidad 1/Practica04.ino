int pinBtn = 2;
int azul = 3;
int amarillo = 4;
int rojo = 5;
int estado = 0;

void setup() {
  Serial.begin(9600);
  pinMode(pinBtn, INPUT);
  pinMode(azul, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(rojo, OUTPUT);
}

void loop() {
  if( digitalRead(pinBtn) == 1 ){
    digitalWrite( azul, HIGH);
    delay(1000);
    digitalWrite( azul, LOW);
    delay(300);
    digitalWrite( amarillo, HIGH);
    delay(1000);
    digitalWrite( amarillo, LOW);
    delay(300);
    digitalWrite( rojo, HIGH );
    delay(1000);
    digitalWrite( rojo, LOW);
    delay(300);
  }
}
