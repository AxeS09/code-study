void setup(){
  pinMode(2, INPUT);  //pin 2 entrada
  pinMode(3, OUTPUT); //pin 3 salida
}
void loop(){
  if (digitalRead(2) == HIGH){  //condicion entrada esat nivel alto
    digitalWrite(3, HIGH);   //encender led
  }
  else{
    digitalWrite(3, LOW); //apagar led
  }
}