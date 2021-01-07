/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 17:12:19 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/06 17:12:20 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{

	public:

		ScavTrap();
		ScavTrap( ScavTrap const & src );
		ScavTrap(std::string name);
		~ScavTrap();

		ScavTrap &		operator=( ScavTrap const & rhs );

		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);

		void			challengeNewcomer(void);

	private:
		unsigned int	_energyPoints;
		unsigned int	_maxEnergyPoints;
		unsigned int	_level;
		unsigned int	_meleeAttackDamagePoints;
		unsigned int	_rangedAttackDamagePoints;
};

#endif /* ******************************************************** SCAVTRAP_H */