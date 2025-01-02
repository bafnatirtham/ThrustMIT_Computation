// C++ code
//
int voltpin=A3;
int read_val;
float v2;


void setup()
{
  
  Serial.begin(9600);
}

void loop()
{
  read_val=analogRead(voltpin);
  v2=(5*read_val)/1023.0;
  Serial.println(v2);
  delay(500);
}