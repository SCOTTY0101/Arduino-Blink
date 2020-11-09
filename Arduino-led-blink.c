//Set up function of built in LED 

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  }
//Set up the blink loop and time delay.

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}

