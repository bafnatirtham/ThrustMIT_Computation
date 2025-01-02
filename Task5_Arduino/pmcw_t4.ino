// C++ code
//
int redled=13;
  int greenled=11;
  int blueled =9;
  int fast=500;
  int slow=1000;
  int vslow=2000;
void setup()
{
  pinMode(redled, OUTPUT);
  pinMode(greenled, OUTPUT);
  pinMode(blueled, OUTPUT);
}

void loop()
{
  for(int i=0; i<5; i++)
  {
    digitalWrite(redled, HIGH);
  delay(fast); 
  digitalWrite(redled, LOW);
   delay(fast);
  }
   for(int i=0; i<10; i++)
  {
    digitalWrite(greenled, HIGH);
  delay(slow); 
  digitalWrite(greenled, LOW);
   delay(slow);
  }
  for(int i=0; i<15; i++)
  {
    digitalWrite(blueled, HIGH);
  delay(vslow); 
  digitalWrite(blueled, LOW);
   delay(vslow);
  }
}