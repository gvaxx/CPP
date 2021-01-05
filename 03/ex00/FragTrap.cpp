#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap()
{
}

FragTrap::FragTrap( std::string name)
{

	std::cout << "Allow me to introduce myself - I am FG4P-TP, but friends call me" << name << "!" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamagePoints = 30;
	this->_rangedAttackDamagePoints = 20;
	this->_armourDamageReductionPoints = 5;
}

FragTrap::~FragTrap()
{
	std::cout << this->_name << " say:Argh arghargh death gurgle gurglegurgle urgh... death."<< std::endl;
}

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, FragTrap const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout <<"FR4G-TP" << this->_name "attacks" <target> at range, causing <damage> points of damage!" << std::endl;

	"FR4G-TP <name> attacks <target> at range, causing <damage> points of damage!"
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */