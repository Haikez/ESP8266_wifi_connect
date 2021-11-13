#include<wifi_connect_tool.h>
void setup() {
  delay(100);
  wifi_load();
}

void loop() {
  wifi_pant();
}
