#define BUTTON_PIN 32

int lastState = HIGH;
int currentState;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  currentState = digitalRead(BUTTON_PIN);

  if(lastState == LOW && currentState == HIGH)
    Serial.println("The state changed from LOW to HIGH");
  else if (lastState ==HIGH && currentState == LOW)
    Serial.println("The state changed fomr HIGH to LOW");

  lastState = currentState;
}
