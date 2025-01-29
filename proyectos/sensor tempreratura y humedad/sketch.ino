#include <DHT.h>
#include <DHT_U.h>

int SENSOR = 2;
int TEMPERATURA;
int UMEDAD;

DHT dht (SENSOR, DHT22); //--- creacion de objeto (nombre) --- pin y modelo ---


void setup() {
  Serial.begin(9600); //inicio de comunicacion serial ---monitor serial
  dht.begin();  // inicio de el sensor

}

void loop() {
  TEMPERATURA = dht.readTemperature(); //lee temperatura guarda en TEMPERATURA
  UMEDAD = dht.readHumidity(); //lee humedad guarda en UMEDAD
  Serial.print("Temperatura: "); //imprime text
  Serial.println(TEMPERATURA);  // imprimer valor 
  Serial.print(" Humedad: "); // imprime txt
  Serial.println(UMEDAD); //imprime valor con un salto  a la linea siguiente en ln
  delay(500); //retrrasi 0.5 s


}
