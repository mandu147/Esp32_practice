#define sensor 1

void setup() 
{
  Serial.begin(115200);

}

void loop() 
{
  double volt;
  int thermal;
  thermal=analogRead(sensor);
  volt=thermal/4096.0*3.3;
  Serial.printf("%d   %.2lfv\n",thermal,volt);
  delay(100);

}
