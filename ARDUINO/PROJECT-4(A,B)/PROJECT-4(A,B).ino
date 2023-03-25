const int analog_ip=A0;
const int LED1=3;
const int LED2=5;
int inputVal=0;
void setup() {
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  Serial.begin(9600);
  

}

void loop() {
  // storing the analog_input in the input_value
  int reverseInputVal=1023-inputVal;
  inputVal=analogRead(analog_ip);
  Serial.println(inputVal);
  analogWrite(LED1,inputVal/4);
  analogWrite(LED2,reverseInputVal/4);
  delay(500);
 

}
