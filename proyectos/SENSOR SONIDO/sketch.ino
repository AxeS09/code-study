// sensor de sonido

int MIC = 2;
int LED = 3;
int VALOR ;
int ESTADO;


void setup() {
  pinMode(MIC, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  VALOR = digitalRead(MIC);
  if(ESTADO == HIGH){
    ESTADO = digitalRead(LED);
    digitalWrite(LED, !ESTADO); // cambia el valor al cupplir la condicion
    delay(500);
  }
  

}
