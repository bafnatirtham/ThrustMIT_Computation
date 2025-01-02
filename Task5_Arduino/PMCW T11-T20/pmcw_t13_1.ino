// C++ code
//
int mypin=A3;
int read_val;
float v2;
int redpin=9;

void setup()
{
  pinMode(redpin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  read_val=analogRead(mypin);
  v2=(5*read_val)/1023.0;
  Serial.print("Potentiometer voltage is ");
  Serial.println(v2);
  delay(500);
  
  if(v2>4)
  {
    Serial.println("Warning, voltage over 4 Volts");
  	digitalWrite(redpin,HIGH);
    delay(250);
    digitalWrite(redpin,LOW);
  }
}