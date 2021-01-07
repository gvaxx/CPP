/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 17:00:28 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/06 17:00:29 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>

class ScavTrap
{

	public:

		ScavTrap();
		ScavTrap( ScavTrap const & src );
		ScavTrap(std::string name);
		~ScavTrap();

		ScavTrap &		operator=( ScavTrap const & rhs );

		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);

		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			challengeNewcomer(void);

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

#endif /* ******************************************************** SCAVTRAP_H */