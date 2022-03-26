/*
*LED blink using PIN 13 (connect positive side of led), 220 ohm resistor (stops led from overloading and burning out!!!), GND.
*/


//Set up function of LED pin 13.
//int:  Integers are whole numbers in the C language.

int led = 13;
  void setup() {
    pinMode(13, OUTPUT);
  }
  
//Set up LED on pin 13, with loop and delay.
//HIGH pulls the volatage high and LOW drops/zeros out the voltage. 1000ms equals to 1 second. 
// C language write to the hardware.

void loop() {
  digitalWrite(13, HIGH);
    dealy(1000);          
  digitalWrite(13, LOW);
    delay(1000);
  }
