# arduino_DAC_autotest
Tests a DAC based on a resistor ladder

This mini-project demonstrates the use of a resistor ladder (https://en.wikipedia.org/wiki/Resistor_ladder) as a DAC (Digital to Analog Converter).

The program works this way: It increments a byte from 0 to 255. For each value, it sends each of the 8 bits on the output pins. Then this output is converted to an analogical value using a the resistor ladder, and is read on analogical input A0 of the Arduino. The program displays the original value sent to the ladder as digital biots and the mesurd analogical value on the serial monitor. This which allows to test the DAC and get an idea of its accuracy (which seems quite good in my tests).

Once it reaches 255, you can re-play it by resetting the Arduino.

The circuit, implemented with 1Kohm resistors. The green wire is connected to A0.
![Circuit](/images/circuit.jpg?raw=true)
