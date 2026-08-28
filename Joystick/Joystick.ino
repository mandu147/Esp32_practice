/*
const int xyz[]={19,20,21};



void setup() 
{
 Serial.begin(115200);
pinMode(xyz[2],INPUT_PULLDOWN);

}

void loop() 
{
  int xaxis=analogRead(xyz[0]);
  int yaxis=analogRead(xyz[1]);
  int zaxis=analogRead(xyz[2]);
  Serial.printf("x축 :%d\t y축 :%d\t z축 :%d\n",xaxis,yaxis,zaxis);
  delay(100);
}
*/

int xyzPins[] = {14, 13, 12}; //x,y,z pins
void setup() {
 Serial.begin(115200);
 pinMode(xyzPins[2], INPUT_PULLUP); //z axis is a button.
}
void loop() {
 int xVal = analogRead(xyzPins[0]);
 int yVal = analogRead(xyzPins[1]);
 int zVal = digitalRead(xyzPins[2]);
 Serial.printf("X,Y,Z: %d,\t%d,\t%d\n", xVal, yVal, zVal);
 delay(10);
}
