#include <LiquidCrystal.h> 
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

int count=9;

void setup() 
{
  lcd.begin(16, 2);
}
void loop() 
{
  lcd.setCursor(0,0);
  lcd.print("SRI ELECTRONIC & EMBEDDED SOLUTIONS");
  delay(2000);
   
  lcd.setCursor(0,1);
  lcd.print("Count:");
  
  lcd.setCursor(6,1); 
  lcd.print(count);
  count--;
  delay(100);
  
  if(count<0)
  {
    count=9;
  }  
}
