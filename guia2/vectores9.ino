
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;


int L1[3] = {122, 234, 21};   
int L2[3] = {33, 53, 155};    
int L3[3] = {200, 255, 12};   


int* colors[] = {L1, L2, L3}; 

void setup() {
  Serial.begin(9600);          
  pinMode(redPin, OUTPUT);      
  pinMode(greenPin, OUTPUT);   
  pinMode(bluePin, OUTPUT);     

 
  for (int i = 0; i < 3; i++) {
    showColor(colors[i]); 
    delay(2000); 
  }
}

void loop() {
  
}


void showColor(int color[]) {
  
  analogWrite(redPin, color[0]);   
  analogWrite(greenPin, color[1]); 
  analogWrite(bluePin, color[2]);  
  

  Serial.print("Mostrando color: R:");
  Serial.print(color[0]);
  Serial.print(" G:");
  Serial.print(color[1]);
  Serial.print(" B:");
  Serial.println(color[2]);
}
