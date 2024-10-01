void setup() {
  Serial.begin(9600);

 
  int elementos[] = {10, 4, 2};
  int cantidad = sizeof(elementos) / sizeof(elementos[0]);

 
  for (int i = 0; i < cantidad - 1; i++) {
    for (int j = 0; j < cantidad - i - 1; j++) {
      if (elementos[j] > elementos[j + 1]) {

        int temp = elementos[j];
        elementos[j] = elementos[j + 1];
        elementos[j + 1] = temp;
      }
    }
  }


  Serial.println("Vector ordenado:");
  for (int i = 0; i < cantidad; i++) {
    Serial.print(elementos[i]);
    Serial.print(" ");
  }
  Serial.println();
}

void loop() {

}
