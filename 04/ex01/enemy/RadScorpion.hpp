#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class RadScorpion: public Enemy
{
	RadScorpion &		operator=( RadScorpion const & rhs );
	RadScorpion( RadScorpion const & src );

	public:

		RadScorpion();
		virtual ~RadScorpion();
};

#endif /* ***************************************************** RADSCORPION_H */