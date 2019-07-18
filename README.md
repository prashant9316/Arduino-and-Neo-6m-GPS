# Arduino-and-Neo-6m-GPS
This program is going to read the Serial output from the GPS Neo 6m and print it to the Serial Monitor
We are going to use the SoftwareSerial.h library.  
The SoftwareSerial library has been developed to allow serial communication on other digital pins of the Arduino, using software to replicate the functionality (hence the name "SoftwareSerial"). It is possible to have multiple software serial ports with speeds up to 115200 bps.    
# Schematic    
SoftwareSerial gps(4,3);// RX,TX - set according to your convenience  
Neo 6m  -->  Arduino    
1. VCC      --> Vcc(5v)  
2. TX      -->  PD4  
3. RX      -->  PD3  
4. GND     -->  GND  

# output:
This is a sample output for Neo 6m gps producing the following output
[output](https://drive.google.com/open?id=1MyI7_GhBDNheQFP5m8SxtZvERh3vW6xH)

# Understanding what does the data says:
These are standard NMEA lines:  
### $GPGGA, 040115.0,2834.42741,N,07701.76531,E,1,05,4.28,219.7,M,-40.4,M,,*78  
040115.0     -> Real Time in UTC  
2834.42741   -> latitude  -> 28 degrees  
07701.76531  -> longitude -> 077 degrees  
1            -> Fix Quality ( 0 - Invalid,
                              1 - GPS fix,
                              2 - DGPS fix)  
05           -> Number of Satellites being tracked  
4.28         -> Horizontal dilution of position  
219.7,M      -> Altitude, in meters above sea level  
-40.4,M      -> Height of Geoid(mean sea level) above WGS84 ellipsoid  
             -> empty field  
             -> empty field  
*78          -> The checksum data, always begins with *  
          
