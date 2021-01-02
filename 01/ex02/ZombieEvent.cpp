//
// Created by Morrec Captain on 1/2/21.
//

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

void ZombieEvent::setZombieType(std::string type)
{
    this->_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    return new Zombie(name, this->_type);
}

