#include <Servo.h>
#include <Arduino.h>

Servo servo_a;
Servo servo_b;
void setup() {
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  servo_a.attach(5, 500, 2500);
  servo_b.attach(6, 500, 2500);
}

void loop() {
  // up
  servo_a.write(0);
  servo_b.write(180);

  // play buzzer
  delay(1000);
  tone(4, 651);
  delay(100);
  tone(4, 506);
  delay(400);
  noTone(4);
  delay(800);

  // down
  servo_a.write(180);
  servo_b.write(0);
  delay(4000);
}
