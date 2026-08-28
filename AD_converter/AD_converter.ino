#define PIN_ANALOG_IN 1
void setup() {
 Serial.begin(115200);
}
void loop() {
 int adcVal = analogRead(PIN_ANALOG_IN);
 double voltage = adcVal / 4095.0 * 3.3;
 Serial.printf("ADC Val: %d, \t Voltage: %.2fV\n", adcVal, voltage);  //여기서 adcval 값을 받아와야하는거임 analogRead를 했으니까
 delay(200);
}
