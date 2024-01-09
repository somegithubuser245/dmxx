
#include "DmxSimple.h"

void setup() {
  DmxSimple.usePin(9);
  DmxSimple.maxChannel(14);
}

void loop() {
  
  DmxSimple.write(11,23); //using color palette
  DmxSimple.write(6,140);  //strobing
  DmxSimple.write(1, 255); //rotate 360
  DmxSimple.write(3, 120); //rotate x 200
  DmxSimple.write(5, 200); //assign speed of 200
 
}
