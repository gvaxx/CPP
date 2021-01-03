//
// Created by Morrec Captain on 1/2/21.
//

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
    this->_name = name;

    this->_type = type;
    std::cout << "Zombie " << name << " type of " << type << " was \"born\"" << std::endl ;
    return;
}

Zombie::Zombie()
{
    this->_name = "default";

    this->_type = "default";
    std::cout << "Zombie " << this->_name  << " type of " << this->_type << " was \"born\"" << std::endl ;
    return ;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie " << this->_name << " type of " << this->_type << " really dead" << std::endl;
    return;
}

void Zombie::announce(void)
{
    std::cout << "<" << this->_name << " " << this->_type << "> Braiiiiiiinnnssss..." << std::endl;
}

std::string Zombie::getName(void)
{
    return this->_name;
}

std::string Zombie::getType(void)
{
    return this->_type;
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}

void Zombie::setType(std::string type)
{
    this->_type = type;
}
