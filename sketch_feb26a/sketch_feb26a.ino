#include <SoftwareSerial.h>

SoftwareSerial mySerial(9,10);

void setup()
{
  mySerial.begin(9600);               // the GPRS baud rate   
  Serial.begin(9600);     mySerial.println("AT+CMGR=1M");                // the GPRS baud rate   
}

void loop()
{
  if (mySerial.available())
    Serial.write(mySerial.read());
  

}
