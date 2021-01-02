//
// Created by Morrec Captain on 1/2/21.
//

#include "Pony.hpp"


Pony::Pony(void)
{
    this->name = "default";
    this->color = "default";
    this->age = 1;
    return ;
}

Pony::~Pony(void)
{
    std::cout << "Your pony " << this->name << " destroyed" << std::endl;
    return ;
}

void    Pony::setPonyName(std::string name)
{
    this->name = name;
}

void    Pony::setPonyColor(std::string color)
{
    this->color = color;
}

void    Pony::setPonyAge(int age)
{
    this->age = age;
}