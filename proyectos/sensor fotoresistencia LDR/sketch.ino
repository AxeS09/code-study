int SENSOR = 0;
int LED = 3;
int VALOR;
int PWM;


void setup() {
  pinMode(LED, OUTPUT);

}

//       Condición	       Iluminación (lux)	          Resistencia        LDR	Voltaje*	      valor de analogRead()
//       Luna llena	           0,1	                      1,25 MΩ	           4,96	                     1016
//     Luz solar directa	     100.000	                    79 Ω	            0,04	                    8


void loop() {
  VALOR = analogRead(SENSOR);
  
  /// con PWM-------

  PWM= map(VALOR, 7 , 1016, 255, 0); // en las especificaciones
  analogWrite(LED, PWM);
  

  /// sin pwm------------------
  //if(VALOR > 700){ 

  //  digitalWrite(LED, HIGH);
  //  delay(1000);
  
  //}
  //else{
  //  digitalWrite(LED, LOW);
  //}
  

}
