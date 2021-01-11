#ifndef FOOL_HPP
# define FOOL_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Fool : public Victim
{

	public:

		Fool();
		Fool( Fool const & src );
		virtual ~Fool();
        Fool(std::string name );

		Fool &		operator=( Fool const & rhs );
        void        getPolymorphed(void) const;
        std::string getName() const;
};

std::ostream &			operator<<( std::ostream & o, Fool const & i );

#endif