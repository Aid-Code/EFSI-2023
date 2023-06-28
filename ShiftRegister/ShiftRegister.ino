#include <ShiftRegister74HC595.h>

#define LEDS 8

//latchPin = 8;
//clockPin = 12;
//dataPin = 11;

ShiftRegister74HC595<1> sr(11, 12, 8);  //// 


void setup() 
{
  
}

void loop() 
{
  sr.setAllHigh();
  delay(500);
  sr.setAllLow();
  delay(500);

  for (int i = 0; i < LEDS; i++) 
  {
    sr.set(i, HIGH);
    delay(250); 
  }
}
