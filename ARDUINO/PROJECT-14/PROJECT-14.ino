const int A =2;
const int B =3;
const int C =4;
const int D =5;
const int E =6;
const int F =7;
const int G =8;
const int DP =9;

void setup() {
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(DP,OUTPUT);

}

void loop() {
//  one();
 two();
//  three();
//  four();

 delay(1000);
 five();
//  six();
//  seven();
//  eight();
//  nine();
 delay(1000);

}
void two(){
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,HIGH);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,HIGH);
  digitalWrite(G,LOW);
  digitalWrite(DP,HIGH);
}
void five(){
  digitalWrite(A,LOW);
  digitalWrite(B,HIGH);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);
  digitalWrite(E,HIGH);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
  digitalWrite(DP,HIGH);
}