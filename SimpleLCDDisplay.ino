#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11 , 12);

void setup() { 
  lcd.begin(16, 2);
  lcd.setCursor(0,1);
  lcd.write("Number: ");
}

void loop() {
  //No connected sensor to test analogRead(A0)
  //int sensorValue = analogRead(A0);
  
  

  
  //int sensorValue = 250;
  
  int i = 0;
  for(; i<999; i++)
  {
    lcd.setCursor(9,1);
    lcd.print(i);
    delay(100);
  }
  
}

//tested works final commit done