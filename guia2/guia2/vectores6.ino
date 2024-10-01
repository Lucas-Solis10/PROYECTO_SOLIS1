void setup() {
  Serial.begin(9600);
  
  
  int elementos[] = {2, 6, 10, 11};
  int cantidad = sizeof(elementos) / sizeof(elementos[0]);

  
  for (int i = 0; i < cantidad; i++) {
    Serial.print("Multiplos de ");
    Serial.print(elementos[i]);
    Serial.println(":");
    
    for (int j = 1; j <= 5; j++) {
      int multiplo = elementos[i] * j;
      Serial.print(multiplo);
      Serial.print(" ");
    }
    
    Serial.println(); 
  }
}

void loop() {

}
