const int A = 2;
const int B = 3;
const int C = 4;
const int D = 5;
const int E = 6;
const int F = 7;
const int G = 8;

const int N = 7;
const int SEGMENTOS[N] = {A,B,C,D,E,F,G};

/*CÁTODO COMÚN*/
const int DIGITOS[10][N] = {
/*0*/ {1,1,1,1,1,1,0},
/*1*/ {0,1,1,0,0,0,0},
/*2*/ {1,1,0,1,1,0,1},
/*3*/ {1,1,1,1,0,0,1},
/*4*/ {0,1,1,0,0,1,1},
/*5*/ {1,0,1,1,0,1,1},
/*6*/ {1,0,1,1,1,1,1},
/*7*/ {1,1,1,0,0,0,0},
/*8*/ {1,1,1,1,1,1,1},
/*9*/ {1,1,1,1,0,1,1}
};
const int OFF = LOW;

const byte pinBuzzer = 9;

void setup()
{
  Serial.begin(9600);
  for (int i=0; i<N; i++){
    pinMode(SEGMENTOS[i], OUTPUT);
    digitalWrite(SEGMENTOS[i], OFF);//apagar
  }
}

void print(int d){
  for (int i=0; i<N; i++){
    digitalWrite(SEGMENTOS[i], DIGITOS[d][i]);
  }
}

void sonido(int num){
  switch(num){
    case 0:
      analogWrite(pinBuzzer, 0);
      delay(2000);
      analogWrite(pinBuzzer, 100);
      delay(2000);
      break;
    case 1:
      analogWrite(pinBuzzer, 0);
      delay(2000);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      break;
    case 2:
      analogWrite(pinBuzzer, 0);
      delay(2000);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      break;
    case 3:
      analogWrite(pinBuzzer, 0);
      delay(2000);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      break;
    case 4:
      analogWrite(pinBuzzer, 0);
      delay(2000);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      break;
    case 5:
      analogWrite(pinBuzzer, 0);
      delay(2000);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      break;
    case 6:
      analogWrite(pinBuzzer, 0);
      delay(2000);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      break;
    case 7:
      analogWrite(pinBuzzer, 0);
      delay(2000);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      break;
    case 8:
      analogWrite(pinBuzzer, 0);
      delay(2000);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      break;
    case 9:
      analogWrite(pinBuzzer, 0);
      delay(2000);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      analogWrite(pinBuzzer, 0);
      delay(500);
      analogWrite(pinBuzzer, 100);
      delay(1000);
      break;
  }
}

void loop()
{
  for(int i=0; i<10; i++){
    print(i);
    Serial.println(i);
    sonido(i);
  }
  
  for(int i=9; i>=0; i--){
    print(i);
    Serial.println(i);
    sonido(i);
  }
}
