#include <Mouse.h>

const int PIN_ANALOG_INPUT = 3; //赤をアナログの3に、オレンジをGNDに



void setup() {
  Serial.begin( 9600 );
    
}



void loop() {
  int i = analogRead( PIN_ANALOG_INPUT );
  delay( 2 );
  Serial.println( i );
}
