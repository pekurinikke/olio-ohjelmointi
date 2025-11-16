#include "car.h"

// Konstruktori
Car::Car(std::string b, std::string m, int y) {
    brand = b;
    model = m;
    yearModel = y;
}

// Metodit
void Car::printData() const {
    std::cout << "Brand: " << brand
              << ", Model: " << model
              << ", Year: " << yearModel << std::endl;
}

// Setterit (valinnaiset)
void Car::setBrand(const std::string& b) {
    brand = b;
}

void Car::setModel(const std::string& m) {
    model = m;
}

void Car::setYearModel(int y) {
    yearModel = y;
}
