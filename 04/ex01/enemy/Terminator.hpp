#ifndef TERMINATOR_HPP
# define TERMINATOR_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class Terminator: public Enemy
{
	public:
		Terminator();
		Terminator( Terminator const & src );
		Terminator &	operator=( Terminator const & rhs );

		virtual ~Terminator();

		void			takeDamage(int damage);
};

#endif