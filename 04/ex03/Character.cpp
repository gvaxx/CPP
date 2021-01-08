#include "Character.hpp"

Character::Character(std::string const &name):
	_name(name), _count(0)
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = nullptr;
}

Character::Character(Character const &src):
	_name(src._name), _count(0)
{
	for (int i = 0; i < src._count; i++)
		this->equip(src._materia[i]->clone());

	for (int i = this->_count; i < 4; i++)
		this->_materia[i] = nullptr;
}

Character::~Character()
{
	this->_deleteMateria();
}

Character &Character::operator=(Character const &rhs)
{
	this->_name = rhs._name;

	this->_deleteMateria();
	this->_count = 0;

	for (int i = 0; i < rhs._count; i++)
		this->equip(rhs._materia[i]->clone());

	for (int i = this->_count; i < 4; i++)
		this->_materia[i] = nullptr;
	return (*this);
}

std::string const &Character::getName(void) const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	if (this->_count == 4 || m == nullptr)
		return ;

	for (int i = 0; i < this->_count; i++)
		if (this->_materia[i] == m)
			return ;

	this->_materia[this->_count] = m;
	this->_count += 1;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= this->_count || this->_materia[idx] == nullptr)
		return ;
	for (int i = idx; i < 3; i++)
	{
		this->_materia[i] = this->_materia[i + 1];
		this->_materia[i + 1] = nullptr;
	}
	this->_count--;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= this->_count || this->_materia[idx] == nullptr)
		return ;
	this->_materia[idx]->use(target);
}

void	Character::_deleteMateria()
{
	for (int i = 0; i < this->_count; i++)
		delete this->_materia[i];
}