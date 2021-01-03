/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 23:46:51 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/03 23:46:52 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanA
{
public:
			HumanA(std::string, Weapon&);
			~HumanA(void);
	void	attack(void);

private:
	std::string	_name;
	Weapon&		_weapon;
};

#endif
