#ifndef RTC_H
#define RTC_H

#include <stdint.h>

void read_rtc(uint8_t* hour, uint8_t* minute, uint8_t* second,
              uint8_t* day, uint8_t* month, uint8_t* year);

#endif