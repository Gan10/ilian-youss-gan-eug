#include <Arduino.h>
#include "timer.h"


void automate()
{
    static int toto = 0;
    toto++;
}

void setup()
{
    set_timer4_interrupt(1,automate);
}

void loop()
{
}