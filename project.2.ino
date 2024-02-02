// c++ code
//
int buttonPin = 2; 
int led1 = 10;  
int led2 = 9;    
int led3 = 8;  

int button = 11; 
int Reading = 0; 
int Counter = 0;    
void setup() {
  
  pinMode(buttonPin, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
 
  button = digitalRead(buttonPin);
  if (button != Reading) {
    
    if (button == HIGH) {
   
      Counter = (Counter % 4) + 1;
      
      updateLED();
    }
    delay(100);  
  }
 
  Reading = button;
}

void updateLED() {
 
  if (Counter == 1) {
    digitalWrite(led1, HIGH);
  } else if (Counter == 2) {
    digitalWrite(led2, HIGH);
 
  } else if (Counter == 3) {
    digitalWrite(led3, HIGH);
  } else if (Counter == 4) {
   
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
}