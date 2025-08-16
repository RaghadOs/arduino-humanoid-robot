#include <Servo.h>

Servo hipRight;  // D2
Servo hipLeft;   // D3
Servo legRight;  // D4
Servo legLeft;   // D5

void setup() {
  hipRight.attach(2);
  hipLeft.attach(3);
  legRight.attach(4);
  legLeft.attach(5);

  hipRight.write(90);
  hipLeft.write(90);
  legRight.write(90);
  legLeft.write(90);
  delay(1000);
}

void loop() {
  hipRight.write(60);   
  legRight.write(70);   
  delay(500);
  legRight.write(90);   
  hipRight.write(90);   
  delay(500);

  hipLeft.write(120);   
  legLeft.write(110);   
  delay(500);
  legLeft.write(90);    
  hipLeft.write(90);   
  delay(500);
}