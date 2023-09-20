#include "../Header Files/Florist.h"

Florist::Florist(std::string name, Wholesaler* wholesaler, FlowerArranger* flowerArranger, DeliveryPerson* deliveryPerson) : Person("Florist " + name), wholesaler(wholesaler) , flowerArranger(flowerArranger), deliveryPerson(deliveryPerson){
}

void Florist::acceptOrder(Person* p, std::vector<std::string> flowers) {
    std::cout << getName() << " forwards the request to " << wholesaler->getName() << "." << std::endl;
    FlowersBouquet* flowersBouquet = wholesaler -> acceptOrder(flowers);
    std::cout << wholesaler -> getName() << " returns flowers to " << getName() << "." << std::endl;
    std::cout << getName() << " request flowers arrangement from " << flowerArranger -> getName() << "." << std::endl;
    flowerArranger -> arrangeFlowers(flowersBouquet);
    std::cout << flowerArranger -> getName() << " returns arranged flowers to " << getName() << "." << std::endl;
    std::cout << getName() << " forwards flowers to " << deliveryPerson -> getName() << "." << std::endl;
    deliveryPerson -> deliver(p, flowersBouquet);

}
