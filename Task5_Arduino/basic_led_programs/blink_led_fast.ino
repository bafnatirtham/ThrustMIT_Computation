// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(183); // Wait for 183 millisecond(s)
  digitalWrite(13, LOW);
  delay(183); // Wait for 183 millisecond(s)
}