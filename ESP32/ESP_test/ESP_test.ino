//https://shop.mirotek.com.tw/iot/esp32-start-3/
int val;  //定義變量val 
int ledpin=2;  //GPIO2
void setup()
{
  Serial.begin(9600);
  pinMode(ledpin,OUTPUT);
}
void loop()
{
  val=Serial.read();  //判斷接收到的指令或字符是否是“R”。
  if(val=='R')
  {
    digitalWrite(ledpin,HIGH);
    delay(500);
    digitalWrite(ledpin,LOW);
    delay(500);
    Serial.println("Hello World!");
  }
}
