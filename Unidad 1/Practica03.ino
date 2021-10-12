int rojoA=2;
int amarilloA=4;
int verdeA=8;
int rojoC=3;
int amarilloC=5;
int verdeC=9;

void setup() {
  pinMode(verdeA,OUTPUT);
  pinMode(amarilloA,OUTPUT);
  pinMode(rojoA,OUTPUT);
  pinMode(verdeC,OUTPUT);
  pinMode(amarilloC,OUTPUT);
  pinMode(rojoC,OUTPUT);
}

void loop() {
  //Encender verde avenida Y calle rojo
  digitalWrite(verdeA,HIGH);
  digitalWrite(rojoC,HIGH); 
  delay(5000);
  digitalWrite(verdeA,LOW); 
  delay(500);
  //Encender Amarillo avenida y apagar rojo calle
  digitalWrite(amarilloA,HIGH); 
  delay(3000);
  digitalWrite(amarilloA,LOW);
  digitalWrite(rojoC,LOW);  
  delay(500);
  //Encender rojo avenida y verde calle
  digitalWrite(rojoA,HIGH); 
  digitalWrite(verdeC,HIGH);
  delay(5000);
  //Encender amarillo calle y apagar rojo avenida
  digitalWrite(verdeC,LOW);
  digitalWrite(amarilloC,HIGH); 
  delay(500);
  digitalWrite(amarilloC,LOW);
  digitalWrite(rojoA,LOW);  
  delay(500);
}
