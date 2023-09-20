#ifndef UNTITLED2_GROWER_H
#define UNTITLED2_GROWER_H
#include <ostream>
#include "FlowersBouquet.h"
#include "Person.h"
#include "Gardener.h"

class Grower : public Person{
private:
    Gardener* gardener;
public:
    Grower(std::string name, Gardener* gardener);
    FlowersBouquet* prepareOrder(std::vector<std::string>);
};


#endif //UNTITLED2_GROWER_H
