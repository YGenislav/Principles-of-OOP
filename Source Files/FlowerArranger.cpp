#include "../Header Files/FlowerArranger.h"

FlowerArranger::FlowerArranger(std::string name) : Person("Flower Arranger " + name){
}

void FlowerArranger::arrangeFlowers(FlowersBouquet* flowersBouquet){
    flowersBouquet -> arrange();
    std::cout << getName() << " arranges flowers." << std::endl;
}
