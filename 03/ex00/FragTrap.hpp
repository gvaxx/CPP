#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>

class FragTrap
{

	public:

		FragTrap();
		FragTrap( std::string);
		~FragTrap();

		FragTrap &		operator=( FragTrap const & rhs );
		void			rangedAttack(std::string const & target);

	private:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_maxHitPoints;
		unsigned int	_energyPoints;
		unsigned int	_maxEnergyPoints;
		unsigned int	_level;
		unsigned int	_meleeAttackDamagePoints;
		unsigned int	_rangedAttackDamagePoints;
		unsigned int	_armourDamageReductionPoints;
};

std::ostream &			operator<<( std::ostream & o, FragTrap const & i );

#endif /* ******************************************************** FRAGTRAP_H */