#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine( const TacticalMarine & src )
{
	(void) src;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

ISpaceMarine*		TacticalMarine::clone() const
{
	std::cout << "clone marine" << std::endl;

	return (new TacticalMarine(*this));
}

void					TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void					TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void					TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}

TacticalMarine &				TacticalMarine::operator=( TacticalMarine const & rhs )
{
	(void) rhs;
	return *this;
}
