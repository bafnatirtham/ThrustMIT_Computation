// C++ code
//
int yellow=6;
  int red=9;
void setup()
{
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop()
{
  for(int i=0; i<3; i++)
  {
  digitalWrite(yellow, HIGH);
  delay(250); 
  digitalWrite(yellow, LOW);
  delay(250);
  }
     
for(int i=0; i<5; i++)
  {
  digitalWrite(red, HIGH);
  delay(250); 
  digitalWrite(red, LOW);
  delay(250);
}
}