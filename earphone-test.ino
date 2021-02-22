#include <Mouse.h>

const int PIN_ANALOG_INPUT = 3; //イヤホンの赤(L)をアナログの3に、オレンジ(GND)をGNDに



void setup() {
  Serial.begin( 9600 );
    
}



void loop() {
  int i = analogRead( PIN_ANALOG_INPUT );
  delay( 2 );
  Serial.println( i );
}
