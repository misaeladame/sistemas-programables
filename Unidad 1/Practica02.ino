int LedRed = 3;
int LedBlue = 9;
int y = 255;
void setup() {
  pinMode(LedRed, OUTPUT);
  pinMode(LedBlue, OUTPUT);
}

void loop() {
  for(int x = 0; x < 256; x++){
     y - x;
     analogWrite(LedRed, y);
     analogWrite(LedBlue, x);
     delay(60);  
  }
}
