/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 06:53:37 by jaleman           #+#    #+#             */
/*   Updated: 2021/01/03 15:17:55 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanB
{
public:
	HumanB(std::string name);
	~HumanB(void);
	void		attack();
	void		setWeapon(Weapon &weapon);

private:
	Weapon*		_weapon;
	std::string	_name;
};

#endif
