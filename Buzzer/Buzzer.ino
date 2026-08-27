#define buzz 21
#define button 14




void setup() 
{
 pinMode(buzz,OUTPUT);
 pinMode(button,INPUT_PULLDOWN);   // 존나 중요함
}

void loop() 
{
  if(digitalRead(button)==HIGH)  //디지털리드 일때 14번 핀이 하이인지 로우인지 정확히 몰라서 버튼 안눌러도 계속 울림 즉 INPUT_PULLDOWN으로 해결가능
  {
    
   analogWrite(buzz,100);
  }
  else
  {
    analogWrite(buzz,0);
  }

}
