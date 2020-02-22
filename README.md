# Arduino-Blink
Blink LED
<iframe src=https://create.arduino.cc/editor/SCOTTY_777/25574b79-03c9-49fd-a4ee-2d2648436a58/preview?embed style="height:510px;width:100%;margin:10px 0" frameborder=0></iframe>
https://create.arduino.cc/editor/SCOTTY_777/25574b79-03c9-49fd-a4ee-2d2648436a58/preview

/*
coding attemps in C++
*/


//set up function of built in led or. 
//Use pin13, 220ohm, gnd pin.

void setup() {
  pinMode(13, OUTPUT);
  }

//setting up the loop

void loop() {
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  }
  
