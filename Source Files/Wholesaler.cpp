#include "../Header Files/Wholesaler.h"

Wholesaler::Wholesaler(std::string name, Grower* grower) : Person("Wholsealer " + name), grower(grower){

}


FlowersBouquet* Wholesaler::acceptOrder(std::vector <std::string> flower){
    std::cout << getName() << " forwards the request to " << grower -> getName() << "." << std::endl;
    FlowersBouquet* flowersBouquetReady = grower -> prepareOrder(flower);
    std::cout << grower -> getName() << " returns flowers to " << getName() << "." << std::endl;
    return flowersBouquetReady;
}