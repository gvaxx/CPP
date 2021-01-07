#include "Peon.hpp"

Peon::Peon()
{
}

Peon::Peon( const Peon & src )
{
    this->_name = src._name;

}

Peon::Peon(std::string name ):Victim(name)
{
    this->_name = name;

    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

Peon &				Peon::operator=( Peon const & rhs )
{
    this->_name = rhs._name;

    return *this;
}

std::string Peon::getName() const
{
    return this->_name;
}

void        Peon::getPolymorphed(void) const
{
    std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}
