const int buzzerPin = 8; 
const int arraySize = 10; 
int numbers[arraySize]; 

void setup() {
  Serial.begin(9600); 
  pinMode(buzzerPin, OUTPUT); 

  generateRandomNumbers(); 
  displayNumbers(); 
}

void loop() {
 
}


void generateRandomNumbers() {
  for (int i = 0; i < arraySize; i++) {
    numbers[i] = random(1, 11); 
  }
}


void displayNumbers() {
  bool foundFive = false; 

  Serial.println("Numeros generados:");
  for (int i = 0; i < arraySize; i++) {
    Serial.print(numbers[i]);
    Serial.print(" ");
    if (numbers[i] == 5) {
      foundFive = true; 
    }
  }
  Serial.println();

 
  if (foundFive) {
    Serial.println("Se encontro un 5! Haciendo sonar el buzzer.");
    tone(buzzerPin, 1000, 500); 
  } else {
    Serial.println("No se encontro un 5.");
  }
}
