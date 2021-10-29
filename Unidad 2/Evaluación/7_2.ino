#include <IRremote.h>
#include <Servo.h>
int IRpin = 11;
IRrecv irrecv(IRpin);
decode_results results;
Servo myservo;
const int led1 = 2;
const int led2 = 3;
const int led3 = 4;
const int led4 = 5;

void setup()
{
 Serial.begin(9600);
 irrecv.enableIRIn();
 myservo.attach(9);
 pinMode(led1, OUTPUT);
 pinMode(led2, OUTPUT);
 pinMode(led3, OUTPUT);
 pinMode(led4, OUTPUT);
}
void loop() 
{
 if (irrecv.decode(&results)) 
   {
     irrecv.resume();
   }
  if (results.value == 16724175)
    {
      myservo.write(0);
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      delay(0);
    }
  if (results.value == 16718055)
    {
      myservo.write(60);
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      delay(15);
    }
  if (results.value == 4294967295)
    {
      myservo.write(120);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, LOW);
      delay(15);
    }
  if (results.value == 16716015)
    {
      myservo.write(180);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, HIGH);
      delay(15);
    }
}     
