int ledVerde = 6;
int ledRojo = 7;
int cny = 2;
int valorCNY = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledVerde, OUTPUT);
  pinMode(ledRojo, OUTPUT);
  pinMode(cny, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  valorCNY = digitalRead(cny);
  digitalWrite(ledRojo, valorCNY);
  digitalWrite(ledVerde, !valorCNY); 
}
