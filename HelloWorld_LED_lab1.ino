const byte led_pin=2;
void setup() 
{
  pinMode(2, OUTPUT);

}

void loop() {
  digitalWrite(2,HIGH);
  delay(10);
  digitalWrite(2,LOW);
  delay(10);
}
