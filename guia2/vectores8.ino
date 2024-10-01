const int ledPin = 3;      
const int buttonPin = 4;  
const int maxCount = 5;    
int buttonStates[maxCount]; 
int index = 0;              

void setup() {
  Serial.begin(9600);       
  pinMode(ledPin, OUTPUT);  
  pinMode(buttonPin, INPUT_PULLUP); 
}

void loop() {
  
  digitalWrite(ledPin, HIGH);
  Serial.println("Presione el boton (LED encendido)");
  
  
  while (digitalRead(buttonPin) == HIGH); 
  delay(100); 

  
  buttonStates[index] = 1; 
  Serial.println("Boton presionado");
  index++;
  
  
  digitalWrite(ledPin, LOW);
  delay(1000); 
  
 
  digitalWrite(ledPin, HIGH);
  Serial.println("Presione el boton (LED encendido)");

  
  while (digitalRead(buttonPin) == HIGH); 
  delay(100); 

  
  buttonStates[index] = 0; 
  Serial.println("Boton no presionado");
  index++;

 
  digitalWrite(ledPin, LOW);
  delay(1000); 

 
  if (index >= maxCount) {
    Serial.println("Secuencia completa:");
    for (int i = 0; i < maxCount; i++) {
      Serial.print(buttonStates[i]);
      Serial.print(" ");
    }
    Serial.println();

    
    index = 0;
    delay(2000); 
  }
}
