#include<LiquidCrystal.h>
LiquidCrystal MyLCD(12,11,5,4,3,2);
void setup() {
  MyLCD.begin(16,2);
  MyLCD.home();
  MyLCD.print("      HELLO    ");
  MyLCD.setCursor(0,1);
  MyLCD.print("      RPB     ");

  

}

void loop() {
  // put your main code here, to run repeatedly:

}
