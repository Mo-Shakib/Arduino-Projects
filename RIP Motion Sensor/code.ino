int sensor = 8;
void setup()
{

pinMode(sensor,INPUT);
Serial.begin(9600);

}

void loop()
{

int value = digitalRead(sensor);
// Serial.print("Gas Value: ");
  if (value == 1){
    Serial.println("Motion dected");
  }
  else{
    Serial.println("No movement");
  }
  delay(1000);
}