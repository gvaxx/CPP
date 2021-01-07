/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 17:12:12 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/06 17:12:13 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{

	public:

		NinjaTrap();
		NinjaTrap( NinjaTrap const & src );
		NinjaTrap( std::string name );
		~NinjaTrap();

		NinjaTrap &		operator=( NinjaTrap const & rhs );
		void			ninjaShoebox(NinjaTrap &trap);
		void			ninjaShoebox(ClapTrap &trap);
		void			ninjaShoebox(FragTrap &trap);
		void			ninjaShoebox(ScavTrap &trap);
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
};

#endif