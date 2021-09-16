#include <avr/io.h>

void USARTInit(uint16_t ubrr_value)
{
    /*To set the baud rate */
    UBRR0L = ubrr_value;
    UBRR0H = (ubrr_value>>8)&0x00ff;
    UCSR0C = (1<<UMSEL00) | (1<<UCSZ01) | (1<<UCSZ00);

    /*To enable the TX & RX */
    UCSR0B = (1<<RXEN0) | (1<<TXEN0) | (1<<RXCIE0) | (1<<TXCIE0);

}


void USARTWriteCharacter(char data)
{
    while (!(UCSR0A & (1<<UDRE0)))
    {
        /*nothing*/
    }
    UDR0 = data;
}
