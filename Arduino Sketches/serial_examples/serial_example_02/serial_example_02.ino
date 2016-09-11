/*
* SerialReceive sketch
* Blink the LED at a rate proportional to the received digit value
*/
const int ledPin = 13; // pin the LED is connected to
int blinkRate = 0; // blink rate stored in this variable
void setup()
{
Serial.begin(9600); // Initialize serial port to send and receive at 9600 baud
pinMode(ledPin, OUTPUT); // set this pin as output
}
int value;
void loop()
{
if( Serial.available())
{
char ch = Serial.read();
if( isDigit(ch) )// is this an ascii digit between 0 and 9?
{
value = (value * 10) + (ch - '0'); // yes, accumulate the value
}
else if (ch == 10) // is the character the newline character?
{
blinkRate = value; // set blinkrate to the accumulated value
Serial.println(blinkRate);
value = 0; // reset val to 0 ready for the next sequence of digits
}
}
blink();
}
void blink()
{
digitalWrite(ledPin,HIGH);
delay(blinkRate); // delay depends on blinkrate value
digitalWrite(ledPin,LOW);
delay(blinkRate);
}
