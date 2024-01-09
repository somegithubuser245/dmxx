//
// Created by Даниил on 1/9/24.
//

#include "reciever.h"
#include "DmxSimple.h"


class Receiver{
public:
    Receiver(size_t address): ADDRESS(address)
    {
    }
    void rotateY(size_t rotateValue){
        DmxSimple.usePin(ADDRESS);
        DmxSimple.write(1, rotateValue)
    }
    void rotateX(size_t rotateValue){
        DmxSimple.usePin(ADDRESS);
        DmxSimple.write(3, rotateValue)
    }
    void write(size_t channel, size_t writeValue){
        DmxSimple.usePin(ADDRESS);
        DmxSimple.write(channel, writeValue)
    }
private:
    const size_t ADDRESS;
};

