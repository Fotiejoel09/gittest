#include <Arduino.h>

const int ledPin = 9;
unsigned long time = millis();
bool ledState = LOW;
void blink();
void mul();

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  blink();
  int s_or_m;
  Serial.println("Select you're version say 1 to calculate sum or 2 for multiplication");
  do
  {
    while (Serial.available() == 0)
    {
      // Wait for input
      blink();
    }
    s_or_m = Serial.parseInt();

  } while (s_or_m != 1 && s_or_m != 2);

  if (s_or_m == 1)
  {
    //sum();
  }
  else 
  {
    mul();
  }
}

// Member 4: Multiplication function
void mul()
{
  // Get first number
  Serial.println("Enter first number:");
  while (Serial.available() == 0)
  {
    // Wait for input
    blink();
  }
  float num1 = Serial.parseFloat();

  // Get second number
  Serial.println("Enter second number:");
  while (Serial.available() == 0)
  {
    // Wait for input
    blink();
  }
  float num2 = Serial.parseFloat();

  // Calculate and print result
  float result = num1 * num2;
  Serial.print("Result: ");
  Serial.println(result);
}

void blink()
{
  unsigned long currentMillis = millis();
  if(currentMillis - time >= 1000)
  {
    time = currentMillis;
    ledState = !ledState;
    digitalWrite(ledPin, ledState);
  }
}
