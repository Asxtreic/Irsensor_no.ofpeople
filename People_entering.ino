int s1=3,s2=6,led=7;
int max=5,n=0;
int i;

void setup() {
  // put your setup code here, to run once:
pinMode(s1,INPUT);
pinMode(s2,INPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
while(n<=max)
{
  if(digitalRead(s1==HIGH))
  {delay (1000);
  while(digitalRead(s2==LOW))
  {
    n++;
    Serial.println("there are");
    Serial.print(n);
    Serial.println("people are in the room");
    i=255/(max+1-n);
    analogWrite(led,i);
  }
}
if(digitalRead(s2==HIGH))
{delay(1000);
while(digitalRead(s1==LOW))
{
  n--;
  Serial.println("hh");
  Serial.print(n);
  Serial.println("peeps in room after 1 left");
  i=255/(max+1-n);
  analogWrite(led,i);
}
}
}
}
