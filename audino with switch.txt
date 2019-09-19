void setup
{
pinMode(10,INPUT);
pinMode(7,OUTPUT);
}
void loop
{
bool a=digitalWrite(10);

if(a==true)
{
   digitalWrite(7,HIGH);
}
else
{
   digitalWrite(7,LOW);
}
}