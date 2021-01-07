/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 17:16:50 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/06 17:16:51 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:

		SuperTrap();
		SuperTrap( SuperTrap const & src );
		~SuperTrap();
		SuperTrap( std::string name );

		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);

		SuperTrap &		operator=( SuperTrap const & rhs );

};

#endif