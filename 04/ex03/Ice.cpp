#include "Ice.hpp"

Ice::Ice(): AMateria("ice"){}

Ice::Ice( const Ice & src ): AMateria("ice")
{
	this->_xp = src._xp;
}

Ice::~Ice(){}

Ice &		Ice::operator=( Ice const & rhs )
{
	this->_xp = rhs._xp;
	return *this;
}

AMateria*	Ice::clone() const
{
	return (new Ice(*this));
}

void		Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}