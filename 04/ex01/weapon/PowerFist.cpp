#include"PowerFist.hpp"

PowerFist::PowerFist(const PowerFist &src)
{
    this->_name = src._name;
    this->_apcost = src._apcost;
    this->_damage = src._damage;
}

PowerFist::PowerFist()
: AWeapon("Power Fist", 8, 50)
{
}

PowerFist::~PowerFist() {
}

PowerFist &PowerFist::operator=(const PowerFist &src)
{
    this->_name = src._name;
    this->_apcost = src._apcost;
    this->_damage = src._damage;

    return *this;
}

void    PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}