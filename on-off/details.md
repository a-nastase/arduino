# DETAILS

## materials

For this mini project I used 

* Arduino UNO
* 2 x 100 ohm resistors
* 3 x 10 ohm resistors
* 1 x 5mm LED

## 5mm LED specifications

* 2V forward voltage
* I = 20mA

## calculations

R = U/I = 1.3 / 0.02 = 65 ohms

Since I only had 100 and 10 ohm resistors, I decided to use

2 x 100 in parall el -> 50 ohms
1 x 10 -> 10 ohms
2 x 10 in parallel -> 5 ohms

=> putting those in series gives a total of 65 ohms, exactly what I need

## wiring

GPIO2 -> RESISTOR GROUP -> LED -> GND