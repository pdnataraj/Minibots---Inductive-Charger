const int button1Pin = 2;
const int button2Pin = 3;
const int ledPin = 13;
void setup() {
  // put your setup code here, to run once:
pinMode(button1Pin,INPUT);
pinMode(button2Pin, INPUT);

pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int button1State = digitalRead(button1Pin);
  int button2State = digitalRead(button2Pin);

  if ((button1State == HIGH) && (button2State == HIGH))
  {
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin,LOW);
    delay(1000); 
  }
  else
  {
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin,LOW);
    delay(100);  
  }

}
