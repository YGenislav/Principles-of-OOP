#ifndef UNTITLED2_WHOLESALER_H
#define UNTITLED2_WHOLESALER_H


#include "Grower.h"
#include "FlowersBouquet.h"
#include "Person.h"
#include <ostream>

class Wholesaler : public Person{
private:
    Grower* grower;
public:
    Wholesaler(std::string name, Grower* grower);
    FlowersBouquet* acceptOrder(std::vector<std::string>);
};


#endif //UNTITLED2_WHOLESALER_H
