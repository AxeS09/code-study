// color de led en .jnos ... solo en --WOKWI--

// --ejemplos--
//{ "color": "yellow" }
//{ "color": "#9EFF3C" }
//{ "color": "GYR"}
//{ "color": "BCYR"}

// https://flatuicolors.com
// https://uigradients.com/#Frost

// cualquier color  elegible



const int analogPin = A0;  // the pin that the potentiometer is attached to
const int ledCount = 10;   // the number of LEDs in the bar graph

int ledPins[] = {
  4,5,6,7,8,9,10,11,12,13
};  //pines de led


void setup() {
  // loop over the pin array and set them all to output:
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    pinMode(ledPins[thisLed], OUTPUT);
  }
}

void loop() {
  // read the potentiometer:
  int sensorReading = analogRead(analogPin);
  // map the result to a range from 0 to the number of LEDs:
  int ledLevel = map(sensorReading, 0, 1023, 0, ledCount);

  // loop over the LED array:
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    // if the array element's index is less than ledLevel,
    // turn the pin for this element on:
    if (thisLed < ledLevel) {
      digitalWrite(ledPins[thisLed], HIGH);
    }
    // turn off all pins higher than the ledLevel:
    else {
      digitalWrite(ledPins[thisLed], LOW);
    }
  }
}
