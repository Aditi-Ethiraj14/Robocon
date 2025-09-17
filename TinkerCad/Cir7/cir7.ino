int potPin = A0;
int ledPin = 9;
int potValue;
int brightness;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  potValue = analogRead(potPin);             
  brightness = map(potValue, 0, 1023, 0, 255);  
  analogWrite(ledPin, brightness);             

  Serial.print("Potentiometer: ");
  Serial.print(potValue);
  Serial.print("  LED Brightness: ");
  Serial.println(brightness);

  delay(15);
}