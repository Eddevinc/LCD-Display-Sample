#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11 , 12);

void setup() { 
  lcd.setCursor(0,1);
}

void loop() {
  //int sensorValue = analogRead(A0);

  
  //int sensorValue = 250;
  
  for(; i<999; i++)
  {
    lcd.print(i);
  }
  
}
