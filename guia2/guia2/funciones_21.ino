const int trigPin = 9; 
const int echoPin = 10; 

void setup() {
  Serial.begin(9600); 
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
}

void loop() {
  long distance = measureDistance(); 
  Serial.print("Distancia: ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(1000); 
}


long measureDistance() {
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  
  long duration = pulseIn(echoPin, HIGH);
  
  
  long distance = duration * 0.034 / 2; 
  return distance; 
}
