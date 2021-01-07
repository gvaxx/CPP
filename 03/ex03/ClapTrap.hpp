/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 17:12:30 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/06 17:12:31 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:
		ClapTrap();
		ClapTrap( ClapTrap const & src );
		~ClapTrap();
		ClapTrap( std::string name);

		ClapTrap &		operator=( ClapTrap const & rhs );

		void			beRepaired(unsigned int amount);
		void			takeDamage(unsigned int amount);

	protected:

		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_maxHitPoints;
		unsigned int	_armourDamageReductionPoints;
		unsigned int	_energyPoints;
		unsigned int	_maxEnergyPoints;
		unsigned int	_level;
		unsigned int	_meleeAttackDamagePoints;
		unsigned int	_rangedAttackDamagePoints;


};
#endif /* ******************************************************** CLAPTRAP_H */