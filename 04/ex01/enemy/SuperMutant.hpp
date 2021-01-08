#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class SuperMutant: public Enemy
{

	public:

		SuperMutant();
		SuperMutant( SuperMutant const & src );
		~SuperMutant();

		SuperMutant &	operator=( SuperMutant const & rhs );
		void			takeDamage(int damage);

	private:

};

std::ostream &			operator<<( std::ostream & o, SuperMutant const & i );

#endif /* ***************************************************** SUPERMUTANT_H */