#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanA
{
public:
			HumanA(std::string, Weapon&);
			~HumanA(void);
	void	attack(void);

private:
	std::string	_name;
	Weapon&		_weapon;
};

#endif
