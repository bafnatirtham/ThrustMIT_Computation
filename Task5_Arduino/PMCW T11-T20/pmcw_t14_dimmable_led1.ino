// C++ code
//
int potpin=A3;
int ledpin=6;
int potval;//value of potentiometer recorded in analog pin
float ledval;
void setup()
{
  pinMode(potpin, INPUT);
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  potval= analogRead(A3);
  ledval= (255. * potval)/1023.;
  analogWrite(ledpin, ledval);
  Serial.println(ledval);
}