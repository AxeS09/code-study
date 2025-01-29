int PIR = 2 ; // sensor infrarojo
int RELE = 3; // rele

int ESTADO = 0; // valor de senal del sensor = ponemos -- 0 -- porque aun no ha leido nada



void setup() {

  pinMode(PIR, INPUT); // pin de pir  entreda
  pinMode(RELE, OUTPUT); // pin rele Salida
  delay(20000); //se ejecute una ves --- tiempo promedio indica fafricante -- para no obtener senales falsas ----- no es nesesario solo es para el inicio

}

void loop() {
  ESTADO = digitalRead(PIR); // lee esatdo de PIR y guada en esatdo
  if(ESTADO == HIGH){  // si es esatdo es alto(Movimiento)
    digitalWrite(RELE, HIGH); // prende rele (Led)
    delay(4000);  // espera 4 s
  }
  else {
    digitalWrite(RELE, LOW); // sino es se apaga 

  }

}
