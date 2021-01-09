#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
class ICharacter;

# include "ICharacter.hpp"

class AMateria
{
	public:
		AMateria();
		AMateria( AMateria const & src );
		virtual ~AMateria();
		AMateria(std::string const & type);

		std::string const &	getType() const;
		unsigned int		getXP() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);

		AMateria &			operator=( AMateria const & rhs );
	private:
        unsigned int		_xp;
    protected:
        std::string			_type;
        void                setXP(int xp);

};

#endif