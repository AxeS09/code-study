#include <LiquidCrystal.h>

LiquidCrystal lcd(7,6,5,4,3,2); // objeto -- pines al que se une

void setup() {

  lcd.begin(16,2);  // inicia lcd -- especifica cuantas columnas y lineas tiene 

}

void loop() {      // ..........texto moviemito solo hasta 40 caracteres..........

  lcd.setCursor(2,0); // empiesa columna 2 para que se ve texto antes de que se mueva
  lcd.print("Prueva de texto largo" ); //texto
  lcd.scrollDisplayRight();  /// funcion movimiento derecha(left), izquierda( right)
  delay(1000); // demora por caracter

}
