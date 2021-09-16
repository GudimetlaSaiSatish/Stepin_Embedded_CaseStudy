#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "UART.h"


void PWM_Init()
{
    TCCR1A |= (1<<COM1A1) | (1<<WGM11) |(1<<WGM10);
    TCCR1B |= (1<<WGM12) | (1<<CS11)|(1<<CS10);
    DDRB |= (1<<PB1);
}

void PWM_write(uint16_t adc)
{

    uint8_t i;
    char temperature[10];
    OCR1A = adc;
    if (OCR1A <= 210)
        {
            temperature[0] = '2';
            temperature[1] = '0';
            temperature[2] = 176;
            temperature[3] = 'C';
            temperature[4] = ' ';
            temperature[5] = '\0';
            for(i=0;i<=5;i++)
                USARTWriteCharacter(temperature[i]);
        }
        else if (OCR1A >= 210 && OCR1A <= 510)
        {
            temperature[0] = '2';
            temperature[1] = '5';
            temperature[2] = 176;
            temperature[3] = 'C';
            temperature[4] = ' ';
            temperature[5] = '\0';
            for(i=0;i<=5;i++)
                USARTWriteCharacter(temperature[i]);
        }
        else if (OCR1A >= 510 && OCR1A <= 710)
        {
            temperature[0] = '2';
            temperature[1] = '9';
            temperature[2] = 176;
            temperature[3] = 'C';
            temperature[4] = ' ';
            temperature[5] = '\0';
            for(i=0;i<=5;i++)
                USARTWriteCharacter(temperature[i]);
        }
        else
        {
            temperature[0] = '3';
            temperature[1] = '3';
            temperature[2] = 176;
            temperature[3] = 'C';
            temperature[4] = ' ';
            temperature[5] = '\0';
            for(i=0;i<=5;i++)
                USARTWriteCharacter(temperature[i]);
        }
        _delay_ms(10);
}
