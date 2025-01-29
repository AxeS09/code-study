int RELE = 2;


void setup() {
  pinMode(RELE, OUTPUT);

}

void loop() {

  digitalWrite(RELE, LOW); // activa valor vajo
  delay(5000);
  digitalWrite(RELE, HIGH); // desactiva nivel alto
  delay(5000);

}
