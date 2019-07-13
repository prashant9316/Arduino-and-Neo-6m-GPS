
 
#include <SoftwareSerial.h>

// The serial connection to the GPS module
SoftwareSerial gps(4, 3);

void setup(){
  Serial.begin(9600);
  gps.begin(9600);
}

void loop(){
  while (gpss.available() > 0){
    // get the byte data from the GPS
    byte gpsData = gps.read();
    Serial.write(gpsData);
  }
}
