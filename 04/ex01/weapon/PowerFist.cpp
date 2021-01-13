#include"PowerFist.hpp"

PowerFist::PowerFist()
: AWeapon("Power Fist", 8, 50){}

PowerFist::PowerFist(PowerFist const &src)
: AWeapon("Power Fist", 8, 50)
{(void)src;}


PowerFist &PowerFist::operator=(PowerFist const &rhs)
{
    this->setName(rhs.getName());
    this->setAPCost(rhs.getAPCost());
    this->setDamage(rhs.getDamage());

    return (*this);
}

PowerFist::~PowerFist() {}

void    PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}