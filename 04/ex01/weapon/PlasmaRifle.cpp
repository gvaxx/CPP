#include"PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21){}

PlasmaRifle::~PlasmaRifle() {}


PlasmaRifle::PlasmaRifle(PlasmaRifle const &src)
: AWeapon("Plasma Rifle", 5, 21)
{(void)src;}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &rhs)
{
    this->setName(rhs.getName());
    this->setAPCost(rhs.getAPCost());
    this->setDamage(rhs.getDamage());

    return (*this);
}

void    PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}