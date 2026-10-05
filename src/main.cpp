#include <Arduino.h>
// put function declarations here:

const int ledPin = 9;
const int buzzerpin = 8;
int test = 0;
  
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerpin, OUTPUT);
}


void loop() {
  digitalWrite(ledPin, HIGH);  // change state of the LED by setting the pin to the HIGH voltage level
  delay(2000);
  tone(buzzerpin, 1000); // Send 1KHz sound signal... 
  delay(2000); // ...for 2 sec                      // wait for a second                    // wait for a second
  digitalWrite(ledPin, LOW);   // change state of the LED by setting the pin to the LOW voltage level
  delay(100); 
  noTone(buzzerpin); // Stop sound...
  delay(1000); // ...for 1 sec

}

