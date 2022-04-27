/*
   CSE 123A Group 8: Social Distancers
   Author: Terrence Ng
   Description: Testing Serial functoinality for arduino and
                seeing if it can accept values from the UWB module
   Date: 4/25/2022
*/

/*----------------------------
   Pin Configuration
   Initiator UWB TX pin to Arduino RX pin
*/

#include <SoftwareSerial.h>

//add aditional RX and TX pins
SoftwareSerial mySerial(7,8); //RX = 7, TX = 8)

void setup() {
  Serial.begin(115200); //set up serial object with baudrate

  mySerial.begin(115200); //set up artificial serial ports
  //Serial.println("soft UART test");
}

void loop() {
  if (Serial.available() > 0) { //wait to receive input

    //read input
    String output = Serial.readString(); //

    //Serial.println(output); //echo output from 
    Serial.println(output);
  }
}
