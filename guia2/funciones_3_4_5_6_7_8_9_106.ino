
bool esMultiplo(int num1, int num2) {
  if (num2 == 0) {
    return false; 
  }
  return (num1 % num2 == 0); 
}

void setup() {
  Serial.begin(9600); 
  
  
  int numero1 = 20;
  int numero2 = 5;

  if (esMultiplo(numero1, numero2)) {
    Serial.print(numero1);
    Serial.print(" es multiplo de ");
    Serial.println(numero2);
  } else {
    Serial.print(numero1);
    Serial.print(" no es multiplo de ");
    Serial.println(numero2);
  }
}

void loop() {
  
}
