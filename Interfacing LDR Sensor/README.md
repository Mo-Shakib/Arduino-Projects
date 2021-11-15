# Light detection with LDR Sensor
### Componet list:
- Arduino Uno
- LDR Sensor
- Resistor 
- LEDs
- Breadboard
- Jumper wires

#### Circuit diagram:
<img src="https://github.com/Mo-Shakib/Arduino-Projects/blob/main/Interfacing%20LDR%20Sensor/Circuit%20diagram.png?raw=true" alt="Picture" style="zoom:38%;">

#### Code:
~~~c
int sensorPin = A0; // select the input pin for LDR
int ledPin = 13; // LED pin
int sensorValue = 0; // variable to store the value coming from the sensor

void setup() {
  Serial.begin(9600); //sets serial port for communication
  pinMode(ledPin, OUTPUT);
}

void loop() {
  sensorValue = analogRead(sensorPin); // read the value from the sensor
  Serial.println(sensorValue); //prints the values coming from the sensor on the screen
  if (sensorValue < 100){
    digitalWrite(ledPin, HIGH);
  }else{
    digitalWrite(ledPin, LOW);
    }
  delay(1000);
}
~~~
