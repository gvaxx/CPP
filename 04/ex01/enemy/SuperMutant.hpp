#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class SuperMutant: public Enemy
{

	public:
		SuperMutant();
		SuperMutant &	operator=( SuperMutant const & rhs );
		SuperMutant( SuperMutant const & src );
		virtual ~SuperMutant();

		void			takeDamage(int damage);
};

#endif