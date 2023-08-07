# STM32F4 Discovery MCU Projects
A testing ground for experimenting with the different capabilities of the STM32F4 Discovery board. 
Each project aims to achieve simple goals with different technologies or protocols to aid my own learning.

### [01.](LED01) LED 
Get an LED to turn on and off
1) Get a button press to turn the LED on and off using interrupts.
2) Introduce a delay to debounce the button in software.

### [02.](Thermo13) Thermo 13 Click Board
Use I2C to communicate with the temperature sensor
1) Read the datasheet of the BH1900NUX.
2) Set up I2C with information on addresses and registers from the datasheet.
3) Read a temperature and print it to the terminal.
4) Investigate ways to poll the sensor reliably.
