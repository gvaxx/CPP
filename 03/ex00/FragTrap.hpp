#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <ctime>
class FragTrap
{

	public:

		FragTrap();
		FragTrap( std::string);
		FragTrap( FragTrap const & src );

		~FragTrap();

		FragTrap &		operator=( FragTrap const & rhs );
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);

		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		void			vaulthunter_dot_exe(std::string const & target);

	private:
		void			fatAssAttack(std::string const & target);
		void			iceBeeAttack(std::string const & target);
		void			hotCatAttack(std::string const & target);
		void			poopAttack(std::string const & target);
		void			pizzaAttack(std::string const & target);

		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_maxHitPoints;
		unsigned int	_energyPoints;
		unsigned int	_maxEnergyPoints;
		unsigned int	_level;
		unsigned int	_meleeAttackDamagePoints;
		unsigned int	_rangedAttackDamagePoints;
		unsigned int	_vaulthunterDamagePoints;
		unsigned int	_armourDamageReductionPoints;
};

#endif /* ******************************************************** FRAGTRAP_HPP */