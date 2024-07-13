#define TRIG 10
#define ECHO 9
#define PIR 2
#define LED_R 5
#define LED_G 3
#define BUZ 6
#define MSG(a,b) Serial.print(a); Serial.println(b);
void setup()
{
  pinMode(PIR, INPUT);
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(BUZ, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  
  bool move = digitalRead(PIR);
  if (move == HIGH){
    digitalWrite(LED_R, HIGH);
    digitalWrite(LED_G, HIGH);
  }else{
    digitalWrite(LED_R, LOW);
    digitalWrite(LED_G, HIGH);
  }
  
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  
  float tiempo = pulseIn(ECHO, HIGH);
  float distancia = tiempo / 57.6;
  
  MSG("Distancia: ", distancia);
  if(distancia<100){
    digitalWrite(LED_R, HIGH);
    digitalWrite(LED_G, LOW);
    analogWrite(BUZ, 100);
  }else if(distancia>100 && distancia<200){
    digitalWrite(LED_R, LOW);
    digitalWrite(LED_G, LOW);
    analogWrite(BUZ, 25);
  }else if(distancia>200){
    analogWrite(BUZ, 0);
  }
}