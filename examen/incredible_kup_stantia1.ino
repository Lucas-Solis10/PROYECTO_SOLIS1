int sensor = A0;
#define TRIG 10
#define ECHO 9
#define BUZ 6
#define MSG(a,b) Serial.print(a); Serial.println(b);

  void setup()
{

  
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(BUZ, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  
  int valorSensor = analogRead(sensor);
  int tiempo = map(valorSensor, 0, 1023, 50, 200);
  MSG("Distancia: ", tiempo);
  
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  float tiempo2 = pulseIn(ECHO, HIGH);
  float distancia = tiempo2 / 57.6;
  
  MSG("Distancia: ", distancia);
  /*if(distancia<100){

    analogWrite(BUZ, 100);
  }else if(distancia>200 && distancia<200){
   
    analogWrite(BUZ, 100);
  }else if(distancia>200){
    analogWrite(BUZ, 0);
  }*/
  int buz=0;
  buz=distancia-tiempo;
  if(buz<0){
    buz=1;
  }
  analogWrite(BUZ, 255);
  delay(buz);
  analogWrite(BUZ, 100);
  delay(buz);
  MSG("Tiempo: ", buz);
}