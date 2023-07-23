void setup() {
  // initialize digital pin GIOP18 as an output.
  pinMode(32, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(32, HIGH); // turn the LED on
  delay(500);             // wait for 500 milliseconds
  digitalWrite(32, LOW);  // turn the LED off
  delay(500);             // wait for 500 milliseconds
}
