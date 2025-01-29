int PULSADOR = 2;
int LED= 3;
int ESTADO = LOW;

void setup(){
  pinMode(PULSADOR, INPUT);  //pin 2 entrada
  pinMode(LED, OUTPUT);   //pin 3 salida
}
void loop(){
  while(digitalRead(PULSADOR) == LOW){  //espera a que se presione
  
  }
  ESTADO = digitalRead(LED);  //lee estado led
  digitalWrite(LED, !ESTADO); //ecribre vaor contrario
  while(digitalRead(PULSADOR) == HIGH) { //atirebote 
  
  }
}