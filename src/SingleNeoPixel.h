/*
  This Library is written for WS2812
  Author: Bonezegei (Jofel Batutay)
  Date : October 2023
  RGB LED Controller
*/

#include "esp32-hal.h"
#include <Arduino.h>

#ifndef _SingleNeoPixel_H_
#define _SingleNeoPixel_H_

class SingleNeoPixel {
public:
  //1 LED
  SingleNeoPixel(int pin);
  //Multiple LED in single strip
//   SingleNeoPixel(int pin, int led_count);
//   //Multiple LED in Matrix
//   SingleNeoPixel(int pin, int row, int col);

  //Initialize
  int begin();

  void setPixel(uint32_t color);

  //set pixel and send to the WS2812
//   void setPixel(int index, uint32_t color);
// 
//   //set pixel without sending to the WS2812
  void _setPixel(int index, uint32_t color);
// 
//   //set pixel in WS2812 Matrix
//   void setPixel(int x, int y, uint32_t color);

  // write the actual NZR to WS2812
  void display();

  //replaced with fill
  void clear();

  //fill all LED
  void fill(uint32_t color);

  rmt_obj_t* rmt_send = NULL;

  rmt_data_t* led_data;

  int _pin;
  int _row;
  int _col;
  int _led_count;
  int _led_rmt;
};

#endif
