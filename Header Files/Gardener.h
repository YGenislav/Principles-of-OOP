#ifndef UNTITLED2_GARDENER_H
#define UNTITLED2_GARDENER_H

#pragma once
#include <iostream>
#include <vector>
#include "FlowersBouquet.h"
#include "Person.h"

class Gardener : public Person{
public:
    Gardener(std::string name);
    FlowersBouquet* prepareBouquet(std::vector <std::string>);
};


#endif //UNTITLED2_GARDENER_H
