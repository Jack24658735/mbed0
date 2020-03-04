#include "mbed.h"

void Led(DigitalOut& ledpin, int n)
{
   for(int i = 0; i < n; ++i) { //blink for n times
       ledpin = !ledpin; // toggle led
       wait(0.2f);
   }
}