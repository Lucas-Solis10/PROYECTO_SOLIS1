
const int buzzerPin = 8;


#define NOTE_C  262
#define NOTE_D  294
#define NOTE_E  330
#define NOTE_F  349
#define NOTE_G  392
#define NOTE_A  440
#define NOTE_B  494
#define NOTE_C5 523


#define WHOLE  1000
#define HALF   500
#define QUARTER 250

void setup() {
  Serial.begin(9600); 
  
  melody1();
  delay(2000); 
  melody2();
  delay(2000); 
  melody3();
}

void loop() {
  
}


void melody1() {
  Serial.println("Tocando Melodia 1");
  tone(buzzerPin, NOTE_C, HALF);
  delay(HALF);
  tone(buzzerPin, NOTE_D, HALF);
  delay(HALF);
  tone(buzzerPin, NOTE_E, HALF);
  delay(HALF);
  noTone(buzzerPin); 
}


void melody2() {
  Serial.println("Tocando Melodia 2");
  tone(buzzerPin, NOTE_E, QUARTER);
  delay(QUARTER);
  tone(buzzerPin, NOTE_D, QUARTER);
  delay(QUARTER);
  tone(buzzerPin, NOTE_C, QUARTER);
  delay(QUARTER);
  noTone(buzzerPin);
}


void melody3() {
  Serial.println("Tocando Melodia 3");
  tone(buzzerPin, NOTE_G, HALF);
  delay(HALF);
  tone(buzzerPin, NOTE_A, HALF);
  delay(HALF);
  tone(buzzerPin, NOTE_B, HALF);
  delay(HALF);
  noTone(buzzerPin);
}
