#include "Victim.hpp"

Victim::Victim()
{
}

Victim::Victim( const Victim & src )
{
    this->_name = src._name;
}

Victim::Victim(std::string name ) : _name(name)
{
    std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
    std::cout << "Victim  " << this->_name << " just died for no apparent reason!" << std::endl;
}

Victim &				Victim::operator=( Victim const & rhs )
{
    this->_name = rhs._name;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Victim const & i )
{
    o << "I am " << i.getName() << " and I like otters!" << std::endl;

    return o;
}

std::string Victim::getName() const
{
    return this->_name;
}

void        Victim::getPolymorphed(void) const
{
    std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}