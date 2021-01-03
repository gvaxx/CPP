/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 21:21:25 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/03 21:30:17 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"


std::string name_array[] = {
    "Bim",
    "Bom",
    "Bum",
    "Bam",
    "Bem"
};

std::string type_array[] = {
    "rare",
    "medium",
    "well done",
    "coal"
};

ZombieHorde::ZombieHorde(int numbers)
{
    if(numbers < 0)
        throw std::invalid_argument("numbers must be positive");
    else
    {
        this->horde_size = numbers;
        this->horde = new Zombie[this->horde_size];

        for (int i = 0; i < this->horde_size; i++)
        {
            this->horde[i].setName(name_array[rand() % 5]);
            this->horde[i].setType(type_array[rand() % 4]);
        }
    }
    return;
}

void ZombieHorde::announce(void)
{
    for (int i = 0; i < this->horde_size; i++)
        this->horde[i].announce();
}

ZombieHorde::~ZombieHorde(void)
{
    delete [] this->horde;
    return;
}


