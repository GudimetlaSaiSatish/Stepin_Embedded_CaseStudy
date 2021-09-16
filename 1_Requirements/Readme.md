# Requirements
## Introduction
- Heated seats are often thought of as a luxury item and are most often included in high-end cars. The actual technology behind heated seats, however, is no different than that used in electric blankets, hair dryers, water heaters and anything else that uses electricity to produce heat.
-  In this project some operations of car temperature are implemented.
## Research
[research topics](https://www.bockmansautocare.com/how-do-heated-seats-work/)--source

## Features and Benefits of project
 - Rapid heating and maintaining optimal temperature in the vehicle compartment over time.
 - Easy installation (systems are both external-capes and covers, and internal-built-in heating elements). The first ones are simply fixed on top of the chair with the help of special fasteners, the installation of the second is more difficult, since they need to be fixed under the upholstery, but still it does not take a lot of time.
# Benefits
- Protection against hypothermia. This is one of the main tasks of heated seats. Sitting in the cold is not the best health condition, especially in winter, when the temperature is very low outside, you need to warm up quickly in the car so as not to catch a cold and get sick.
- Back warming is also very useful in certain diseases, for example, sciatica. For drivers with such problems, the use of heating can be shown even in the warm season.

## Defining Our System
### Architecture
-This project is capable of performing following functions :- 
- Enable the heating only when driver is seated.
- Heater power can be controlled by using switches.
- User can control the temperature by the knob provided.
- Can display the current temperature through serial monitor through UART communication.
   
## SWOT ANALYSIS
### Strenghts 
- Effective temperature control.
- Improves the comfort.
- Accurate temperature control is possible.
- Less power and time consumption.
### Weaknesses
- User can't resolve himself if problem occures.
- Requires skilled person to diagnose the problem.
### Opportunities
- Can be adopted for wider range of automobiles.
- Can be used for domestic and industrial needds also.
- Can be implemented in furnitures.
### Threats
- Competetion from others.
- Malfunctions of the product.    
# 4W&#39;s and 1&#39;H

## Who:
- Automobile and Domestic furnitures.

## What:
- In modern cars, a function such as seat heating is often already included in the standard factory equipment. If it is not, then the drivers install the heating system on their own. This is one of the elements that is necessary to increase the comfort level of operating vehicles in the cold season. With heating in the winter, you do not have to wait long and warm up the interior, as the seats become warm in a matter of minutes. It is very convenient, therefore such systems are very popular among our drivers.
## When:
- Even in modren era of computer technology there is need for a tool in Man-Machine communication. We know that machines only understand binary language but a man might not and vice-versa.
- Better understanding of machines is possible only when we can understand the machine language. This Binary conversion tool has the scope in such cases.

## Where:
- Automobiles, Domestic, Industrial and Commercial purposes.

## How:
- Provided the required inputs the temperature can be controlled using the Knob provided.
# Detail requirements
## High Level Requirements:

| ID   | Description                                                                                       | Category  | Status |
|------|---------------------------------------------------------------------------------------------------|-----------|--------|
| HR01 | User should be able to chnage the temperature.                                                    | Technical | Done |
| HR02 | User should be seated.                                                                            | Technical | Done |
| HR03 | User should turn ON the Heater.                                                                   | Technical | Done |
| HR04 | User should be able see the temperature.                                                          | Technical | Done |


##  Low level Requirements:
| ID   | Description                                                                                                                                                                                                              | HLR ID     | Status (Implemented/Future) |
|------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|------------|-----------------------------|
| LR01 | User should use Knob is provided to change the temperature. | HR01       | Done                     |
| LR02 | User can see the LED indication to check for seated or not.    | HR02       | Done                     |
| LR03 | User can find the LED indication of heater status.  | HR03       | Done                      |
| LR04 | User can see the temperature through serial monitor.  | HR04       | Done                      |

