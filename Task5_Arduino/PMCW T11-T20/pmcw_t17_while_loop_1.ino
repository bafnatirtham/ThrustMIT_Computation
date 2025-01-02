// C++ code
//
int potval;
int potpin=A3;
int read_val;
float v2;
int redpin=8;

void setup()
{
  pinMode(potpin, INPUT);
  pinMode(redpin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  potval=analogRead(potpin);
  Serial.println(potval);
  delay(500);
  
  while(potval>1000)
  {
    digitalWrite(redpin, HIGH);
    potval=analogRead(potpin);
    Serial.println(potval);
  	delay(500);
  }
  digitalWrite(redpin, LOW);
}