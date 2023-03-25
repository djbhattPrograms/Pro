 const int RED=11;
 const int GREEN=10;
 const int BLUE=9;

 void setup() {
   pinMode(RED,OUTPUT);
   pinMode(GREEN,OUTPUT);
   pinMode(BLUE,OUTPUT);
 

}

void loop() {
  analogWrite(RED,230);
  analogWrite(GREEN,230);
  analogWrite(BLUE,250);
  delay(1000);
  analogWrite(RED,100);
  analogWrite(GREEN,100);
  analogWrite(BLUE,100);
  delay(1000);  

}
