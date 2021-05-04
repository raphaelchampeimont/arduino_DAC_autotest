# arduino_DAC_autotest
Tests a DAC based on a resistor ladder

This mini-project demonstrates the usage of a resistor ladder (https://en.wikipedia.org/wiki/Resistor_ladder) as a DAC (Digital to Analogical Converter).

It works this way: It increments a byte from to 255. For each value, it sends each of the 8 bits on an output pins. Then this output is converted to an analogical value using a simple resistor ladder, and is read on analogical input A0 of the arduino. The program displays the original value and the actual result on the serial monitor, which allows to test the DAC.

Once it reaches 255, you can re-play it by resetting the Arduino.
