LED blink using PIN 13 (connect positive side of led), 220 ohm resistor (stops led from overloading and burning out!!!), GND.

//Set up function of LED pin 13.

int led = 13;
void setup() {
  pinMode(13, OUTPUT);
  }
  
//Set up LED on pin 13, with loop and delay.

void loop() {
  digitalWrite(13, HIGH);
  dealy(1000);
  digitalWrite(13, LOW);
  delay(1000);
  }
