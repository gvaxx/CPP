#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine
{

	public:
		AssaultTerminator();
		AssaultTerminator( AssaultTerminator const & src );
		~AssaultTerminator();

		ISpaceMarine*			clone() const;
		void					battleCry() const;
		void					rangedAttack() const;
		void					meleeAttack() const;

		AssaultTerminator &		operator=( AssaultTerminator const & rhs );
};

#endif