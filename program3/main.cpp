#include "mbed.h"


DigitalOut redLED(LED_RED);
DigitalOut greenLED(LED_GREEN);

void Led(DigitalOut& ledpin, int n);

int main()
{
   redLED = 1;
   greenLED = 1;
   while (true) {
       Led(redLED, 6);
       Led(greenLED, 4);
   }
}