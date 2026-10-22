# C++ Multiplication Program

A minimalist **C++ console application** that multiplies two numbers entered by the user and displays the result.

## Features
* Accepts two user-defined numbers (integer or floating-point).
* Computes the product instantly.
* Simple, clean, and well-commented source code.

## How to Use

1. Open this project in VS Code.
2. Connect your Arduino board to your computer.
3. Build and upload the code to your board.
4. Open the Serial Monitor in VS Code (set the baud rate to 9600).
5. Follow the prompts to enter your two numbers.

## code cpp

* void mul() {
* // Get first number

*  Serial.println("Enter first number:");
* while (Serial.available() == 0) {}
* float num1 = Serial.parseFloat();

* // Get second number
*  Serial.println("Enter second number:");
*  while (Serial.available() == 0) {}
*  float num2 = Serial.parseFloat();

*  // Calculate and print result
*  float result = num1 * num2;
*  Serial.print("Result: ");
*  Serial.println(result);
*}
