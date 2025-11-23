#include "Chef.h"
#include <iostream>

Chef::Chef(std::string name) : name(name)
{
    std::cout << "Chef constructor: " << name << std::endl;
}

Chef::~Chef()
{
    std::cout << "Chef destructor: " << name << std::endl;
}

void Chef::makeSalad()
{
    std::cout << name << " makes salad" << std::endl;
}

void Chef::makeSoup()
{
    std::cout << name << " makes soup" << std::endl;
}
