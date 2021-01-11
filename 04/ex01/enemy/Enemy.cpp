#include "Enemy.hpp"

Enemy::Enemy()
{
}

Enemy::~Enemy(){}

Enemy::Enemy(unsigned int hp, std::string const & type): _hp(hp), _type(type){}

Enemy::Enemy( const Enemy & src )
{
	this->_hp = src._hp;
	this->_type = src._type;
}

Enemy &			Enemy::operator=( Enemy const & rhs )
{
	this->_hp = rhs._hp;
	this->_type = rhs._type;
	return *this;
}

std::string		Enemy::getType() const
{
	return this->_type;
}

int				Enemy::getHP() const
{
	return this->_hp;
}

void		    Enemy::setType(std::string type)
{
    this->_type = type;
}

void            Enemy::setHP(unsigned int hp)
{
    this->_hp = hp;
}

void			Enemy::takeDamage(int damage)
{
	if (damage > 0)
	{
		if (this->_hp - damage < 0)
			this->_hp = 0;
		else
			this->_hp = this->_hp - damage;
	}
}

