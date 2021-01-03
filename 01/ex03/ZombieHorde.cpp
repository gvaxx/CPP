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


