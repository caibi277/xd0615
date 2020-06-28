volatile int pinInterrupt = 2; //接中断信号的脚
volatile byte income =0;
volatile int i=0;
void onChange()
{
   if ( digitalRead(pinInterrupt) == LOW )
      Serial.println("Key Down");
   else
      Serial.println("Key UP");
}

void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  Serial.begin(9600);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  pinMode( pinInterrupt, INPUT);
  attachInterrupt( digitalPinToInterrupt(pinInterrupt), onChange, CHANGE);

}
void loop()
{
  int i=0;
  for(i;i<11;i++)
  {
    if ( digitalRead(pinInterrupt) == LOW )
    {
      i=0;
    }
    if(i==10)
    {
      i=0;
    }
    income =i;
    income =income-'0';
    digitalWrite(8,LOW);
    digitalWrite(2,income&0x1);
    digitalWrite(3,(income>>1)&0x1);
    digitalWrite(4,(income>>2)&0x1);
    digitalWrite(5,(income>>3)&0x1);
    digitalWrite(8,HIGH);
    delay(1000);
  }
}
    