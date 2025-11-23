#include "ItalianChef.h"
#include <iostream>

ItalianChef::ItalianChef(std::string name) : Chef(name)   // kutsutaan kantaluokan konstruktoria
{
    std::cout << "ItalianChef constructor: " << name << std::endl;
}

ItalianChef::~ItalianChef()
{
    std::cout << "ItalianChef destructor: " << name << std::endl;
}

void ItalianChef::makePasta()
{
    std::cout << name << " makes pasta" << std::endl;
}

std::string ItalianChef::getName()
{
    return name;
}
