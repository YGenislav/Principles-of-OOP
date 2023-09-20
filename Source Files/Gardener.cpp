#include "../Header Files/Gardener.h"

Gardener::Gardener(std::string name) : Person("Gardener " + name){
}

FlowersBouquet* Gardener::prepareBouquet(std::vector<std::string> bouquet){
    std::cout << getName() << " prepares flowers." << std::endl;
    return new FlowersBouquet(bouquet);

};
