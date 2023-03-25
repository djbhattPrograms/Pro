const int BUTTON1=2;
const int LED1=3;
const int BUTTON2=4;
const int LED2=5;
int BUTTONState1=0;
int BUTTONState2=0;

void setup(){
  pinMode(LED1,OUTPUT);
  pinMode(BUTTON1,INPUT);
  pinMode(LED2,OUTPUT);
  pinMode(BUTTON2,INPUT);

}

void loop() {
  BUTTONState1=digitalRead(BUTTON1);
  if(BUTTONState1==HIGH){
    digitalWrite(LED1,HIGH);
  }
  else{
    digitalWrite(LED1,LOW);
   
  }
  BUTTONState2=digitalRead(BUTTON2);
    if(BUTTONState2==HIGH){
    digitalWrite(LED2,LOW);
  }
  else{
    
    digitalWrite(LED2,HIGH);
   
  }
 

}
