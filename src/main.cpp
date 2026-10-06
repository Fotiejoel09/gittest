#include <Arduino.h>

void setup() {
  Serial.begin(9600);
}

void loop() {
  int s_or_m;
  Serial.println("Select you're version say 1 to calculate sum or 2 for multiplication");
  do{
    while (Serial.avaiable() == 0) {}
    s_or_m = parseInt();
    
  }while(s_or_m != 1 || s_or_m != 2)
  if(s_or_m == 1){
    sum();
  }else
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