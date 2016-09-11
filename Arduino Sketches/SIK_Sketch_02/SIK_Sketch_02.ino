int ledPin = 12;
int sensorPin = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(sensorPin);
  digitalWrite(ledPin,HIGH);
  delay(sensorValue);
  digitalWrite(ledPin,LOW);
  delay(sensorValue);
  
  

}
