#include "Brain.hpp"

Brain::Brain()
{
}

Brain::~Brain()
{
}

std::string Brain::identify(void) const
{
	std::stringstream buffer;
	buffer << this;
	return (buffer.str());
}