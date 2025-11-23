#include <memory>
#include <iostream>
#include "Animal.h"
#include "Dog.h"

int main()
{
    std::cout << "--- Animal ---" << std::endl;
    Animal a;
    a.callOut();

    std::cout << "\n--- Dog ---" << std::endl;
    Dog d;
    d.callOut();

    std::cout << "\n--- Polymorfinen esimerkki ---" << std::endl;
    std::unique_ptr<Animal> pa = std::make_unique<Dog>();
    pa->callOut(); // Kutsuu Dogin versiota!

    return 0;
}
