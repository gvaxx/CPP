#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion( const RadScorpion & src )
{
	this->_hp = src._hp;
	this->_type = src._type;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion &				RadScorpion::operator=( RadScorpion const & rhs )
{
	this->_hp = rhs._hp;
	this->_type = rhs._type;

	return *this;
}
