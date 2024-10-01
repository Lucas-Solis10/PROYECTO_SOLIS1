void setup() {
  Serial.begin(9600);

  
  float elementos[] = {5.4, 5.39, 5.38, 5.31, 5.21, 5.03, 4.45, 3.95, 2.6, 1.49};
  int cantidad = sizeof(elementos) / sizeof(elementos[0]);
  
 
  float maximo = elementos[0];

  
  for (int i = 1; i < cantidad; i++) {
    if (elementos[i] > maximo) {
      maximo = elementos[i];
    }
  }

  
  Serial.print("El numero mas grande es: ");
  Serial.println(maximo);
}

void loop() {
 
}
