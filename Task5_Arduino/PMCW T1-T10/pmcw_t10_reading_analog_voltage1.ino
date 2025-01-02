// C++ code
//
int readpin = A3;
int v2=0;
double val=0;
int time=500;
void setup()
{
  pinMode(readpin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  v2= analogRead(readpin);
  val=(5*v2)/1023.0;
  Serial.println(val);
  delay(time);
}