/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 17:10:17 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/06 17:18:07 by mcaptain         ###   ########.fr       */
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
};

#endif /* ******************************************************** SCAVTRAP_H */