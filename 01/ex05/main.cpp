//
// Created by Morrec Captain on 1/2/21.
//

#include "Brain.hpp"
#include "Human.hpp"
#include <iostream>

int
main(void)
{
    Human bob;

    std::cout << bob.getBrain().identify() << std::endl;
    std::cout << bob.identify() << std::endl;
    return (0);
}
