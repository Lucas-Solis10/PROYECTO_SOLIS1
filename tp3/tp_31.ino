bool boton = false;

  
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, INPUT_PULLUP);
  
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  
  Serial.begin(9600);
}

void loop()
{
  
  int tiempo = analogRead(A1);
    int tiempo2 = analogRead(A2);
    int tiempo3 = analogRead(A3);
  	int rojo = map ( tiempo , 0 , 1023 , 0 , 255);
  	int verde = map ( tiempo2 , 0 , 1023 , 0 , 255);
  	int azul = map ( tiempo3 , 0 , 1023 , 0 , 255);
  
  if ( digitalRead(7) == LOW);
  {
    boton = !boton;
  }
  
  if (boton == false){
    Serial.println("Tienes 5S para cambiar el led");
    delay(5000);
    
    analogWrite(3, rojo);
 	analogWrite(5, verde);
  	analogWrite(6, azul);
    
    Serial.println("El led esta usando esta configuracion de colores RGB:");
    Serial.println(rojo);
    Serial.println(verde);
    Serial.println(azul);
    
  }else{
    delay(5000);
    analogWrite(3, LOW);
 	analogWrite(5, LOW);
  	analogWrite(6, LOW);
  }
}