#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // Dirección I2C para el LCD

void setup() {
  lcd.begin();
  lcd.backlight(); // Enciende la retroiluminación del LCD

  displayWelcome(); // Muestra el mensaje de bienvenida
  delay(2000); // Espera 2 segundos

  startGame(); // Muestra el inicio del juego
  delay(2000); // Espera 2 segundos

  int score = random(0, 101); // Genera un puntaje aleatorio entre 0 y 100
  displayScore(score); // Muestra la puntuación
  delay(2000); // Espera 2 segundos

  endGame(); // Muestra el fin del juego
}

void loop() {
  // No hacemos nada en el bucle principal
}

// Función para mostrar el mensaje de bienvenida
void displayWelcome() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Bienvenido!");
  lcd.setCursor(0, 1);
  lcd.print("Preparados?");
}

// Función para mostrar el inicio del juego
void startGame() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Inicio de Juego");
}

// Función para mostrar el fin del juego
void endGame() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Fin del Juego!");
}

// Función para mostrar la puntuación
void displayScore(int score) {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Puntuacion:");
  lcd.setCursor(0, 1);
  lcd.print(score); // Muestra el puntaje aleatorio
}

