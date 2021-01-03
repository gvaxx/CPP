/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 23:47:03 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/03 23:55:43 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	return ;
}

void HumanB::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType();
	std::cout << std::endl;
	return ;
}
