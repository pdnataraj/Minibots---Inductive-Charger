int intValue = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print('H');
  
      intValue = 8;
      Serial.println(lowByte(intValue));
      Serial.println(highByte(intValue));
      Serial.println('E');
      Serial.end();
    }
