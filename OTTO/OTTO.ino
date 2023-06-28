#include <Servo.h>

#define CALIBRACION 10

Servo servoDer;
Servo servoIzq;

void setup() 
{
  Serial.begin(9600);

 servoDer.attach(5);
 servoIzq.attach(3);

 servoDer.write(CALIBRACION);
 servoIzq.write(CALIBRACION);
}

void loop() 
{
  servoDer.write(CALIBRACION + 90);
  servoIzq.write(CALIBRACION + 90);
}
