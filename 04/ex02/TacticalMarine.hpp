#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine
{

	public:

		TacticalMarine();
		TacticalMarine( TacticalMarine const & src );
		~TacticalMarine();

		ISpaceMarine*			clone() const;
		void					battleCry() const;
		void					rangedAttack() const;
		void					meleeAttack() const;

		TacticalMarine &		operator=( TacticalMarine const & rhs );
};

#endif