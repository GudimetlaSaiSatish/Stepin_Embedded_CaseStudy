#ifndef PWM_H_INCLUDED
#define PWM_H_INCLUDED

/**
 * @brief Initializes the 16-bit Timer1 for PWM in fastPWM mode.
 * 
 */
void PWM_Init();



/**
 * @brief Changes the PWM value according to the adc value.
 * Prints the Temperature value on the serial monitor.
 * 
 * @param adc is anlog value from 0 to 1023.
 */
void PWM_write(uint16_t adc);

#endif // PWM_H_INCLUDED
