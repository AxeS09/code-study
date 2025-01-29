int LEDROJO = 11;
int LEDVERDE = 10;
int LEDAZUL = 9;

void setup() {
  pinMode(LEDROJO, OUTPUT);
  pinMode(LEDVERDE, OUTPUT);
  pinMode(LEDAZUL, OUTPUT);

}

void loop() {

  // logica positiva (catode)(C) ---- logica negativa (anode)(A)

  digitalWrite(LEDROJO, 255); //rojo (C) -- celeste (A)
  digitalWrite(LEDVERDE, 0);
  digitalWrite(LEDAZUL, 0);
  delay(2000);

  digitalWrite(LEDROJO, 0);
  digitalWrite(LEDVERDE, 255); //verde (C)--- violeta (A)
  digitalWrite(LEDAZUL, 0);
  delay(2000);

  digitalWrite(LEDROJO, 0);
  digitalWrite(LEDVERDE, 0);
  digitalWrite(LEDAZUL, 255); // azul (C)-- amarillo (A)
  delay(2000);

  //logica positiva (anode) ---- logica negativa (catode)

  digitalWrite(LEDROJO, 0);  // celeste (C) -- rojo (A)
  digitalWrite(LEDVERDE, 255);  
  digitalWrite(LEDAZUL, 255);
  delay(2000);

  digitalWrite(LEDROJO, 255);
  digitalWrite(LEDVERDE, 0); //violeta (C) --verde (A)
  digitalWrite(LEDAZUL, 255);
  delay(2000);

  digitalWrite(LEDROJO, 255);
  digitalWrite(LEDVERDE, 255);
  digitalWrite(LEDAZUL, 0);  //amarillo (C) --azul (A)
  delay(2000);


  // (+ catode ) (- anode)---- reducionismo------------

  analogWrite(LEDROJO, 255);// rojo (C) 
  analogWrite(LEDAZUL, 0);
  delay(1000);

  analogWrite(LEDROJO, 0); // verde (C)
  analogWrite(LEDVERDE, 255);
  delay(1000);
  
  analogWrite(LEDVERDE, 0); // azul (C)
  analogWrite(LEDAZUL, 255);
  delay(5000);

}

//  funciones // led RGB ---funciones 
// https://wokwi.com/projects/408109886826609665