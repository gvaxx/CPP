/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 23:47:49 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/03 23:47:50 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

void Weapon::setType(std::string str)
{
	this->_type = str;
	return ;
}

const std::string& Weapon::getType(void)
{
	return (this->_type);
}
