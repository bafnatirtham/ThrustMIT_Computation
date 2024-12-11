// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{

  for(int i=0; i<4; i++)
  {
  digitalWrite(13,HIGH);
  delay(200); // Wait for 1000 millisecond(s)
  digitalWrite(13,LOW);
  delay(200); // Wait for 1000 millisecond(s)
  }
for(int i=0; i<10; i++)
  {
  digitalWrite(11,HIGH);
  delay(200); // Wait for 1000 millisecond(s)
  digitalWrite(11,LOW);
  delay(200); // Wait for 1000 millisecond(s)
}
 for(int i=0; i<20; i++)
  {
   digitalWrite(8,HIGH);
  delay(200); // Wait for 1000 millisecond(s)
  digitalWrite(8,LOW);
  delay(200); // Wait for 1000 millisecond(s)
 }
}