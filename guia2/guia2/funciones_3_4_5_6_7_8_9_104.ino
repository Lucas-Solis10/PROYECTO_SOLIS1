
const int pines[] = {2, 3, 4, 5}; 
const int cantidadPines = sizeof(pines) / sizeof(pines[0]);


void activarPines(const int pines[], int cantidad) {
  for (int i = 0; i < cantidad; i++) {
    digitalWrite(pines[i], HIGH); 
  }
}

void setup() {
  
  for (int i = 0; i < cantidadPines; i++) {
    pinMode(pines[i], OUTPUT);
  }

  
  activarPines(pines, cantidadPines);
}

void loop() {

}
