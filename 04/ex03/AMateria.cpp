#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria( const AMateria & src )
{
	this->_type = src._type;
	this->_xp = src._xp;
}

AMateria::AMateria(std::string const & type):_xp(0), _type(type){}

AMateria::~AMateria()
{}

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	this->_type = rhs._type;
	this->_xp = rhs._xp;
	return *this;
}

std::string const &	AMateria::getType() const
{
	return this->_type;
}

unsigned int		AMateria::getXP() const
{
	return this->_xp;
}

void                AMateria::setXP(int xp)
{
    this->_xp = xp;
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	this->_xp += 10;
}