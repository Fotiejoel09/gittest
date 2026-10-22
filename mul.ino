#include <Arduino.h>

// Function prototype
void mul();

void setup() {
  // Start serial communication
  Serial.begin(9600); 
  
  // Call the multiplication function
  mul();
}

void loop() {
  // Empty loop
}

// Member 4: Multiplication function
void mul() {
  // Get first number
  Serial.println("Enter first number:");
  while (Serial.available() == 0) {
    // Wait for input
  }
  float num1 = Serial.parseFloat();

  // Get second number
  Serial.println("Enter second number:");
  while (Serial.available() == 0) {
    // Wait for input
  }
  float num2 = Serial.parseFloat();

  // Calculate and print result
  float result = num1 * num2;
  Serial.print("Result: ");
  Serial.println(result);
}
