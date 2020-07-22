void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(4, INPUT);
  digitalWrite(13, LOW);
}

void loop()
{
  if(digitalRead(4) == 1)
  {
    digitalWrite(13, HIGH);
    Serial.println("Sensor activated."); 
    delay(100);
  }
  else
  {
    digitalWrite(13, LOW);
    Serial.println("Sensor NOT active."); 
  }
}