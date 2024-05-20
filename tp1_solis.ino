// C++ code
//
void setup() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);   
  pinMode(2, OUTPUT);
}

void loop() {
  // Prende el primer LED en color rojo fuerte (analógico)
  analogWrite(3, 255);
  tone(2, 1000, 100);
  delay(1000);

  // Apaga el primer LED y prende el segundo en color magenta (digital)
  analogWrite(3, 0);
  digitalWrite(5, HIGH);
  digitalWrite(9, HIGH);
  tone(2, 1000, 100);
  delay(1000);

  // Apaga el segundo LED y prende el tercero en color cian (analógico)
  digitalWrite(5, LOW);
  digitalWrite(9, LOW);
 
  analogWrite(6, 100);
  analogWrite(10, 255);
  tone(2, 1000, 100);
  delay(1000);

  // Apaga el tercer LED y prende el primero nuevamente
  analogWrite(10, 0);
  analogWrite(6, 0);
}