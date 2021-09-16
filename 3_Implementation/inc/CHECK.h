#ifndef CHECK_H_INCLUDED
#define CHECK_H_INCLUDED


#define SEAT_CHECK_00 DDRD &= ~(1<<PD6)
#define SEAT_CHECK_01 PORTD |= (1<<PD6)
#define HEATER_CHECK_00 DDRD &= ~(1<<PD5)
#define HEATER_CHECK_01 PORTD |= (1<<PD5)
#define SEAT_TRUE !(PIND & (1<<PD6))
#define HEATER_TRUE !(PIND & (1<<PD5))

/**
*@brief This function Initialize the Pins PD6 PD5.
*/
void Check_Init();
/**
*@brief This function Checks whether the driver is seated or not.
*@return Returns a raised flag.
*Turns ON or OFF the Seat check LED.
*/
uint8_t Seat_Check();
/**
*@brief This function Checks whether the heater is turned ON or not.
*@return Returns a raised flag.
*Turns ON or OFF the Heater check LED.
*/
uint8_t Heater_Check();

#endif // CHECK_H_INCLUDED
