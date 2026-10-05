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
