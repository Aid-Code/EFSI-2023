#define LDR A0
#define LED 6

int sensorReading;

void setup ()
{
  Serial.begin(9600);
  
  pinMode(LDR, INPUT);
  pinMode(LED, OUTPUT);
}

void loop ()
{
  sensorReading = analogRead(LDR);

  if (sensorReading < 400)
  {
    digitalWrite(LED, LOW);
  }
  else 
  {
    digitalWrite(LED, HIGH);
    Serial.println(sensorReading);
  }
}
