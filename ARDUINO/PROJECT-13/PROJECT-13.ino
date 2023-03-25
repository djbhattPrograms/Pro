const int buzzer=3;
void setup() {
  pinMode(buzzer,OUTPUT);



}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(buzzer,HIGH);
  delay(1000);
  digitalWrite(buzzer,HIGH);
  delay(1000);

}
