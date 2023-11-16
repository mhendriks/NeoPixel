#include <SingleNeoPixel.h>

SingleNeoPixel rgb(14);

void setup() {
  Serial.begin(115200);
  rgb.begin();
}

void loop() {
  rgb.setPixel(0x0f0000);
  delay(1000);
  rgb.setPixel(0x0f00);
  delay(1000);
  rgb.setPixel(0x0f);
  delay(1000);
  rgb.setPixel(0x0);
  delay(1000);
}
