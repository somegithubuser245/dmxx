
#include "libraries/DmxSimple/DmxSimple.h"
#include "libraries/DmxReceiver/DmxReceiver.h"

// Create DMX receiver objects with their starting channels
DmxReceiver color1(1);   // Object for 'color1' starting at DMX channel 1
DmxReceiver color2(37);  // Object for 'color2' starting at DMX channel 37
DmxReceiver moving1(9);  // Object for 'moving1' starting at DMX channel 9
DmxReceiver moving2(23); // Object for 'moving2' starting at DMX channel 23

void setup() {
    DmxSimple.usePin(3);
    DmxSimple.maxChannel(46)
}

void loop() {
    // Example usage of the objects
    DmxSimple.write(11,23); //using color palette
    DmxSimple.write(6,140);  //strobing
    DmxSimple.write(1, 255); //rotate 360
    DmxSimple.write(3, 120); //rotate x 200
    DmxSimple.write(5, 200); //assign speed of 200


    color1.writeValue(1, 255); // Write to channel 1 of color1
    color2.writeValue(1, 255); // Write to channel 1 of color2
    moving1.writeValue(1, 255); // Write to channel 1 of moving1
    moving2.writeValue(1, 255); // Write to channel 1 of moving2

    color1.setRGBW(false, 255, 51, 51, 50);
    color2.setRGBW(false, 255, 51, 51, 50);
    moving1.setRGBW(true, 255, 0, 0, 50);
    moving2.setRGBW(true, 255, 0, 0, 50);
    color1.writeValue(8, 125);
    color2.writeValue(8, 250);
    color1.writeValue(6, 20);
    color2.writeValue(6, 20);
    color1.writeValue(7, 170);
    color2.writeValue(7, 170);
    delay(500);
    color1.setRGBW(false, 178, 102, 255, 50);
    color2.setRGBW(false, 178, 102, 255, 50);
    moving1.setRGBW(true, 178, 102, 255, 50);
    moving2.setRGBW(true, 178, 102, 255, 50);
    delay(500);
    color1.setRGBW(false, 255, 51, 51, 50);
    color2.setRGBW(false, 255, 51, 51, 50);
    moving1.setRGBW(true, 255, 0, 0, 50);
    moving2.setRGBW(true, 255, 0, 0, 50);
    delay(500);
    color1.setRGBW(false, 178, 102, 255, 50);
    color2.setRGBW(false, 178, 102, 255, 50);
    moving1.setRGBW(true, 178, 102, 255, 50);
    moving2.setRGBW(true, 178, 102, 255, 50);
    delay(500);
    color1.setRGBW(false, 255, 51, 51, 50);
    color2.setRGBW(false, 255, 51, 51, 50);
    moving1.setRGBW(true, 255, 0, 0, 50);
    moving2.setRGBW(true, 255, 0, 0, 50);
    delay(500);
    color1.setRGBW(false, 178, 102, 255, 50);
    color2.setRGBW(false, 178, 102, 255, 50);
    moving1.setRGBW(true, 178, 102, 255, 50);
    moving2.setRGBW(true, 178, 102, 255, 50);
    delay(500);
    color1.setRGBW(false, 255, 51, 51, 50);
    color2.setRGBW(false, 255, 51, 51, 50);
    moving1.setRGBW(true, 255, 0, 0, 50);
    moving2.setRGBW(true, 255, 0, 0, 50);
    delay(500);
    color1.setRGBW(false, 178, 102, 255, 50);
    color2.setRGBW(false, 178, 102, 255, 50);
    moving1.setRGBW(true, 178, 102, 255, 50);
    moving2.setRGBW(true, 178, 102, 255, 50);
    delay(200);                                 //rotate and set color to white
    moving1.setRGBW(true, 0, 0, 0, 255);
    moving2.setRGBW(true, 0, 0, 0, 255);
    moving1.writeValue(5, 255);
    moving2.writeValue(5, 255);
    moving1.writeValue(1, 250);
    moving2.writeValue(1, 250);
    moving1.writeValue(3, 250);
    moving2.writeValue(3, 250);
    delay(10)
    moving1.writeValue(1, 0);
    moving2.writeValue(1, 0);
    moving1.writeValue(3, 0);
    moving2.writeValue(3, 0);






    // Additional code for your light show, delays, etc.

    delay(1000); // Delay for demonstration purposes
}

void loop() {
 
}
