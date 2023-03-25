int analog_ip=A0;
int inputVal=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  inputVal=analogRead(analog_ip);
  Serial.print("Input Value: ");
  Serial.print(inputVal);
  Serial.print("\n");
  delay(500);


}
