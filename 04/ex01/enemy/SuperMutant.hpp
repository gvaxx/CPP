#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class SuperMutant: public Enemy
{
		SuperMutant &	operator=( SuperMutant const & rhs );
		SuperMutant( SuperMutant const & src );

	public:
		SuperMutant();
		virtual ~SuperMutant();

		void			takeDamage(int damage);

};

#endif /* ***************************************************** SUPERMUTANT_H */