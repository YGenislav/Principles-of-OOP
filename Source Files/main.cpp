#include <iostream>
#include "../Header Files/Person.h"
#include "../Header Files/Florist.h"


int main() {
    Person* Chris = new Person("Chris");
    Person* Robin = new Person("Robin");
    Gardener* Graett = new Gardener("Garett");
    FlowerArranger* Flora = new FlowerArranger("Flora");
    DeliveryPerson* Dylan = new DeliveryPerson("Dylan");
    Grower* Gray = new Grower("Gray", Graett);
    Wholesaler* Watson = new Wholesaler("Watson", Gray);
    Florist* Fred = new Florist("Fred", Watson, Flora, Dylan);
    std::vector<std::string> order = {"Roses", "Violets", "Gladiolus"};

    Chris->orderFlowers(Fred, Robin, order);

    delete Fred;
    delete Watson;
    delete Gray;
    delete Dylan;
    delete Flora;
    delete Graett;
    delete Robin;
    delete Chris;
}
