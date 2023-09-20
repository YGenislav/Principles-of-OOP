#ifndef UNTITLED2_DELIVERYPERSON_H
#define UNTITLED2_DELIVERYPERSON_H


#include "Person.h"

class DeliveryPerson : Person{
public:
    DeliveryPerson(std::string name);
    std::string getName();
    void deliver(Person*, FlowersBouquet*);
};


#endif //UNTITLED2_DELIVERYPERSON_H
