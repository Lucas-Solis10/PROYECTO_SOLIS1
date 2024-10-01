
void ordenarVector(int vector[], int tamaño) {
  for (int i = 0; i < tamaño - 1; i++) {
    for (int j = 0; j < tamaño - i - 1; j++) {
      if (vector[j] < vector[j + 1]) {
       
        int temp = vector[j];
        vector[j] = vector[j + 1];
        vector[j + 1] = temp;
      }
    }
  }
}

void setup() {
  Serial.begin(9600); 

  
  int numeros[] = {5, 2, 9, 1, 5, 6};
  int tamaño = sizeof(numeros) / sizeof(numeros[0]); 

  
  ordenarVector(numeros, tamaño);

 
  Serial.println("Vector ordenado de mayor a menor:");
  for (int i = 0; i < tamaño; i++) {
    Serial.print(numeros[i]);
    Serial.print(" ");
  }
  Serial.println();
}

void loop() {
  
}
