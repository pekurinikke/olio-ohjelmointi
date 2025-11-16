#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>

class Car {
private:
    std::string brand;
    std::string model;
    int yearModel;

public:

    Car(std::string b, std::string m, int y);


    void printData() const;


    void setBrand(const std::string& b);
    void setModel(const std::string& m);
    void setYearModel(int y);
};

#endif
