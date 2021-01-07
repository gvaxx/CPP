#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{

	public:

		Victim();
        Victim(std::string name);
		Victim( Victim const & src );
		~Victim();

		Victim &        operator=( Victim const & rhs );
        virtual void    getPolymorphed(void) const;
        std::string     getName() const;

	protected:
        std::string     _name;
};

std::ostream &			operator<<( std::ostream & o, Victim const & i );

#endif