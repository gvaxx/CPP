//
// Created by Morrec Captain on 1/2/21.
//

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
    Zombie zomb = Zombie(name_array[rand() % 5], type_array[rand() % 4]);
    zomb.announce();
}

int	main(void) {

    ZombieEvent *zombieEvent = new ZombieEvent();
    Zombie *zom = zombieEvent->newZombie("Ola");
    zom->announce();

    zombieEvent->setZombieType("grey");
    Zombie *zom2 = zombieEvent->newZombie("sasha");
    zom2->announce();
    delete zom;
    delete zom2;
    randomChump();
    randomChump();
    return 0;
}
