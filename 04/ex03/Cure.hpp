#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Cure : public AMateria
{

	public:
		Cure();
		Cure( Cure const & src );
		virtual ~Cure();

		Cure &		operator=( Cure const & rhs );

		std::string const &	getType() const;
		AMateria*			clone() const;
		void				use(ICharacter& target);
};

#endif