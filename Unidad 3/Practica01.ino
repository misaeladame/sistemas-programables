const int Trigger = 2;   //Pin digital 2 para el Trigger del sensor
const int Echo = 3;   //Pin digital 3 para el echo del sensor
int ledV1 = 4;
int ledA1 = 5;
int ledR1 = 6;
int ledV2 = 9;
int ledA2 = 8;
int ledR2 = 7;

void setup() {
  Serial.begin(9600);//iniciailzamos la comunicación
  pinMode(Trigger, OUTPUT); //pin como salida
  pinMode(Echo, INPUT);  //pin como entrada
  digitalWrite(Trigger, LOW);//Inicializamos el pin con 0
  pinMode(ledV1, OUTPUT);
  pinMode(ledA1, OUTPUT);
  pinMode(ledR1, OUTPUT);
  pinMode(ledV2, OUTPUT);
  pinMode(ledA2, OUTPUT);
  pinMode(ledR2, OUTPUT);
}

void loop(){
  long t; //timepo que demora en llegar el eco
  long d; //distancia en centimetros

  digitalWrite(Trigger, HIGH);
  delayMicroseconds(10);          //Enviamos un pulso de 10us
  digitalWrite(Trigger, LOW);
  
  t = pulseIn(Echo, HIGH); //obtenemos el ancho del pulso
  d = t/59;             //escalamos el tiempo a una distancia en cm
  
  if(d < 100){
    digitalWrite(ledV1, HIGH);
    digitalWrite(ledV2, LOW);
    delay(200);
    digitalWrite(ledR2, HIGH);
    digitalWrite(ledR1, LOW);
    delay(200);
  }
  
  if(d > 100){
    digitalWrite(ledV2, HIGH);
    digitalWrite(ledV1, LOW);
    delay(200);
    digitalWrite(ledR1, HIGH);
    digitalWrite(ledR2, LOW);
    delay(200);
  }
  
  Serial.print("Distancia: ");
  Serial.print(d);      //Enviamos serialmente el valor de la distancia
  Serial.print("cm");
  Serial.println();
  delay(100);          //Hacemos una pausa de 100ms
}
