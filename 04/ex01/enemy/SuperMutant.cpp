#include "SuperMutant.hpp"

SuperMutant::SuperMutant():Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant( const SuperMutant & src )
{
	this->_hp = src._hp;
	this->_type = src._type;

}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant &				SuperMutant::operator=( SuperMutant const & rhs )
{
	this->_hp = rhs._hp;
	this->_type = rhs._type;

	return *this;
}

void SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}