#include "ChainSaw.hpp"


ChainSaw::ChainSaw()
: AWeapon("Chain Saw", 5, 30) {}

ChainSaw::~ChainSaw() {}

void    ChainSaw::attack() const
{
    std::cout << "* Vzhhhh!!! *" << std::endl;
}