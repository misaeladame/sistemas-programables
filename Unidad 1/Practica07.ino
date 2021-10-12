int boton = 5;
int rojo = 11;
int azul = 10;
int verde = 9; 
int push;

void setup() {
  Serial.begin(9600);
  pinMode(rojo, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(boton, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(boton), toggle , FALLING);

/*
  for (int i =9 ; i<12 ; i++){
    pinMode(i, OUTPUT);
  }
  */
}

void loop() {
  Color(255 ,0 ,0) ;
  delay(500); 
  Color(0,255 ,0) ;
  delay(500);
  Color(0 ,0 ,255) ;
  delay(500);
  Color(0,0,0);
  delay(1000);
}

void toggle(){
    digitalWrite(rojo, HIGH );
    delay(10);
    digitalWrite(azul, HIGH );
    delay(10);
    digitalWrite(verde, HIGH );
    delay(10);
}

void Color(int R, int G, int B){     
        analogWrite(verde , R) ;   // Red    - Rojo
        analogWrite(azul, G) ;   // Green - Verde
        analogWrite(rojo, B) ;   // Blue - Azul
}
