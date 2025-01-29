#include <Servo.h>

Servo servo1;

int PINSERVO = 2; //SENAL SERVO
int PULSOMIN= 500; //0 grados -- aca es  micro segundos 
int PULSOMAX = 2450; //180 gados
int VALORPOT;
int ANGULO;
int POT=0;


// tenemos que ir provando hasta alcanzar los puntos minimo y maximo del servo modificnado min y max ahata llegar a 180
//podemos empezar de MIN=(1000)< y MAX=(200)>

//en este caso es 550 y 1250


void setup() {
  servo1.attach(PINSERVO, PULSOMIN, PULSOMAX );
  //...           las entrdas analogicas no nesesitan inicializacion           ....
}

void loop() {
  VALORPOT= analogRead(POT); // en la varibe guadamos el valor de la entrada 0

  ANGULO = map( VALORPOT,    0, 1023,       0, 180   ); // comvertimos la entrdada (potenciometro) analogica tene (0-180)y el servo (1-180)
  //           -entrda    -rango entrada   -rango salida

  servo1.write(ANGULO); //escribe la conversion en la salida al motor 
  delay(20); // mayor peso mayor delay

}
