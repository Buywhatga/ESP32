#define BUTTON_PIN 34
#define LED_PIN 32


int button_state;
int led_state = LOW;
int last_button_state;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  button_state = digitalRead(BUTTON_PIN);
}

void loop() {
  // put your main code here, to run repeatedly:
  last_button_state = button_state;
  button_state = digitalRead(BUTTON_PIN);

  if (last_button_state == HIGH && button_state == LOW){
    Serial.println("The button is pressed");

    led_state = !led_state;
    
    digitalWrite(LED_PIN, led_state);
  }
}
