void setup()
{
pinMode(4,OUTPUT);
pinMode(6,OUTPUT);
pinMode(8,OUTPUT);
pinMode(10,OUTPUT);
}
void loop()
{
for(i=4;i<10;
i=i+2)
{
digitalWrite(i,HIGH);
digitalWrite(i+2,HIGH);
digitalWrite(i-6,HIGH);
delay(1000);
digitalWrite(i,LOW);
digitalWrite(i+2,LOW);
}
}