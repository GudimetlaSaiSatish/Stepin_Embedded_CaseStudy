# TEST PLAN:

## Table 1: Low level test plan

| **Test ID** | **Description**                                              | **Exp I/P**   | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|-------------- |-------------|----------------|------------------|
|  L_01       |Check for driver seating status.                              |Seat check Switch ON|Seat check LED on | PASS          |Requirement based |
|  L_02       |Check for driver seating status.                              |Seat check Switch OFF|Seat check LED OFF | PASS          |Requirement based |
|  L_03       |Check for heater status.                                      |Heater switch ON|Heat check LED ON | PASS          |Requirement based |
|  L_04       |Check for heater status.                                      |Heater switch OFF|Heat check LED OFF | PASS          |Requirement based |



## Table 2: High level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Temperature control with Knob.                                |Both Seat Check and Heat Check switches are ON |Show the Temperature | PASS         |Requirement based |
|  H_02       | Can't control Temperature  with Knob.                                |Any of Seat Check and Heat Check switches are OFF |Show Nothing| PASS          |Requirement based |
|  H_03       | Can't control Temperature  with Knob.                                |Both of Seat Check and Heat Check switches are OFF |Show Nothing| PASS          |Requirement based |