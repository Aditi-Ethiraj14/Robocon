#include <Servo.h>

Servo myServo;

int potPin = A0; 
int servoPin = 9;
int potValue;
int angle;

void setup() {
  Serial.begin(9600);
  myServo.attach(servoPin);
}

void loop() {
  potValue = analogRead(potPin);           
  angle = map(potValue, 0, 1023, 0, 180);  
  myServo.write(angle);                    

  Serial.print("Potentiometer: ");
  Serial.print(potValue);
  Serial.print("  Servo Angle: ");
  Serial.println(angle);

  delay(15);
}
