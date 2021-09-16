[![Code Quality - Static Code - Cppcheck](https://github.com/GudimetlaSaiSatish/Stepin_Embedded_CaseStudy/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/GudimetlaSaiSatish/Stepin_Embedded_CaseStudy/actions/workflows/cppcheck.yml)
[![Compile-Linux](https://github.com/GudimetlaSaiSatish/Stepin_Embedded_CaseStudy/actions/workflows/compile.yml/badge.svg)](https://github.com/GudimetlaSaiSatish/Stepin_Embedded_CaseStudy/actions/workflows/compile.yml)
![Code Inspector](https://www.code-inspector.com/project/28673/score/svg)
![Code Inspector](https://www.code-inspector.com/project/28673/status/svg)
![Codacy Badge](https://app.codacy.com/project/badge/Grade/48e7bd54eb0a4dcabcccdd767f74c788)](https://www.codacy.com/gh/GudimetlaSaiSatish/Stepin_Embedded_CaseStudy/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=GudimetlaSaiSatish/Stepin_Embedded_CaseStudy&amp;utm_campaign=Badge_Grade)

# Stepin_Embedded_CaseStudy
## Description
-    In this case study car seat heating system is implemented.
-    It uses the ATmega328 AVR microcontroller from ATmel.
-    Two sensing checks are done before turning on the heating system.
-    Pins PD6 and PD5 are used for Seat_check and Heat_check.
-    Seat_check gives an indication through an LED connected to the pin PD7.
-    Heat_check also provide an imdication with an LED connected to the pin PB0.
-    Both of the Check signals are required to enable the Temperature Control Kob otherwise the Knob is disabled.
-    If both the check signals are provided then the temperature control enable LED is turned ON.
-    By varying the knob the corresponding anlog signal is received at pin PC0.
-    Internal ADC (10-bit) is used to read the knob input.
-    Corresponding PWM signal is generated at the pin PB1 to vary the input to the heating element driving circuit.
-    Desired temperature is diplayed through the serial monitor provided.
-    The serial monitor uses the UART communication which initialized with 9600 baud rate.
## Simulation Diagrams
### ON condition
![ON](https://github.com/GudimetlaSaiSatish/Stepin_Embedded_CaseStudy/blob/main/2_Architecture/Final_ON.png)
### OFF condition
![OFF](https://github.com/GudimetlaSaiSatish/Stepin_Embedded_CaseStudy/blob/main/2_Architecture/Final_OFF.png)
