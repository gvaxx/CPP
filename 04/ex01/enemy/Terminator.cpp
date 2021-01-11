#include "Terminator.hpp"

Terminator::Terminator():Enemy(200, "Terminator")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

Terminator::~Terminator()
{
	std::cout << "i'll be back" << std::endl;
}

void Terminator::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 10);
}

Terminator::Terminator( Terminator const & src ): Enemy(src.getHP(), src.getType()){}

Terminator &		Terminator::operator=( Terminator const & rhs )
{
    this->setHP(rhs.getHP());
    this->setType(rhs.getType());
    return *this;
}