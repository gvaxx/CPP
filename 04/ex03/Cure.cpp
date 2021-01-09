#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {}

Cure::Cure( const Cure & src ): AMateria("cure")
{
    AMateria::setXP(src.getXP());
}

Cure::~Cure(){}

Cure &		Cure::operator=( Cure const & rhs )
{
    AMateria::setXP(rhs.getXP());
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