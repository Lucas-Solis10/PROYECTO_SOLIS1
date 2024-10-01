const int led1Pin = 6;  
const int led2Pin = 7; 

void setup() {
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  
 
  int secuencia1[] = {1, 0, 0, 1, 1, 0, 1, 1}; 
  int secuencia2[] = {0, 1, 0, 1, 0, 0, 1, 0}; 
  int cantidad = sizeof(secuencia1) / sizeof(secuencia1[0]);
  
 
  for (int i = 0; i < cantidad; i++) {
   
    if (secuencia1[i] == 1) {
      digitalWrite(led1Pin, HIGH); 
    } else {
      digitalWrite(led1Pin, LOW);  
    }

   
    if (secuencia2[i] == 1) {
      digitalWrite(led2Pin, HIGH); 
    } else {
      digitalWrite(led2Pin, LOW);   
    }
    
    delay(500); 
  }
}

void loop() {
 
}
