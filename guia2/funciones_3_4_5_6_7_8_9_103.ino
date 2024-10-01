
int lanzarDado(int lados) {
  return random(1, lados + 1); 
}

void setup() {
  Serial.begin(9600); 
  randomSeed(analogRead(0)); 
  
  
  int lados = 6; 
  int resultado = lanzarDado(lados); 
  Serial.print("Resultado del lanzamiento del dado: ");
  Serial.println(resultado); 
}

void loop() {
  
}
