#include <avr/io.h>
#include "ADC.h"
#include "CHECK.h"
#include "LED.h"
#include "PWM.h"
#include "UART.h"

int main(void)
{
    InitADC();
    Check_Init();
    LED_Init();
    USARTInit(103);
    PWM_Init();
    uint8_t CHK1 =0, CHK2 = 0;
    uint16_t AnalogRead;

    while(1)
    {
        CHK1 = Seat_Check();
        CHK2 = Heater_Check();
        if (CHK1==1 && CHK2 ==1)
        {
            AnalogRead = ReadADC(0);
            PWM_write(AnalogRead);
            Check_Pass_LED();
        }
        else
        {
           CHECK_PASS_LED_OFF;

        }
    }


    return 0;
}
