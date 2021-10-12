const int led[9] = {2,3,4,5,6,7,8,9,10}; 
int option;

void setup() {
  Serial.begin(9600);
  for(int i = 0; i < 9; i++) {
    pinMode(led[i], OUTPUT);  
  }
}

void loop() {
  if (Serial.available()>0){
    //leemos la opcion enviada
    char option = Serial.read();

    switch(option){
      case '1' :{
        Serial.println("LED 1");
        //Primer paso
        digitalWrite(led[0], HIGH);
        delay(1000);
        digitalWrite(led[0], LOW);
        delay(2000);
        
        //Segundo paso
        for(int i = 0; i < 9; i++){
          digitalWrite(led[i], HIGH);
        }
        delay(3000);
        for(int i = 0; i < 9; i++){
          digitalWrite(led[i], LOW);
        }
        delay(2000);
        
        //Tercer paso
        for(int i = 0; i < 9; i++){
          digitalWrite(led[i], HIGH);
          delay(1000);
          digitalWrite(led[i], LOW);
          delay(1000);
        }
      }break;

      case '2' :{
        Serial.println("LED 2");
        //Primer paso
        for(int i = 0; i < 2; i++){
          digitalWrite(led[1], HIGH);
          delay(1000);
          digitalWrite(led[1], LOW);
          delay(1000);
        };
        delay(2000);
        
        //Segundo paso
        for(int x = 0; x < 2; x++){
          for(int i = 0; i < 9; i++){
            digitalWrite(led[i], HIGH);
          }
          delay(1000);
          for(int i = 0; i < 9; i++){
            digitalWrite(led[i], LOW);
          }
          delay(1000);
        }
        delay(2000);
        
        //Tercer paso
        for(int i = 1; i < 9; i++){
          digitalWrite(led[i], HIGH);
          delay(1000);
          digitalWrite(led[i], LOW);
          delay(1000);
        }
        digitalWrite(led[0], HIGH);
        delay(1000);
        digitalWrite(led[0], LOW);
        delay(1000);
      }break;

      case '3' :{
        Serial.println("LED 3");
        //Primer paso
        for(int i = 0; i < 3; i++){
          digitalWrite(led[2], HIGH);
          delay(1000);
          digitalWrite(led[2], LOW);
          delay(1000);
        };
        delay(2000);
        
        //Segundo paso
        for(int x = 0; x < 3; x++){
          for(int i = 0; i < 9; i++){
            digitalWrite(led[i], HIGH);
          }
          delay(1000);
          for(int i = 0; i < 9; i++){
            digitalWrite(led[i], LOW);
          }
          delay(1000);
        }
        delay(2000);
        
        //Tercer paso
        for(int i = 2; i < 9; i++){
          digitalWrite(led[i], HIGH);
          delay(1000);
          digitalWrite(led[i], LOW);
          delay(1000);
        }
        for(int i = 0; i < 2; i++){
          digitalWrite(led[i], HIGH);
          delay(1000);
          digitalWrite(led[i], LOW);
          delay(1000);
        }
      }break;

      case '4' :{
        Serial.println("LED 4");
        //Primer paso
        for(int i = 0; i < 4; i++){
          digitalWrite(led[3], HIGH);
          delay(1000);
          digitalWrite(led[3], LOW);
          delay(1000);
        };
        delay(2000);
        
        //Segundo paso
        for(int x = 0; x < 4; x++){
          for(int i = 0; i < 9; i++){
            digitalWrite(led[i], HIGH);
          }
          delay(1000);
          for(int i = 0; i < 9; i++){
            digitalWrite(led[i], LOW);
          }
          delay(1000);
        }
        delay(2000);
        
        //Tercer paso
        for(int i = 3; i < 9; i++){
          digitalWrite(led[i], HIGH);
          delay(1000);
          digitalWrite(led[i], LOW);
          delay(1000);
        }
        for(int i = 0; i < 3; i++){
          digitalWrite(led[i], HIGH);
          delay(1000);
          digitalWrite(led[i], LOW);
          delay(1000);
        }
      }break;

      case '5' :{
        Serial.println("LED 5");
        //Primer paso
        for(int i = 0; i < 5; i++){
          digitalWrite(led[4], HIGH);
          delay(1000);
          digitalWrite(led[4], LOW);
          delay(1000);
        };
        delay(2000);
        
        //Segundo paso
        for(int x = 0; x < 5; x++){
          for(int i = 0; i < 9; i++){
            digitalWrite(led[i], HIGH);
          }
          delay(1000);
          for(int i = 0; i < 9; i++){
            digitalWrite(led[i], LOW);
          }
          delay(1000);
        }
        delay(2000);
        
        //Tercer paso
        for(int i = 4; i < 9; i++){
          digitalWrite(led[i], HIGH);
          delay(1000);
          digitalWrite(led[i], LOW);
          delay(1000);
        }
        for(int i = 0; i < 4; i++){
          digitalWrite(led[i], HIGH);
          delay(1000);
          digitalWrite(led[i], LOW);
          delay(1000);
        }
    }break;

    case '6' :{
        Serial.println("LED 6");
        //Primer paso
        for(int i = 0; i < 6; i++){
          digitalWrite(led[5], HIGH);
          delay(1000);
          digitalWrite(led[5], LOW);
          delay(1000);
        };
        delay(2000);
        
        //Segundo paso
        for(int x = 0; x < 6; x++){
          for(int i = 0; i < 9; i++){
            digitalWrite(led[i], HIGH);
          }
          delay(1000);
          for(int i = 0; i < 9; i++){
            digitalWrite(led[i], LOW);
          }
          delay(1000);
        }
        delay(2000);
        
        //Tercer paso
        for(int i = 5; i < 9; i++){
          digitalWrite(led[i], HIGH);
          delay(1000);
          digitalWrite(led[i], LOW);
          delay(1000);
        }
        for(int i = 0; i < 5; i++){
          digitalWrite(led[i], HIGH);
          delay(1000);
          digitalWrite(led[i], LOW);
          delay(1000);
        }
    }break;

    case '7' :{
        Serial.println("LED 7");
        //Primer paso
        for(int i = 0; i < 7; i++){
          digitalWrite(led[6], HIGH);
          delay(1000);
          digitalWrite(led[6], LOW);
          delay(1000);
        };
        delay(2000);
        
        //Segundo paso
        for(int x = 0; x < 7; x++){
          for(int i = 0; i < 9; i++){
            digitalWrite(led[i], HIGH);
          }
          delay(1000);
          for(int i = 0; i < 9; i++){
            digitalWrite(led[i], LOW);
          }
          delay(1000);
        }
        delay(2000);
        
        //Tercer paso
        for(int i = 6; i < 9; i++){
          digitalWrite(led[i], HIGH);
          delay(1000);
          digitalWrite(led[i], LOW);
          delay(1000);
        }
        for(int i = 0; i < 6; i++){
          digitalWrite(led[i], HIGH);
          delay(1000);
          digitalWrite(led[i], LOW);
          delay(1000);
        }
    }break;

    case '8' :{
        Serial.println("LED 8");
        //Primer paso
        for(int i = 0; i < 8; i++){
          digitalWrite(led[7], HIGH);
          delay(1000);
          digitalWrite(led[7], LOW);
          delay(1000);
        };
        delay(2000);
        
        //Segundo paso
        for(int x = 0; x < 8; x++){
          for(int i = 0; i < 9; i++){
            digitalWrite(led[i], HIGH);
          }
          delay(1000);
          for(int i = 0; i < 9; i++){
            digitalWrite(led[i], LOW);
          }
          delay(1000);
        }
        delay(2000);
        
        //Tercer paso
        for(int i = 7; i < 9; i++){
          digitalWrite(led[i], HIGH);
          delay(1000);
          digitalWrite(led[i], LOW);
          delay(1000);
        }
        for(int i = 0; i < 7; i++){
          digitalWrite(led[i], HIGH);
          delay(1000);
          digitalWrite(led[i], LOW);
          delay(1000);
        }
    }break;

    case '9' :{
        Serial.println("LED 9");
        //Primer paso
        for(int i = 0; i < 9; i++){
          digitalWrite(led[8], HIGH);
          delay(1000);
          digitalWrite(led[8], LOW);
          delay(1000);
        };
        delay(2000);
        
        //Segundo paso
        for(int x = 0; x < 9; x++){
          for(int i = 0; i < 9; i++){
            digitalWrite(led[i], HIGH);
          }
          delay(1000);
          for(int i = 0; i < 9; i++){
            digitalWrite(led[i], LOW);
          }
          delay(1000);
        }
        delay(2000);
        
        //Tercer paso
        for(int i = 0; i < 9; i++){
          digitalWrite(led[i], HIGH);
          delay(1000);
          digitalWrite(led[i], LOW);
          delay(1000);
        }
    }break;
  }
  }
} 
