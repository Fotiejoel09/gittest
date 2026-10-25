Arduino Blink Project
1. About the Project
This project uses an Arduino to control an LED and a buzzer. The LED turns on and off, while the buzzer produces a 1 kHz sound signal.
2. Components Required
- Arduino board (e.g., Arduino Uno)
- LED
- Resistor (220–330 Ω)
- Buzzer
- Breadboard
- Jumper wires
3. Pin Connections
- LED: Digital pin 9
- Buzzer: Digital pin 8
- GND: Connect to the ground of the circuit

4. Arduino Code
#include <Arduino.h>
const int ledPin = 9;
const int buzzerpin = 8;
int test = 0;
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerpin, OUTPUT);
}
void loop() {
  digitalWrite(ledPin, HIGH);
  delay(2000);
  tone(buzzerpin, 1000);
  delay(2000);
  digitalWrite(ledPin, LOW);
  delay(100);
  noTone(buzzerpin);
  delay(1000);
}
5. How the Code Works
1. "setup()" configures the LED and buzzer pins as outputs.
2. "digitalWrite(ledPin, HIGH)" turns on the LED.
3. "delay(2000)" waits for 2 seconds.
4. "tone(buzzerpin, 1000)" makes the buzzer produce a 1000 Hz sound.
5. "digitalWrite(ledPin, LOW)" turns off the LED.
6. "noTone(buzzerpin)" stops the buzzer.
7. The "loop()" function repeats these actions continuously.
6. Git and GitHub Commands
Clone a Repository
Downloading this GitHub repository no my computer.
git clone https://github.com/ Fotiejoel09 /gittest.git
cd gittest
To check the Status
git status
Add Files
Add the README file:
git add README.md
Or add all changed files:
git add .
Commit Changes
-Save your changes in Git:
git commit -m "Add Arduino blink project"
Push Changes
Upload your commits to GitHub:
git push origin main
Pull Changes
Download and integrate the latest changes from GitHub:
git pull origin main

