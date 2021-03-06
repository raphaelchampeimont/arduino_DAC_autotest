# arduino_DAC_autotest

This mini-project demonstrates the use of a resistor ladder (https://en.wikipedia.org/wiki/Resistor_ladder) as a DAC (Digital to Analog Converter).

The program works this way: It increments a byte from 0 to 255. For each value, it sends each of the 8 bits on the output pins. Then this output is converted to an analogical value using the resistor ladder, and is read on analogical input A0 of the Arduino. The program displays on the serial monitor the original value sent to the ladder on digital pins and the mesured analog value at the output of the resistor ladder (DAC). This which allows to test the DAC and get an idea of its accuracy (which seems quite good in my tests).

[You can see an example of output here](example_of_output.txt)

Once it reaches 255, you can re-play it by resetting the Arduino.

The circuit, implemented with 1Kohm resistors (you can of course use 2Kohm resistors instead of the 1K resistors in series but I didn't have any). The green wire is connected to A0.
![Circuit](/images/circuit.jpg?raw=true)

![Schematic](/images/schematic.png?raw=true)
