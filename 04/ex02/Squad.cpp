#include "Squad.hpp"

Squad::Squad(): _count(0), _units(NULL)
{
}

Squad::Squad( const Squad & src ): _count(0), _units(NULL)
{
	for(int i = 0; i < src.getCount(); i++)
	    if(src.getUnit(i))
            this->push(src.getUnit(i)->clone());
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
		return NULL;
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
    this->_killUnits();
    this->_count = 0;
	this->_units = NULL;
	for(int i = 0; i < rhs.getCount(); i++)
		this->push(rhs.getUnit(i)->clone());
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
