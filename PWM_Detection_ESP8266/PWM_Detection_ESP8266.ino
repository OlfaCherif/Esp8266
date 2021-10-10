

// Ultrasounds detection with ESP8266 only

#define powerpin 0
#define Ultrasounds_pin A0
#define LED 2
double receiver;
boolean detection;


void setup() {
// put your setup code here, to run once:

Serial.begin(9600);

pinMode(powerpin, OUTPUT);
pinMode(Ultrasounds_pin,INPUT);
pinMode(LED,OUTPUT);

}

void power_transducer ()
{
//PWM signal 0.16MHz
digitalWrite(powerpin,HIGH);
delayMicroseconds(3);
// 3V 
digitalWrite(powerpin,LOW);
delayMicroseconds(3);
// 0V 
}

boolean ultrasound_detection()
{
receiver=analogRead(Ultrasounds_pin);
Serial.println(receiver);
if ( receiver>1000 ) // Ultrasounds detection
return true;
else
return false;
  
}

void loop() {

power_transducer();
detection=ultrasound_detection();
if (detection==true)
digitalWrite(detection,HIGH); // if there's a detection of ultrasounds open the led of the esp8266

}
