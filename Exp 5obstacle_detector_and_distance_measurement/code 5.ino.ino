void setup()
{
pinMode(12,OUTPUT);
pinMode(10,INPUT);
Serial.begin(9600);
}
void loop()
{
digitalWrite(12,LOW);
delayMicroseconds(2);
digitalWrite(12,HIGH);
delayMicroseconds(10);
digitalWrite(12,LOW);
int d=pulseIn(10,HIGH);

int t=(d*0.034)/2;
Serial.print("cm");
Serial.println(t);
}