#define LDR A0
#define LED_1 3
#define LED_2 5
#define LED_3 6

int sensorReading;
int pwm;

void setup ()
{
  Serial.begin(9600);
  
  pinMode(LDR, INPUT);
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
}

void loop ()
{
  sensorReading = analogRead(LDR);
  
  pwm = sensorReading / 4;
  
  analogWrite(LED_1, pwm);
  analogWrite(LED_2, pwm);
  analogWrite(LED_3, pwm);
  
  Serial.println(sensorReading);
}
