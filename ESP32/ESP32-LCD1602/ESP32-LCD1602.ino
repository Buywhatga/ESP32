#include <LiquidCrystal_PCF8574.h>
#include <Wire.h>

LiquidCrystal_PCF8574 lcd(0x27); 
// set the LCD address to 0x27 

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2); // I2C address 0x27, 16 colum and 2 rows
}

void loop() {
  // put your main code here, to run repeatedly:
    lcd.setBacklight(255);
    lcd.home();
    lcd.clear();  // clear display
    lcd.setCursor(0, 0);  // move cursor to (0,0)
    lcd.print("HELLO WORLD!!!");  //print message to  (0,0)
    lcd.setCursor(5, 1);
    lcd.print("Hello");
    delay(200); // display the above for 0.2 seconds
}
