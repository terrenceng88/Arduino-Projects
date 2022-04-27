void setup() { //only runs initially at the beginning
  // put your setup code here, to run once:
  pinMode (13, OUTPUT); //configures pin #13 as an output)
}

void loop() { //runs continuously after setup
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH); //(pin #, value written to the pin)
  delay(1000); //in miliseconds (1 second = 1000 ms)
  digitalWrite(13, LOW);
  delay(1000);
}
