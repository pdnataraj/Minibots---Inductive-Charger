int datapin = 2;
int clockpin = 3
int latchpin = 4;

byte data = 0;

void setup() {
  // put your setup code here, to run once:

  pinMode(datapin, OUTPUT);
  pinMode(clockpin, OUTPUT);
  pinMode(latchpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bitWrite(data, 0, HIGH); 
  shiftOut(datapin, clockpin,
}
