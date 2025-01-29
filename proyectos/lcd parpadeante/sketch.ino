#include <LiquidCrystal.h>

LiquidCrystal lcd(7,6,5,4,3,2); // objeto -- pines al que se une

void setup() {

  lcd.begin(16,2);  // inicia lcd -- especifica cuantas columnas y lineas tiene 

}

void loop() {

  lcd.setCursor(0,0); // cursor en la primera linea y primera fila
  lcd.print(" ingrese clave"); // imprime texto en esta fila 

  // lcd.display(); // muestra texto
  // delay(500); // demora
  // lcd.noDisplay(); // no se muestra
  // delay(500); // demora

  lcd.setCursor(0,1); // linea 2 
  lcd.cursor(); // muestra cursor
  delay(500); //demora
  lcd.noCursor(); // no se muestra cursor
  delay(500); //demora

}
