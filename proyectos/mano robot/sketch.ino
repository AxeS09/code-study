#include <Servo.h>

#include <LiquidCrystal_I2C.h>

#define I2C_ADDR    0x27  // I2C control
#define LCD_COLUMNS 20  //columnas
#define LCD_LINES   4  //filas 
 
LiquidCrystal_I2C lcd(I2C_ADDR, LCD_COLUMNS, LCD_LINES); //objeto

Servo servo1; // crea objeto con la libreria (servo 1)
Servo servo2; // crea el objeto (servo 2)
Servo servo3; // objeto sevo 3
Servo servo4; // objeto servo 4
Servo servo5; // objeto servo 5

int PINS1= 2;  //SENAL SERVO  1
int PINS2 = 3; //SENAL SERVO  2
int PINS3 = 4; //SENAL SERVO  3
int PINS4 = 5; //senal servo  4
int PINS5 = 6; //SENAL SERVO  5

int PULSOMIN= 550; //0 grados -- aca es  micro segundos 
int PULSOMAX = 2450; // 180 gados

int RELE_BLANCO = 7; // relay led (blanco)
int RELE_ROJO = 8; //relay led (rojo)
int RELE_RGB = 12; // rele de RGB

const int rojo = 11; //rgb
const int verde = 10; //rgb
const int azul = 9; //rgb


void setup() {

 

  pinMode(RELE_BLANCO, OUTPUT); // salida del rele-- led blaco
  pinMode(RELE_ROJO, OUTPUT); //salida del rele --led rojo
  pinMode(RELE_RGB, OUTPUT); //salida del rele--- rgb

  servo1.attach(PINS1, PULSOMIN, PULSOMAX );  //inicializa servos  
  servo2.attach(PINS2, PULSOMIN, PULSOMAX );
  servo3.attach(PINS3, PULSOMIN, PULSOMAX );
  servo4.attach(PINS4, PULSOMIN, PULSOMAX );
  servo5.attach(PINS5, PULSOMIN, PULSOMAX );

  pinMode(rojo, OUTPUT); //salida rgb
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  
       //iniciacion lcd
  lcd.init(); //inicia led
  delay(1000); // demora hasta todo este en su sitio


  
}

void loop() {  

  
  lcd.backlight(); // prende fondo led

  delay(2000); // mas demora

   // Print ------ lcd-----------

  lcd.setCursor(1, 0); //linea  0
  lcd.print("Un gusto, Soy Alex "); // frase

  lcd.display(); // muestra texto
  delay(700); // demora
  lcd.noDisplay(); // no se muestra
  delay(400); // demora
  lcd.display(); // muestra texto

  lcd.setCursor(1, 1);
  lcd.print("Este es mi Proyecto"); // frase
  
  lcd.display(); // muestra texto
  delay(700); // demora
  lcd.noDisplay(); // no se muestra
  delay(400); // demora
  lcd.display(); // muestra texto

  lcd.setCursor(1, 2);
  lcd.print("  'mano robot'"); // frase
  
  lcd.display(); // muestra texto
  delay(700); // demora
  lcd.noDisplay(); // no se muestra
  delay(400); // demora
  lcd.display(); // muestra texto

  lcd.setCursor(3, 3);
  lcd.print( "  Disfruta "); //frase
  delay(300);

  lcd.display(); // muestra texto
  delay(700); // demora
  lcd.noDisplay(); // no se muestra
  delay(400); // demora
  lcd.display(); // muestra texto
  
  // limpia lcd-----

  lcd.clear(); 

  //- mano----------- aciones --- 1,2 leds --- 3 RGB --- 4 servos 

  ///---------  1 ---------

  lcd.setCursor(1, 0);
  lcd.print( " !! Piel !!");
  digitalWrite(RELE_BLANCO, HIGH);
  delay(2000);

  //// ---------2----------
  lcd.setCursor(1, 1);
  lcd.print( "!! Musculos !!");
  digitalWrite(RELE_BLANCO, LOW);
  digitalWrite(RELE_ROJO, HIGH);
  delay(2000);

  ////------------3----------
  lcd.setCursor(1, 2);
  lcd.print( "!! HUESOS !!");
  digitalWrite(RELE_ROJO, LOW);
  digitalWrite(RELE_RGB, HIGH);
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
  

  lcd.setCursor(1, 3);
  lcd.print( "!! DEDOS !!");
  digitalWrite(RELE_RGB, LOW);
    servo1.write(0); // servo 
    delay(700);
    servo2.write(50); // servo  
    delay(700);
    servo3.write(60); // servo 
    delay(700);
    servo4.write(70); // servo
    delay(700);
    servo5.write(60); // servo 
    delay(700);
    

   // servos se mueven al mismo tiempo
    servo5.write(130); // servo 
    delay(1000);
    servo4.write(100); // servo 
    delay(1000);
    servo3.write(90); // servo 
    delay(1000);
    servo2.write(85); // servo 
    delay(1000);
    servo1.write(40); // servo 
    delay(1000);
    
    servo1.write(0); // servo 
    delay(500);
    servo2.write(60); // servo 
    delay(500);
    servo3.write(50); // servo 
    delay(500);
    servo4.write(40); // servo 
    delay(500);
    servo5.write(40); // servo 
    delay(500);

    servo1.write(20); // servo 
    servo2.write(80); // servo  
    servo3.write(95); // servo 
    servo4.write(100); // servo
    servo5.write(125); // servo 
    delay(1000); //retraso 
  
    servo1.write(90); // servo 
    servo2.write(90); // servo 
    servo3.write(90); // servo 
    servo4.write(70); // servo 
    servo5.write(90); // servo 
 


   
  lcd.clear(); /// limpieza pantalla 


  lcd.setCursor(1, 1);
  lcd.print( "!! Ahora !!"); // frase 1
  lcd.setCursor(1, 2);
  lcd.print( "!! TODOSSS !!"); //frase 2

  //--------- todo al mismo tiempo ------ leds, RGB, servos------

  digitalWrite(RELE_BLANCO, HIGH);
  digitalWrite(RELE_ROJO, HIGH);
  digitalWrite(RELE_RGB, HIGH);

    //RGB

    analogWrite(rojo, 0);
    analogWrite(verde, 255);
    delay(700);
    analogWrite(verde, 0);
    analogWrite(azul, 255);
    delay(700);
    analogWrite(rojo, 255);
    analogWrite(azul, 0);

    //servos
    servo1.write(0); // servo 
    delay(500);
    servo2.write(50); // servo 
    delay(500);
    servo3.write(40); // servo 
    delay(500);
    servo4.write(30); // servo 
    delay(500);
    servo5.write(30); // servo 
    

    //apagado de leds y RGB
    digitalWrite(RELE_BLANCO, LOW);
    digitalWrite(RELE_ROJO, LOW);
    digitalWrite(RELE_RGB, LOW);
    delay(700);

    //prende leds y RGB
    digitalWrite(RELE_BLANCO, HIGH);
    digitalWrite(RELE_ROJO, HIGH);
    digitalWrite(RELE_RGB, HIGH);

    //servos 
    servo5.write(90); // servo 
    delay(600);
    servo4.write(80); // servo 
    delay(600);
    servo3.write(70); // servo 
    delay(600);
    servo2.write(70); // servo 
    delay(600);
    servo1.write(90); // servo 
    delay(600);
  
  lcd.clear(); // limpieza

  lcd.setCursor(3, 2);
  lcd.print( "!! GRACIAS !!"); //frase 2
  lcd.setCursor(1,3 );
  lcd.print( "(/) (°,,°) (/)"); //frase 2
  lcd.display(); // muestra texto
  delay(500); // demora
  lcd.noDisplay(); // no se muestra
  delay(500); // demora
  lcd.display(); // muestra texto
  delay(200); // demora
  lcd.noDisplay(); // no se muestra
  delay(200); // demora
  lcd.display(); // muestra texto
  delay(100); // demora
  lcd.noDisplay(); // no se muestra
  delay(100); // demora
  lcd.display(); // muestra texto
  delay(50); // demora
  lcd.noDisplay(); // no se muestra
  delay(50); // demora
  
  lcd.clear(); // limpieza para volver a empezar 
   //APAGA leds y RGB
  lcd.display(); // muestra texto
  delay(50); // demora
  lcd.setCursor(1,3 );
  lcd.print( "off"); //frase 2
  delay(200);
  lcd.noBacklight();


  lcd.clear(); // limpieza para volver a empezar 
   //APAGA leds y RGB
    digitalWrite(RELE_BLANCO, LOW);
    delay(200);
    digitalWrite(RELE_ROJO, LOW);
    delay(100);
    digitalWrite(RELE_RGB, LOW);
    delay(50);

  delay(2000);
}




