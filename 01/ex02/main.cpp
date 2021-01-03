/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 20:52:13 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/03 21:01:15 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

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

void randomChump()
{
    Zombie zomb = Zombie(
        name_array[rand() % 5],
        type_array[rand() % 4]
    );

    zomb.announce();
}

int	main(void) {

    ZombieEvent *zombieEvent = new ZombieEvent();
    Zombie *zomb = zombieEvent->newZombie("Ola");
    zomb->announce();
    delete zomb;

    zombieEvent->setZombieType("grey");
    Zombie *zomb2 = zombieEvent->newZombie("Sasha");
    zomb2->announce();
    delete zomb2;

    randomChump();
    randomChump();

    return 0;
}
