#include<SoftwareSerial.h>
SoftwareSerial portTwo(7, 8);  //SRX = 7, STX = 8

String str;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  portTwo.begin(9600);
}

void loop() 
{
  Serial.println("Testing from serial port2");
  portTwo.println("Testing from serial port2");
  delay(2000);
}
