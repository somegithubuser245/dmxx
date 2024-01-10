#ifndef DmxReceiver_h
#define DmxReceiver_h

#include <Arduino.h>
#include "DmxSimple.h"

class DmxReceiver {
public:
    DmxReceiver(uint8_t startingChannel);
    void writeValue(uint8_t channelOffset, uint8_t value);
    void setRGBW(bool useSecondary, uint8_t r, uint8_t g, uint8_t b, uint8_t w);

private:
    uint8_t _startingChannel;
};

#endif
