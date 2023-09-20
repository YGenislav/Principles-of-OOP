#ifndef UNTITLED2_FLOWERARRANGER_H
#define UNTITLED2_FLOWERARRANGER_H

#include "FlowersBouquet.h"
#include "Person.h"

class FlowerArranger : public Person{
public:
    FlowerArranger(std::string name);
    void arrangeFlowers(FlowersBouquet*);

};


#endif //UNTITLED2_FLOWERARRANGER_H
