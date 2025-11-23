#include <iostream>
#include "Chef.h"
#include "ItalianChef.h"

int main()
{
    std::cout << "--- Chef ---" << std::endl;
    Chef c("Gordon Ramsay");
    c.makeSalad();
    c.makeSoup();

    std::cout << "\n--- ItalianChef ---" << std::endl;
    ItalianChef ic("Anthony Bourdain");
    ic.makeSalad();
    ic.makeSoup();
    ic.makePasta();
    std::cout << "Italian chef name: " << ic.getName() << std::endl;

    return 0;
}
