#include <ezButton.h>

#define BUTTON_PIN 34
#define LED_PIN 32

ezButton button(BUTTON_PIN);

int led_state = LOW;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  button.setDebounceTime(50);
  
}

void loop() {
  // put your main code here, to run repeatedly:

 button.loop();

  if (button.isPressed()){
    Serial.println("The button is pressed");

    led_state = !led_state; 
    //-> if(led_state == LOW)
    //      led_state = HIGH;
    //   else
    //      led_state = LOW;
    
    digitalWrite(LED_PIN, led_state);
  }
}
