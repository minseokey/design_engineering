#include <Servo.h>
#define PIN_SERVO 10

Servo myservo;
float count;

void setup() {
  Serial.begin(57600);
  myservo.attach(PIN_SERVO); 
  myservo.write(90);
  delay(1000);
}

void loop() {
  myservo.write(180);
  delay(1000);
  myservo.write(0);
  delay(1000);
}
