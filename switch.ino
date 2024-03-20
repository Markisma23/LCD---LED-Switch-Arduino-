#include <Wire.h>
#include <hd44780.h>
#include <hd44780ioClass/hd44780_I2Cexp.h>
hd44780_I2Cexp lcd(0x20, I2Cexp_MCP23008,7,6,5,4,3,2,1,HIGH);
int LED = 13;
void setup() {
 lcd.begin(16,2);
 pinMode(LED,OUTPUT);
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("LED IS ON");
  digitalWrite(LED,HIGH);
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,1);
  lcd.print("LED IS OFF");
  digitalWrite(LED,LOW);
  delay(1000);
  lcd.clear();
  
  
}
