
void llenarVectorConMultiplosDe10(int vector[], int tamaño) {
  for (int i = 0; i < tamaño; i++) {
    vector[i] = random(0, 11) * 10; 
  }
}

void setup() {
  Serial.begin(9600); 
  randomSeed(analogRead(0)); 

  int numeros[5]; 
  llenarVectorConMultiplosDe10(numeros, 5); 

  
  Serial.println("Vector lleno con multiplos de 10:");
  for (int i = 0; i < 5; i++) {
    Serial.print(numeros[i]);
    Serial.print(" ");
  }
  Serial.println();
}

void loop() {
  
}
