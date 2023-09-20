#include <iostream>
#include "../Header Files/FlowersBouquet.h"

FlowersBouquet::FlowersBouquet(std::vector<std::string> bouquet) : bouquet(bouquet), isArranged(false){};

void FlowersBouquet::arrange() {
    isArranged = true;
}

std::string FlowersBouquet::to_string() {
    return join(bouquet, ", ");
}

std::string FlowersBouquet::join(std::vector<std::string> v, const char* delim) {
    std::ostringstream imploded;
    std::copy(v.begin(), v.end(), std::ostream_iterator<std::string>(imploded,delim));
    std::string implodedStr = imploded.str();
    return implodedStr.substr(0,implodedStr.size()-2).append(".");
}