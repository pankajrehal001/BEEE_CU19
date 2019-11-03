char data=0;
int m1=2;
int m2=3;
int em=4;
boolean md1,md2;

void setup()
{
Serial.begin(9600);
pinMode(em,OUTPUT);
pinMode(m1,OUTPUT);
pinMode(m2,OUTPUT);
}
void loop()
{
digitalWrite(em,HIGH);
if(Serial,avaiable()>0)
{
data=Serial.read();
Serial.print(data);
Serial.printf("\n");

if(data=='1')
{
md1=HIGH;
md2=LOW;
digitalWrite(m1,md1);
digitalWrite(m2,md2);
}
else if(data=='0')
{
md1=HIGH;
md2=LOW;
digitalWrite(m1,md1);
digitalWrite(m2,md2);
}}}