#include "../Header Files/Grower.h"

Grower::Grower(std::string name, Gardener* gardener) : Person("Grower " + name), gardener(gardener){
}

FlowersBouquet* Grower::prepareOrder(std::vector<std::string> v){
    std::cout << getName() << " forwards the request to " << gardener -> getName() << "." << std::endl;
    FlowersBouquet* f =  gardener -> prepareBouquet(v);
    return f;
}
