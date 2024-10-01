const int ledPin = 13;  

void setup() {
  pinMode(ledPin, OUTPUT);
  
 
  int secuencia[] = {1, 0, 0, 1, 1, 0, 1, 1};
  int cantidad = sizeof(secuencia) / sizeof(secuencia[0]);
  
 
  for (int i = 0; i < cantidad; i++) {
    if (secuencia[i] == 1) {
      digitalWrite(ledPin, HIGH);  
    } else {
      digitalWrite(ledPin, LOW);  
    }
    delay(500);  
  }
}

void loop() {

}
