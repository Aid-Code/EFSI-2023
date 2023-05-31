#define LED 6
#define POT A0

int pote;

void setup()
{
  Serial.begin(9600);
  
  pinMode(LED, OUTPUT);
  pinMode(POT, INPUT);
}

void loop()
{
  pote = analogRead(POT) / 4;
  
  analogWrite(LED, pote);
}
