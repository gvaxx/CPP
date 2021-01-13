#include "ChainSaw.hpp"

ChainSaw::ChainSaw()
: AWeapon("Chain Saw", 5, 30) {}

ChainSaw::ChainSaw(ChainSaw const &src)
: AWeapon("Chain Saw", 5, 30)
{(void)src;}

ChainSaw &ChainSaw::operator=(ChainSaw const &rhs)
{
    this->setName(rhs.getName());
    this->setAPCost(rhs.getAPCost());
    this->setDamage(rhs.getDamage());

    return (*this);
}

ChainSaw::~ChainSaw() {}

void    ChainSaw::attack() const
{
    std::cout << "* Vzhhhh!!! *" << std::endl;
}