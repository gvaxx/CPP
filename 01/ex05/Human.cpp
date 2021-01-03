
#include "Human.hpp"

Human::Human()
{
	return ;
}

Human::~Human()
{
	return ;
}

Brain &Human::getBrain(void)
{
	return (this->_brain);
}

std::string Human::identify(void) const
{
	return (this->_brain.identify());
}