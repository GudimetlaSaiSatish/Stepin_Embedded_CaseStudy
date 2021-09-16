#include <avr/io.h>
#include "LED.h"
#include "CHECK.h"

void Check_Init()
{
    SEAT_CHECK_00;
    SEAT_CHECK_01;
    HEATER_CHECK_00;
    HEATER_CHECK_01;
}



uint8_t Seat_Check()
{
    uint8_t KEY1 = 0;
    if (SEAT_TRUE)
    {
        Seat_LED();
        KEY1 = 1;
        return KEY1;
    }
    else
    {
        SEAT_LED_OFF;
        KEY1 = 0;
        return KEY1;
    }
}


uint8_t Heater_Check()
{
    uint8_t KEY2 = 0;
    if (HEATER_TRUE)
    {
        Heater_LED();
        KEY2 = 1;
        return KEY2;
    }
    else
    {
        HEATER_LED_OFF;
        KEY2 = 0;
        return KEY2;
    }
}
