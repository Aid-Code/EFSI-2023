#define LED 5
#define TRIG 2
#define ECHO 3

long tiempo;
long distancia;

void setup()
{
  Serial.begin(9600);
  
  pinMode(LED, OUTPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}

void loop()
{
  digitalWrite(TRIG, HIGH);
  delay(10);
  digitalWrite(TRIG, LOW);
  
  tiempo = pulseIn(ECHO, HIGH);
  
  distancia = tiempo / 59;
  
  Serial.println(distancia);
  
  if (distancia <= 30)
  {
    digitalWrite(LED, HIGH);
  }
  else 
  {
    digitalWrite(LED, LOW);
  }
}
