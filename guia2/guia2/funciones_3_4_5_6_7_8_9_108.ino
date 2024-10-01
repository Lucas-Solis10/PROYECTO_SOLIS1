
const int pines[] = {2, 3, 4, 5}; 
const int cantidadPines = sizeof(pines) / sizeof(pines[0]); 


void configurarPines(const int pines[], int cantidad, int modo) {
  for (int i = 0; i < cantidad; i++) {
    pinMode(pines[i], modo); 
  }
}

void setup() {
  Serial.begin(9600); 
  
  
  configurarPines(pines, cantidadPines, OUTPUT);
  Serial.println("Pines configurados como OUTPUT.");

  
}

void loop() {
 
}
