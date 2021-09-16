#ifndef LED_H_INCLUDED
#define LED_H_INCLUDED

#define SET_SEAT_LED DDRD |= (1<<PD7)
#define SET_HEATER_LED DDRB |= (1<<PB0)
#define SET_CHECK_PASS_LED DDRC |= (1<<PC2)

#define SEAT_LED_ON PORTD |= (1<<PD7)
#define SEAT_LED_OFF PORTD &= ~(1<<PD7)

#define HEATER_LED_ON PORTB |= (1<<PB0)
#define HEATER_LED_OFF PORTB &= ~(1<<PB0)

#define CHECK_PASS_LED_ON PORTC |= (1<<PC2)
#define CHECK_PASS_LED_OFF PORTC &= ~(1<<PC2)

/**
*@brief This function Initialize the Pins PD7 PB0 PC2 as led pins.
*/
void LED_Init();

/**
*@brief Turns on Seat Check LED.
*/
void Seat_LED();
/**
*@brief Turns on Heater Check LED.
*/
void Heater_LED();

/**
*@brief Turns on Check Pass LED.
*/
void Check_Pass_LED();

#endif // LED_H_INCLUDED
