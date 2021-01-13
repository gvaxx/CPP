#include "SuperMutant.hpp"

SuperMutant::SuperMutant():Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}

SuperMutant::SuperMutant( SuperMutant const & src )
: Enemy(src.getHP(), src.getType()){}

SuperMutant &		SuperMutant::operator=( SuperMutant const & rhs )
{
    this->setHP(rhs.getHP());
    this->setType(rhs.getType());
    return *this;
}