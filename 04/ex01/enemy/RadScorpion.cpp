#include "RadScorpion.hpp"

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion( RadScorpion const & src )
: Enemy(src.getHP(), src.getType()){}

RadScorpion &		RadScorpion::operator=( RadScorpion const & rhs )
{
    this->setHP(rhs.getHP());
    this->setType(rhs.getType());
    return *this;
}