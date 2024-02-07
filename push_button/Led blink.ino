const int led =1;
void setup(){
pinMode(led,HIGH);
}
void loop()
{
 digitalWrite(led,HIGH);
 delay(1000);
 digitalWrite(led,LOW);
 delay(1000);
 }
//led connect with D1 pin and get GND in ARDUINO UNO 
