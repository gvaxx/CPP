#include "Fool.hpp"

Fool::Fool()
{
}

Fool::Fool( const Fool & src )
{
    this->_name = src._name;

}

Fool::Fool(std::string name ):Victim(name)
{
    std::cout << "Honk honk." << std::endl;
}

Fool::~Fool()
{
    std::cout << "Bugaggaga" << std::endl;
}

Fool &				Fool::operator=( Fool const & rhs )
{
    this->_name = rhs._name;

    return *this;
}

std::string Fool::getName() const
{
    return this->_name;
}

void        Fool::getPolymorphed(void) const
{
    std::cout << this->_name << " has been turned into a prince!" << std::endl;
}
