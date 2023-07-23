#include <DHT.h>
#include <LiquidCrystal_PCF8574.h>

#define DHT_SENSOR_PIN 4
#define DHT_SENSOR_TYPE DHT11

LiquidCrystal_PCF8574 lcd(0x27); // set the LCD address to 0x27 
DHT dht_sensor(DHT_SENSOR_PIN, DHT_SENSOR_TYPE);
  
void setup() {
  // put your setup code here, to run once:
  dht_sensor.begin(); //  initialize the DHT sensor
  lcd.home();
  
  
}

void loop() {
  // put your main code here, to run repeatedly:

    delay(2000);
    
    float humi = dht_sensor.readHumidity();
    float tempC = dht_sensor.readTemperature();

    lcd.clear();
    // check whether the reading is successful or not
    if(isnan(tempC) || isnan(humi)){
    lcd.setCursor(0,0);
    lcd.print("Failed");
    return;
    
    }
    else{
      lcd.setCursor(0,0); // display position
      lcd.print("Temp:  ");
      lcd.print(tempC); //display the temperature
      lcd.print("°C");
      
      lcd.setCursor(0,1);
      lcd.print("Humi:  ");
      lcd.print(humi);
      lcd.print("%");
     }
  
    delay(2000);  
}
