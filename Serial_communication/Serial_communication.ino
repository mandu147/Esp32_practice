String input;

void setup()
{
  Serial.begin(115200);
  Serial.println("빨강, 파랑, 초록 중에서 색깔을 입력하세요:");
}

void loop()
{
  if (Serial.available())
  {
    input = Serial.readStringUntil('\n');
    input.trim();

    // 아무것도 입력되지 않았으면 무시
    if (input.length() == 0)
    {
      return;
    }

    if (input == "빨강")
    {
      Serial.println("빨간색 불이 켜졌습니다.");
    }
    else if (input == "파랑")
    {
      Serial.println("파란색 불이 켜졌습니다.");
    }
    else if (input == "초록")
    {
      Serial.println("초록색 불이 켜졌습니다.");
    }
   
    
  }
}