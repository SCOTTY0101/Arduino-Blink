//Set up function with built in Arduino LED or select your own output pin.

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  }
//Set up the blink loop and time delay.
// LED delays on for 1 second then off for 1 second.

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}

