
const int ledPin = 13;
const int motionSensorPin = 2;

void setup() {
  // set the LED pin as an output
  pinMode(ledPin, OUTPUT);
  // set the motion sensor pin as an input
  pinMode(motionSensorPin, INPUT);
   Serial.begin(9600);
 
}

void loop() {
  // read the state of the motion sensor
  int motionSensorState = digitalRead(motionSensorPin);
  
  // if motion is detected, turn on the LED
  if (motionSensorState == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Motion detected!");
  } else {
    digitalWrite(ledPin, LOW);
  }
  
  delay(1000);
}
