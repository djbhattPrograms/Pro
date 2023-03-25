const int LED_ao1=3;
const int LED_ao2=5;
void setup() {
  pinMode(LED_ao1,OUTPUT);
  pinMode(LED_ao2,OUTPUT);

}

void loop() {
  for(int brightness=1;brightness<=255;brightness++){
    analogWrite(LED_ao1,brightness);
    delay(10);
  }
    for(int brightness=255;brightness>=0;brightness--){
    analogWrite(LED_ao2,brightness);
    delay(10);
  }
    for(int brightness=1;brightness<=255;brightness++){
    analogWrite(LED_ao1,brightness);
    delay(10);
  }
    for(int brightness=255;brightness>=0;brightness--){
    analogWrite(LED_ao2,brightness);
    delay(10);
  }



  // digitalWrite(LED1,HIGH);
  // digitalWrite(LED2,LOW);
  // delay(1000);
  // digitalWrite(LED2,HIGH);
  // digitalWrite(LED1,LOW);
  // delay(1000);
  



}
