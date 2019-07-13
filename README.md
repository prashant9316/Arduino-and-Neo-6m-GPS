# Arduino-and-Neo-6m-GPS
This program is going to read the Serial output from the GPS Neo 6m and print it to the Serial Monitor
We are going to use the SoftwareSerial.h library.  
The SoftwareSerial library has been developed to allow serial communication on other digital pins of the Arduino, using software to replicate the functionality (hence the name "SoftwareSerial"). It is possible to have multiple software serial ports with speeds up to 115200 bps.  
# Schematic  
SoftwareSerial gps(4,3);// RX,TX - set according to your convenience
Neo 6m  -->  Arduino  
VCC      --> Vcc(5v)
TX      -->  PD4
RX      -->  PD3
GND     -->  GND

