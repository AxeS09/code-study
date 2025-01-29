const int rojo = 11;
const int verde = 10;
const int azul = 9;

void setup() 
{
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
}

void loop() 
{
  analogWrite(rojo, 0);
  analogWrite(verde, 255);
 
  delay(1000);
  
  analogWrite(verde, 0);
  analogWrite(azul, 255);
  delay(1000);
  analogWrite(rojo, 255);
  
  analogWrite(azul, 0);
  delay(1000);


  // si pe
     
  analogWrite(rojo, 0);
  analogWrite(verde, 255);
  analogWrite(azul, 255);
  delay(1000);
  analogWrite(rojo, 255);
  analogWrite(verde, 0);
  analogWrite(azul, 255);
  delay(1000);
  analogWrite(rojo, 255);
  analogWrite(verde, 255);
  analogWrite(azul, 0);
  delay(1000);

  // sii
  analogWrite(rojo, 0);
  analogWrite(azul, 255);
  analogWrite(azul, 255);

  delay(1000);

  analogWrite(rojo, 255);
  analogWrite(verde, 0);
  analogWrite(azul, 255);
  
  delay(1000);

  analogWrite(rojo, 255);
  analogWrite(azul, 255);
  analogWrite(verde, 0);
  delay(1000);
}
