int i=0;
void setup()
{
  i=0;
  while(i<=7)
  {
    pinMode(i,OUTPUT);
    i++;
  }
}

void loop()
{
  i=0;
  while(i<=7)
  {
    digitalWrite(i,HIGH);
  	delay(1000); // Wait for 1000 millisecond(s)
 	digitalWrite(i,LOW);
  	delay(1000); // Wait for 1000 millisecond(s)
    i++;
  }
}