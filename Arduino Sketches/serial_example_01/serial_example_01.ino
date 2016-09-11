void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}
int number = 0;
void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("My name is Paul");
  Serial.print("p has an ASCII value of: ");
  Serial.println('p',DEC);
  Serial.print("a has an ASCII value of: ");
  Serial.println('a',DEC);
  Serial.print("u has an ASCII value of: ");
  Serial.println('u',DEC);
  Serial.print("l has an ASCII value of: ");
  Serial.println('l',DEC);
  Serial.print("My name is: ");
  char p = 112; char a = 97; char u = 117; char l = 108;
  Serial.print(p);
  Serial.print(a);
  Serial.print(u);
  Serial.print(l);
  Serial.end();
  
}
