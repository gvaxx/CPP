#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {}

Cure::Cure( const Cure & src ): AMateria("cure")
{
	this->_xp = src._xp;
}

Cure::~Cure(){}

Cure &		Cure::operator=( Cure const & rhs )
{
	this->_xp = rhs._xp;
	return *this;
}

AMateria*	Cure::clone() const
{
	return (new Cure(*this));
}

void		Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals "<< target.getName() << "'s wounds *" << std::endl;
}