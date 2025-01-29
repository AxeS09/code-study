#include <Servo.h>

Servo servo1;

int PINSERVO = 2; //SENAL SERVO
int PULSOMIN= 550; //0 grados -- aca es  micro segundos 
int PULSOMAX = 2450; //180 gados

// tenemos que ir provando hasta alcanzar los puntos minimo y maximo del servo modificnado min y max ahata llegar a 180
//podemos empezar de MIN=(1000)< y MAX=(200)>

//en este caso es 550 y 1250


void setup() {
  servo1.attach(PINSERVO, PULSOMIN, PULSOMAX );
}

void loop() {
  servo1.write(0);
  delay(5000);
  servo1.write(180);
  delay(5000);
}
