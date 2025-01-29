#include <Keypad.h>

const byte FILAS = 4; // variable byte contine 8 bit que va del 0 al 255 --- en comparacion con int que guarda 16 bits que va desde el -32768 a +32767
const byte COLUMNAS = 4; // costante que no se puede modificar despues 

//define los simbolos de los botones del keypad

char keys[FILAS][COLUMNAS] = {

  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte pinesFilas[FILAS] = {9, 8, 7, 6}; //pinesde la filas
byte pinesColumnas[COLUMNAS] = {5, 4, 3, 2}; //pines de las columnas

Keypad teclado = Keypad( makeKeymap(keys), pinesFilas, pinesColumnas, FILAS,  COLUMNAS); 

// este teclado es para simular el ingreso de una clave de suguridad de 6 dijitos
char TECLA;     //  (char) es un caracter ya que el teclado no solo tiene numeris sino == letras, simbolos y numeros 
char CLAVE[7];  // clave es de 6 digito el ultimo es null para convertir cadena en un strim o (texto) para compararlo
char CLAVE_MAESTRA [7]="123456";    // clave original a comparar, se describe una raid (cojunto de datos guardados),, de 7 el ultimo es el nul
byte INDICE = 0;    // indice que ira escrbiendo la clave que ingrese el usurio con el teclado 

  // indexacion se descible que las cadensa van del 0 por ello la cave el 1 = 0  y el 6 = 5 en el indice  y el nul es = a 6 


void setup(){
  Serial.begin(9600);   // mostrar en el monitor lo q escribamos 
}
  
void loop(){
  TECLA = teclado.getKey();
  if (TECLA){      // la condicion del if es que solo se vovera verdadera cuando presionenmos una tecla
    CLAVE [INDICE] = TECLA;   //raid [CLAVE], en indice 0[INDICE] colocaremos caracter coorepondiente tecla presionada[TECLA]
    INDICE ++;    // se aumentara INDICE en 1 
    Serial.print(TECLA);    //enviara valor por el monitor 
  }
  if(INDICE == 6){ // se ejecuata cuando esta escrita la totalidad de lso dijitos [6]
  if(!strcmp (CLAVE, CLAVE_MAESTRA )) // ! invierte el valor de strimcompear (0 = coidide ) a 1 que (if) idetifica como correcto
    Serial.println(" CORRECTA");
    else
    Serial.println(" INCORRECTA");

    INDICE = 0; // despues de escribir el indice buelve a tener 0 dijitos 
  }
}