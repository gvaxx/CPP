#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
}

Sorcerer::Sorcerer( const Sorcerer & src )
{
    this->_name = src._name;
    this->_title= src._title;
}

Sorcerer::Sorcerer( std::string name, std::string title): _name(name), _title(title)
{
    std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}


Sorcerer &				Sorcerer::operator=( Sorcerer const & rhs )
{

    this->_name = rhs._name;
    this->_title= rhs._title;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Sorcerer const & i )
{
    o << "I am " << i.getName() << ", " << i.getTitle() << ", and I like ponies!" << std::endl;
	return o;
}

std::string Sorcerer::getTitle() const
{
    return this->_title;
}

std::string Sorcerer::getName() const
{
    return this->_name;
}

void Sorcerer::polymorph(Victim const &victim) const
{
    victim.getPolymorphed();
}

