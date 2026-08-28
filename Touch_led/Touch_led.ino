#define led 37
#define touch 150000
#define untouch 60000



void setup() 
{
  Serial.begin(115200);
  pinMode(led,OUTPUT);

}

void loop() 
{
  int value;
  value=touchRead(T14);
  Serial.println(value);
  
  if(value>touch)
  {
    digitalWrite(led,HIGH);

  }
  else if (value<untouch)
  {
    digitalWrite(led,LOW);
  }
}
