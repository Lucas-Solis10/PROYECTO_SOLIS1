const int ledPins[] = {2, 3, 4, 5, 6}; 

void setup() {

  for (int i = 0; i < 5; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {

  for (int i = 0; i < 5; i++) {
  
    digitalWrite(ledPins[i], HIGH);
    delay(500); 


    digitalWrite(ledPins[i], LOW);
  }
  
 
  for (int i = 4; i >= 0; i--) {

    digitalWrite(ledPins[i], HIGH);
    delay(500); 

   
    digitalWrite(ledPins[i], LOW);
  }
}
