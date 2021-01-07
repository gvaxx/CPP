/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:03:26 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/06 17:16:02 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <ctime>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

	public:

		FragTrap();
		FragTrap( std::string);
		FragTrap( FragTrap const & src );

		~FragTrap();

		FragTrap &		operator=( FragTrap const & rhs );
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);

		void			vaulthunter_dot_exe(std::string const & target);

	private:
		void			fatAssAttack(std::string const & target);
		void			iceBeeAttack(std::string const & target);
		void			hotCatAttack(std::string const & target);
		void			poopAttack(std::string const & target);
		void			pizzaAttack(std::string const & target);

		unsigned int	_vaulthunterDamagePoints;
};

#endif /* ******************************************************** FRAGTRAP_HPP */