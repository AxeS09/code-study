int LED = 3;
int POT = 0;
int BRILLO;


void setup(){
  pinMode(LED, OUTPUT);
  //las entredas analogicas no nesesitan inicializacion  
}

void loop(){
  BRILLO=analogRead(POT)/4;// entredas analogiacas 123 - entrdas digutales 255 ...q es un x 4 asi que la dividivos para optener el rango
  analogWrite(LED, BRILLO);

}