#ifndef UNTITLED2_FLOWERSBOUQUET_H
#define UNTITLED2_FLOWERSBOUQUET_H

#pragma once
#include <vector>
#include <string>
#include <sstream>
#include <iterator>

class FlowersBouquet {
private:
    std::vector<std::string> bouquet;
    bool isArranged;
public:
    FlowersBouquet(std::vector<std::string>);
    void arrange();
    std::string to_string();
    static std::string join(std::vector<std::string>, const char* delim);
};


#endif //UNTITLED2_FLOWERSBOUQUET_H
