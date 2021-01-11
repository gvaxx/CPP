#ifndef TERMINATOR_HPP
# define TERMINATOR_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class Terminator: public Enemy
{
		Terminator( Terminator const & src );
		Terminator &	operator=( Terminator const & rhs );

	public:
		Terminator();
		virtual ~Terminator();

		void			takeDamage(int damage);
};

#endif