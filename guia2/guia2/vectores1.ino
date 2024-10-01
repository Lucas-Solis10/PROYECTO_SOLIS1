void setup() {
  Serial.begin(9600);


  int elementos[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int suma = 0;
  int cantidad = sizeof(elementos) / sizeof(elementos[0]);


  for (int i = 0; i < cantidad; i++) {
    suma += elementos[i];
  }

  
  float media = (float)suma / cantidad;


  Serial.print("La media es: ");
  Serial.println(media);
}

void loop() {

}

