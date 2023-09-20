#ifndef UNTITLED2_FLORIST_H
#define UNTITLED2_FLORIST_H


#include "../Header Files/Person.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
#include "Wholesaler.h"

#pragma once

class Florist : public Person{
private:
     Wholesaler* wholesaler;
     FlowerArranger* flowerArranger;
     DeliveryPerson* deliveryPerson;
public:
    Florist(std::string name, Wholesaler* wholesaler, FlowerArranger* flowerArranger, DeliveryPerson* deliveryPerson);
    void acceptOrder(Person*, std::vector<std::string>);
};


#endif //UNTITLED2_FLORIST_H
