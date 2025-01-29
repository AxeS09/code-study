int TRIGE = 10;
int ECO = 9;
int LED = 3;
int DURACION;
int DISTANCIA;



void setup() {
  pinMode(TRIGE, OUTPUT);
  pinMode(ECO, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);  // ponemos marcha comunicacion serial -- tasa velosidad (9600)
}

void loop() {
  digitalWrite(TRIGE, HIGH); // evia pulso
  delay(1);
  digitalWrite(TRIGE, LOW); //detiene pulso 
  DURACION = pulseIn(ECO, HIGH); //en duracion guarda del pin eco cuando reciba pulso alto en (t) ms
  DISTANCIA = DURACION / 58,2; // 58 valor especifica en el fabricante .. obtien (d) cm
  Serial.println(DISTANCIA); //pinta la distancia al a pc en una linea
  delay(200); //hace que se pinte forma retardada la (d) 
  if (DISTANCIA <= 40 && DISTANCIA >= 0){
    digitalWrite(LED, HIGH);
    delay(DISTANCIA * 10); //retrasoe n f de la (d)
    digitalWrite(LED, LOW);
  }

}
 