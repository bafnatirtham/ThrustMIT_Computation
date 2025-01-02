int sig_1r=1;
int sig_1y=2;
int sig_1g=3;
int sig_2r=4;
int sig_2y=5;
int sig_2g=6;
int sig_3r=8;
int sig_3y=9;
int sig_3g=10;
int sig_4r=11;
int sig_4y=12;
int sig_4g=13;

void setup()
{
  pinMode(sig_1r, OUTPUT);
  pinMode(sig_1y, OUTPUT);
  pinMode(sig_1g, OUTPUT);
  
  pinMode(sig_2r, OUTPUT);
  pinMode(sig_2y, OUTPUT);
  pinMode(sig_2g, OUTPUT);
  
  pinMode(sig_3r, OUTPUT);
  pinMode(sig_3y, OUTPUT);
  pinMode(sig_3g, OUTPUT);
  
  pinMode(sig_4r, OUTPUT);
  pinMode(sig_4y, OUTPUT);
  pinMode(sig_4g, OUTPUT);
}


void loop()
{
//1. First signal GREEN
digitalWrite(sig_1r, LOW);
digitalWrite(sig_2r, HIGH);
digitalWrite(sig_3r, HIGH);
digitalWrite(sig_4r, HIGH);

digitalWrite(sig_1y, LOW);
digitalWrite(sig_2y, LOW);
digitalWrite(sig_3y, LOW);
digitalWrite(sig_4y, LOW);

digitalWrite(sig_1g, HIGH);
digitalWrite(sig_2g, LOW);
digitalWrite(sig_3g, LOW);
digitalWrite(sig_4g, LOW);
delay(5000);
 
//2. CHANGE
digitalWrite(sig_1r, LOW);
digitalWrite(sig_2r, LOW);
digitalWrite(sig_3r, HIGH);
digitalWrite(sig_4r, HIGH);

digitalWrite(sig_1y, HIGH);
digitalWrite(sig_2y, HIGH);
digitalWrite(sig_3y, LOW);
digitalWrite(sig_4y, LOW);

digitalWrite(sig_1g, LOW);
digitalWrite(sig_2g, LOW);
digitalWrite(sig_3g, LOW);
digitalWrite(sig_4g, LOW);
delay(2000);
 
//3. SECOND SIGNAL GREEN
digitalWrite(sig_1r, HIGH);
digitalWrite(sig_2r, LOW);
digitalWrite(sig_3r, HIGH);
digitalWrite(sig_4r, HIGH);

digitalWrite(sig_1y, LOW);
digitalWrite(sig_2y, LOW);
digitalWrite(sig_3y, LOW);
digitalWrite(sig_4y, LOW);

digitalWrite(sig_1g, LOW);
digitalWrite(sig_2g, HIGH);
digitalWrite(sig_3g, LOW);
digitalWrite(sig_4g, LOW);
delay(5000);
 
//4. CHANGE
digitalWrite(sig_1r, HIGH);
digitalWrite(sig_2r, LOW);
digitalWrite(sig_3r, LOW);
digitalWrite(sig_4r, HIGH);

digitalWrite(sig_1y, LOW);
digitalWrite(sig_2y, HIGH);
digitalWrite(sig_3y, HIGH);
digitalWrite(sig_4y, LOW);

digitalWrite(sig_1g, LOW);
digitalWrite(sig_2g, LOW);
digitalWrite(sig_3g, LOW);
digitalWrite(sig_4g, LOW);
delay(2000);

//5. Third signal GREEN
digitalWrite(sig_1r, HIGH);
digitalWrite(sig_2r, HIGH);
digitalWrite(sig_3r, LOW);
digitalWrite(sig_4r, HIGH);

digitalWrite(sig_1y, LOW);
digitalWrite(sig_2y, LOW);
digitalWrite(sig_3y, LOW);
digitalWrite(sig_4y, LOW);

digitalWrite(sig_1g, LOW);
digitalWrite(sig_2g, LOW);
digitalWrite(sig_3g, HIGH);
digitalWrite(sig_4g, LOW);
delay(5000);

//6. CHANGE
digitalWrite(sig_1r, HIGH);
digitalWrite(sig_2r, HIGH);
digitalWrite(sig_3r, LOW);
digitalWrite(sig_4r, LOW);

digitalWrite(sig_1y, LOW);
digitalWrite(sig_2y, LOW);
digitalWrite(sig_3y, HIGH);
digitalWrite(sig_4y, HIGH);

digitalWrite(sig_1g, LOW);
digitalWrite(sig_2g, LOW);
digitalWrite(sig_3g, LOW);
digitalWrite(sig_4g, LOW);
delay(2000);

//7. fourth signal green
digitalWrite(sig_1r, HIGH);
digitalWrite(sig_2r, HIGH);
digitalWrite(sig_3r, HIGH);
digitalWrite(sig_4r, LOW);

digitalWrite(sig_1y, LOW);
digitalWrite(sig_2y, LOW);
digitalWrite(sig_3y, LOW);
digitalWrite(sig_4y, LOW);

digitalWrite(sig_1g, LOW);
digitalWrite(sig_2g, LOW);
digitalWrite(sig_3g, LOW);
digitalWrite(sig_4g, HIGH);
delay(5000);

//8. CHANGE
digitalWrite(sig_1r, LOW);
digitalWrite(sig_2r, HIGH);
digitalWrite(sig_3r, HIGH);
digitalWrite(sig_4r, LOW);

digitalWrite(sig_1y, HIGH);
digitalWrite(sig_2y, LOW);
digitalWrite(sig_3y, LOW);
digitalWrite(sig_4y, HIGH);

digitalWrite(sig_1g, LOW);
digitalWrite(sig_2g, LOW);
digitalWrite(sig_3g, LOW);
digitalWrite(sig_4g, LOW);
delay(2000);

}