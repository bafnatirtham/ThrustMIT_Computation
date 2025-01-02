// C++ code
//
int num;
int ledpin=7;
String msg="Please enter number of blinks: ";
void setup()
{
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println(msg);
  while(Serial.available()==0)
  {
  }
  
  num=Serial.parseInt();
  Serial.println(num);
  
  for(int i=1; i<=num; i++)
  {
  digitalWrite(ledpin,HIGH);
  delay(500);
  digitalWrite(ledpin,LOW);
  delay(500);
  }
 
}