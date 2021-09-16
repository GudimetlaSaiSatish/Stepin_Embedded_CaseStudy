#ifndef UART_H_INCLUDED
#define UART_H_INCLUDED

/**
*@brief Initializes the USART communication.
*@param Input is the Baud Rate.
*/
void USARTInit(uint16_t ubrr_value);

/**
*@brief Prints the Data onto Serial monitor.
*@param Input is a Character.
*/
void USARTWriteCharacter(char data);
#endif // UART_H_INCLUDED
