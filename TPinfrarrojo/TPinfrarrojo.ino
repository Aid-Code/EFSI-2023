#define IR 3
#define LED 2

int lecturaIR;

void setup() 
{
  Serial.begin(9600);
  
  pinMode(LED, OUTPUT);
  pinMode(IR, INPUT);
}

void loop() 
{
  lecturaIR = digitalRead(IR);

  Serial.println(lecturaIR);

  if (lecturaIR == 0)
  {
    digitalWrite(LED, HIGH);
  }
  else
  {
    digitalWrite(LED, LOW);
  }
}
