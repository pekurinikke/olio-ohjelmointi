#include <iostream>
#include <vector>
#include "car.h"

int main() {

    std::vector<Car> carList;


    carList.push_back(Car("Toyota", "Corolla", 2018));
    carList.push_back(Car("Ford", "Mustang", 2020));
    carList.push_back(Car("Tesla", "Model 3", 2022));


    std::cout << "Second car:" << std::endl;
    carList[1].printData();


    std::cout << "\nAll cars:" << std::endl;
    for (size_t i = 0; i < carList.size(); ++i) {
        carList[i].printData();
    }

    return 0;
}
