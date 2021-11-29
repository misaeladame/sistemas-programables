const int Trigger = 2;
const int Echo = 3;

int led = 4;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(Trigger, OUTPUT); //pin como salida
  pinMode(Echo, INPUT);  //pin como entrada
  digitalWrite(Trigger, LOW);//Inicializamos el pin con 0
}

void loop()
{
  long t; //timepo que demora en llegar el eco
  long d; //distancia en centimetros

  digitalWrite(Trigger, HIGH);
  delayMicroseconds(10);          //Enviamos un pulso de 10us
  digitalWrite(Trigger, LOW);
  
  t = pulseIn(Echo, HIGH); //obtenemos el ancho del pulso
  d = t/59; 
  
  if(d < 50){
    digitalWrite(led, HIGH);
  }else{
    delay(3000);
    digitalWrite(led, LOW);
  }
}
