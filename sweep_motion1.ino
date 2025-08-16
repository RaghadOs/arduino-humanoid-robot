#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

unsigned long startTime;

void setup() {
  servo1.attach(2);  
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);

  startTime = millis();  // Start time
}

void loop() {
  unsigned long elapsed = millis() - startTime;

  if (elapsed < 2000) {
    // Sweep motion for 2 seconds
    for (int pos = 0; pos <= 180; pos += 5) {
      servo1.write(pos);
      servo2.write(180 - pos);
      servo3.write(pos);
      servo4.write(180 - pos);
      delay(15);
    }
    for (int pos = 180; pos >= 0; pos -= 5) {
      servo1.write(pos);
      servo2.write(180 - pos);
      servo3.write(pos);
      servo4.write(180 - pos);
      delay(15);
    }
  } else {
    // Hold position at 90°
    servo1.write(90);
    servo2.write(90);
    servo3.write(90);
    servo4.write(90);
  }
}