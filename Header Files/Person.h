#ifndef UNTITLED2_PERSON_H
#define UNTITLED2_PERSON_H

#include "../Header Files/FlowersBouquet.h"
#pragma once
#include <iostream>
#include <vector>

class Florist;

class Person{
protected:
    std::string name;
public:
    Person(std::string name);
    void orderFlowers(Florist*, Person*, std::vector<std::string>);
    void acceptFlowers(FlowersBouquet*);
    std::string getName();
};







#endif //UNTITLED2_PERSON_H
