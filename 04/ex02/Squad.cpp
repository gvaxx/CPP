#include "Squad.hpp"

Squad::Squad(): _count(0), _units(nullptr)
{
}

Squad::Squad( const Squad & src ): _count(0), _units(nullptr)
{
	for(int i = 0; i < src.getCount(); i++)
		this->push(this->getUnit(i)->clone());
}

Squad::~Squad()
{
	this->_killUnits();
}

int				Squad::getCount() const
{
	return this->_count;
}

ISpaceMarine*	Squad::getUnit(int index) const
{
	if(index > this->_count - 1 || index < 0)
	{
		return nullptr;
	}
	return this->_units[index];
}

int				Squad::push(ISpaceMarine* unit)
{
	ISpaceMarine **temp;

	if(unit && !this->_inSquad(unit))
	{
		temp = new ISpaceMarine*[this->_count + 1];
		if(this->_units)
		{
			this->_cpySquad(temp, this->_units);
			delete [] this->_units;
		}
		this->_units = temp;
		this->_units[this->_count] = unit;
		this->_count += 1;
	}
	return this->_count;
}

Squad &				Squad::operator=( Squad const & rhs )
{
	this->_count = 0;
	this->_units = nullptr;
	for(int i = 0; i < rhs.getCount(); i++)
		this->push(this->getUnit(i)->clone());
	return *this;
}

void				Squad::_cpySquad(ISpaceMarine** dest, ISpaceMarine** src)
{
	for (int i = 0; i < this->_count; i++)
		dest[i] = src[i];
}

bool				Squad::_inSquad(ISpaceMarine* unit)
{
	for (int i = 0; i < this->_count; i++)
		if(this->_units[i] == unit)
			return true;
	return false;
}

void				Squad::_killUnits()
{
	for (int i = 0; i < this->_count; i++)
	{
		delete this->_units[i];
	}
	delete this->_units;
}
