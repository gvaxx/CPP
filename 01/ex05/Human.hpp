#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class Human
{
private:
	Brain _brain;
public:
	Human();
	~Human();

	Brain	&getBrain(void);
	std::string	identify(void) const;
};

#endif