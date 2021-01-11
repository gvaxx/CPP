#include "RadScorpion.hpp"

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}
