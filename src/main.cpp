#include <Arduino.h>

const int ledPin = 9;
int test = 0;

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  int s_or_m;
  Serial.println("Select you're version say 1 to calculate sum or 2 for multiplication");
  do
  {
    while (Serial.available() == 0)
    {
    }
    s_or_m = parseInt();

  } while (s_or_m != 1 || s_or_m != 2)

      if (s_or_m == 1)
  {
    sum();
  }
  else mul();
}

// Member 4: Multiplication function
void mul()
{
  // Get first number
  Serial.println("Enter first number:");
  while (Serial.available() == 0)
  {
    // Wait for input
  }
  float num1 = Serial.parseFloat();

  // Get second number
  Serial.println("Enter second number:");
  while (Serial.available() == 0)
  {
    // Wait for input
  }
  float num2 = Serial.parseFloat();

  // Calculate and print result
  float result = num1 * num2;
  Serial.print("Result: ");
  Serial.println(result);
}

void blink()
{
  digitalWrite(ledPin, HIGH); // change state of the LED by setting the pin to the HIGH voltage level
  delay(1000);
  digitalWrite(ledPin, LOW); // change state of the LED by setting the pin to the LOW voltage level
  delay(1000);
}
