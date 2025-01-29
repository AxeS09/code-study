int LEDROJO = 11;
int LEDVERDE = 10;
int LEDAZUL = 9;


void setup() {
  pinMode(LEDROJO, OUTPUT);
  pinMode(LEDVERDE, OUTPUT);
  pinMode(LEDAZUL, OUTPUT);

}

void loop() {
  // funcion miColorC -- numeros (rojo,verde,azul)
  miColorC(255,0,0); //rojo (C)
  delay(2000);
  miColorC(0,255,0); //verde (C)
  delay(2000);
  miColorC(0,0,255); //azul (C)
  delay(2000);

  // funcion miColorA -- numeros (rojo,verde,azul)
  miColorA(255,0,0); //rojo (A)
  delay(2000);
  miColorA(0,255,0); //verde (A)
  delay(2000);
  miColorA(0,0,255); //azul (A)
  delay(2000);

}

//  funciones // 
void miColorC(int rojo, int verde, int azul){ // logica (+) Catode   (-) Anode
  analogWrite(LEDROJO, rojo);
  analogWrite(LEDVERDE, verde);
  analogWrite(LEDAZUL, azul);
}
void miColorA(int rojo, int verde, int azul){ // logica (-) Catode   (+) Anode
  analogWrite(LEDROJO, 255 - rojo);
  analogWrite(LEDVERDE, 255 - verde);
  analogWrite(LEDAZUL, 255 - azul);
}
// sin funciones 
// https://wokwi.com/projects/408106070028094465