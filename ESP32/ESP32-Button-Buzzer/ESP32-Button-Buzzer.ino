/*
 * This ESP32 code is created by esp32io.com
 *
 * This ESP32 code is released in the public domain
 *
 * For more detail (instruction and wiring diagram), visit https://esp32io.com/tutorials/esp32-button-piezo-buzzer
 */

#define BUTTON_PIN 34 // ESP32 GIOP16 pin connected to button's pin
#define BUZZER_PIN 32 // ESP32 GIOP21 pin connected to Buzzer's pin

void setup() {
  Serial.begin(9600);                // initialize serial
  pinMode(BUTTON_PIN, INPUT_PULLUP); // set ESP32 pin to input pull-up mode
  pinMode(BUZZER_PIN, OUTPUT);       // set ESP32 pin to output mode
}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN); // read new state

  if (buttonState == HIGH) {
    Serial.println("The button is being pressed");
    digitalWrite(BUZZER_PIN, LOW); // turn on
  }
  else
  if (buttonState == LOW) {
    Serial.println("The button is unpressed");
    digitalWrite(BUZZER_PIN, HIGH);  // turn off
  }
}
