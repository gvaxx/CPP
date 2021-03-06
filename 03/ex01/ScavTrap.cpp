/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 17:00:25 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/06 17:04:05 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "It is defaulr SC4V-TP!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Hi, i'm last version of SC4V-TP. But you can call me " << name << "!" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAttackDamagePoints = 20;
	this->_rangedAttackDamagePoints = 15;
	this->_armourDamageReductionPoints = 3;
	return ;
}

ScavTrap::ScavTrap( const ScavTrap & src )
{
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_maxHitPoints = src._maxHitPoints;
	this->_energyPoints = src._energyPoints;
	this->_maxEnergyPoints = src._maxEnergyPoints;
	this->_level = src._level;
	this->_meleeAttackDamagePoints = src._meleeAttackDamagePoints;
	this->_rangedAttackDamagePoints = src._rangedAttackDamagePoints;
	this->_armourDamageReductionPoints = src._armourDamageReductionPoints;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->_name << " say: I'm really dead."<< std::endl;
}

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_maxHitPoints = rhs._maxHitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_maxEnergyPoints = rhs._maxEnergyPoints;
	this->_level = rhs._level;
	this->_meleeAttackDamagePoints = rhs._meleeAttackDamagePoints;
	this->_rangedAttackDamagePoints = rhs._rangedAttackDamagePoints;
	this->_armourDamageReductionPoints = rhs._armourDamageReductionPoints;
	return (*this);
}

void ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << this->_name << " attacks " << target << " at range. It deals " << this->_rangedAttackDamagePoints << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << this->_name << " attacks " << target << " at melee. It deals " << this->_meleeAttackDamagePoints << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (amount - this->_armourDamageReductionPoints >= this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints = this->_hitPoints - (amount - this->_armourDamageReductionPoints);
	std::cout << "Holy gears! " << this->_name << " take " << amount - this->_armourDamageReductionPoints << " point of damage. His hp now is " << this->_hitPoints << " points!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (amount + this->_hitPoints >= this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	else
		this->_hitPoints = amount + this->_hitPoints;
	std::cout << "Sweet life juice! " << this->_name << " take heal on " << amount << " points. His hp now is " << this->_hitPoints << " points!" << std::endl;
}

void ScavTrap::challengeNewcomer(void)
{
	std::cout << "Hi newcommer your challenge is:" << std::endl;
	switch (rand() % 5) {
		case 0 :
			std::cout << "Do you speak english?" << std::endl;
			break;
		case 1 :
			std::cout << "Say my name!" << std::endl;
			break;
		case 2 :
			std::cout << "Sing Happy New Year!" << std::endl;
			break;
		case 3 :
			std::cout << "Tell your Dark Secret?" << std::endl;
			break;
		case 4 :
			std::cout << "Do you know Tyler Durden?" << std::endl;
			break;
	}
}