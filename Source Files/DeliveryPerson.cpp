#include "../Header Files/DeliveryPerson.h"

DeliveryPerson::DeliveryPerson(std::string name) : Person("Delivery Person " + name){
}

void DeliveryPerson::deliver(Person* p , FlowersBouquet* flowersBouquet) {
    std::cout << getName() << " delivers flowers " << p->getName() << "." << std::endl;
    p -> acceptFlowers(flowersBouquet);
}

std::string DeliveryPerson::getName(){
    return name;
}