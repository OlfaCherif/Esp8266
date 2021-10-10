//Connect HC-05 with ESP8266

void setup() {
  char msg;
  pinMode(2,OUTPUT);
  Serial.begin(9600);
}

void loop() {


 if (Serial.available())
 {
  msg=Serial.read();

  if (msg=="blink")
  {
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,HIGH);
  }
  
  
 }

}
