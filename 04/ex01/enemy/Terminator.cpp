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