/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 20:59:05 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/03 21:00:28 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
    this->_type = "default";
    return;
}

ZombieEvent::~ZombieEvent(void)
{
    return;
}

void    ZombieEvent::setZombieType(std::string type)
{
    this->_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    return new Zombie(name, this->_type);
}

