int sensor = 2;
int val_cyn = 0;
int ledRed = 6;
int ledYellow = 7;

void setup(){
  Serial.begin(9600);
  pinMode(sensor, INPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
}

void loop(){
  val_cyn = digitalRead(sensor);
  delay(1000);
  if(val_cyn == 0){
    Serial.println("Linea negra");
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledYellow, LOW);
  } else {
    Serial.println("Linea blanca");
    digitalWrite(ledYellow, HIGH);
    digitalWrite(ledRed, LOW);
  }
}
