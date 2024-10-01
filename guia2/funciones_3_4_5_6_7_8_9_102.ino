const int ledPin = 2;      
const int pirPin = 4;      
int pirState = LOW;        

void setup() {
  pinMode(ledPin, OUTPUT);   
  pinMode(pirPin, INPUT);    
  Serial.begin(9600);        
}

void loop() {
  pirState = digitalRead(pirPin);  

  if (pirState == HIGH) {           
    digitalWrite(ledPin, HIGH);     
    Serial.println("Movimiento detectado!");  
  } else {
    digitalWrite(ledPin, LOW);      
  }
}
