//
// Created by Morrec Captain on 1/2/21.
//

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

Zombie *ZombieHorde::newRandomZombie()
{
    return new Zombie(name_array[rand() % 5], type_array[rand() % 4]);
}

ZombieHorde::ZombieHorde(int numbers)
{
    if(numbers < 0)
        throw std::invalid_argument("numbers must be positive");
    else
    {
        this->horde = new Zombie[numbers];

        for (int i = 0; i < numbers; i++)
            this->horde[i] = this->newRandomZombie();
    }
    return;
}

ZombieHorde::~ZombieHorde(void)
{
    delete [] this->horde;
    return;
}


