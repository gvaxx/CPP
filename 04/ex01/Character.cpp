#include "Character.hpp"

Character::Character()
{
}

Character::Character( const Character & src )
{
	this->_ap = src._ap;
	this->_name = src._name;
	this->_weapon = src._weapon;
}

Character::Character( std::string const &name ) : _name(name), _ap(40), _weapon(nullptr)
{
}

Character::~Character()
{
}

Character &				Character::operator=( Character const & rhs )
{
	this->_ap = rhs._ap;
	this->_name = rhs._name;
	this->_weapon = rhs._weapon;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	o << "me has "<< i.getAP() << " AP and ";
	if(i.getWeapon())
		o << "wields a " << i.getWeapon()->getName();
	else
		o << "is unarmed";
	o << std::endl;
	return o;
}


int Character::getAP() const
{
	return this->_ap;
}

std::string Character::getName() const
{
	return this->_name;
}

AWeapon *Character::getWeapon() const
{
	return this->_weapon;
}

void Character::recoverAP()
{
	if(this->_ap + 10 > 40)
		this->_ap = 40;
	else
		this->_ap += 10;
}

void Character::equip(AWeapon* weapon)
{
	this->_weapon = weapon;
}

void Character::attack(Enemy* enemy)
{
	if (enemy
		&& this->_weapon
		&& this->_weapon->getAPCost() <= this->_ap)
	{
		this->_ap -= this->_weapon->getAPCost();
		enemy->takeDamage(this->_weapon->getDamage());
		std::cout << "me attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
		this->_weapon->attack();
		if (enemy->getHP() == 0)
			delete enemy;
	}
}