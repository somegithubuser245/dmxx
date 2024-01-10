//
// Created by Даниил on 1/10/24.
//

#include <DmxSimple.h>
#include "DmxReceiver.h"
#include <Arduino.h>

DmxReceiver::DmxReceiver(uint8_t startingChannel) : _startingChannel(startingChannel) {
    // Constructor - sets the starting DMX channel for this receiver
}

void DmxReceiver::writeValue(uint8_t channelOffset, uint8_t value) {
    DmxSimple.write(_startingChannel - 1 + channelOffset, value);
}

void DmxReceiver::setRGBW(bool useSecondary, uint8_t r, uint8_t g, uint8_t b, uint8_t w) {
    uint8_t baseChannel = useSecondary ? 7 : 2; // Offset for secondary or primary channels
    writeValue(baseChannel, r);      // Red
    writeValue(baseChannel + 1, g);  // Green
    writeValue(baseChannel + 2, b);  // Blue
    writeValue(baseChannel + 3, w);  // White
}