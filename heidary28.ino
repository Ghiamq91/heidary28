void setup() {
 Serial.begin(9600);

}

void loop() {
  int sensorvalue=analogRead(A0);
  float voltage=sensorvalue*(5.0/1023.0);
  Serial.println(voltage);
  

}
