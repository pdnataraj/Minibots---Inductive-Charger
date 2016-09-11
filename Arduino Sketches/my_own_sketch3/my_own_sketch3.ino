int ledPins[] = {2,3,4,5,6,7,8,9};

void setup() {
  // put your setup code here, to run once:
for(int index = 0; index <= 7; index++)
{
  pinMode(ledPins[index], OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
  int delaytime = 50;
  
  for (int index = 0; index <= 7; index++)
  {
   digitalWrite(ledPins[index],HIGH); 
   delay(delaytime);
  }

  for (int index = 7; index >= 0; index--)
  {
    digitalWrite(ledPins[index],LOW);
    delay(delaytime);
  }
  
}
