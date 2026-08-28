//led와 가변저항
#define led 9
#define adv_value 1


void setup() 
{
  Serial.begin(115200);
  pinMode(led,OUTPUT);
  Serial.println("가변저항을 돌리세요");
  
}

void loop() 
{
  int value = analogRead(adv_value);
  int brightness; 
  brightness=value/16;
  Serial.printf("%d\n",brightness);
  delay(10);
  analogWrite(led,brightness);
 

}
