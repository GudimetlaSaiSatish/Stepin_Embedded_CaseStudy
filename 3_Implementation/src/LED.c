#include <avr/io.h>
#include "LED.h"


void LED_Init()
{
    SET_SEAT_LED;
    SET_HEATER_LED;
    SET_CHECK_PASS_LED;
}


void Seat_LED()
{
    SEAT_LED_ON;
}


void Heater_LED()
{
    HEATER_LED_ON;
}


void Check_Pass_LED()
{
    CHECK_PASS_LED_ON;
}
