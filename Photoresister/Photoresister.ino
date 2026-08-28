#define brightness 1
#define led 9

void setup()
{
  Serial.begin(115200);
}
void loop()
{
  int bright;
  bright=analogRead(brightness);
  Serial.println(bright);
  delay(100);
if(bright>1000)
{
  analogWrite(led,255);
}
else if(bright<1000)
{
  analogWrite(led,0);
}

}