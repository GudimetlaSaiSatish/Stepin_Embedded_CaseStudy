#ifndef ADC_H_INCLUDED
#define ADC_H_INCLUDED

/**
*@brief This Function Initializes the Internal ADC.
*/
void InitADC();


/**
*@brief This function Enables the channel for operating ADC.
*@param Input is a Channel number  between 0-6.
*@return Returns the ADC value of 10-bit resolution.
*/
uint16_t ReadADC(uint8_t ch);

#endif // ADC_H_INCLUDED
