#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Ice : public AMateria
{

	public:
		Ice();
		Ice( Ice const & src );
		virtual ~Ice();

		Ice &		operator=( Ice const & rhs );

		std::string const &	getType() const;
		AMateria*			clone() const;
		void				use(ICharacter& target);
};

#endif