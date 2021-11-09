#include<wifi_connect_tool.h>
void setup() {
//  EEPROM.begin(1024);//向系统申请1024kb ROM
//  for (int i = 0; i < 1024; i++)
//    EEPROM.write(i, 0);
//  EEPROM.commit();//执行写入ROM
  // put your setup code here, to run once:
  delay(100);
  load();
}

void loop() {
  // put your main code here, to run repeatedly:
  pant();
}
