/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 17:12:38 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/06 17:14:34 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : _vaulthunterDamagePoints(50)
{
	std::cout << "It is default FG4P-TP!" << std::endl;
}

FragTrap::FragTrap( FragTrap const & src )
{
	std::cout << "I'm copy myself!" << std::endl;

	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_maxHitPoints = src._maxHitPoints;
	this->_energyPoints = src._energyPoints;
	this->_maxEnergyPoints = src._maxEnergyPoints;
	this->_level = src._level;
	this->_meleeAttackDamagePoints = src._meleeAttackDamagePoints;
	this->_rangedAttackDamagePoints = src._rangedAttackDamagePoints;
	this->_armourDamageReductionPoints = src._armourDamageReductionPoints;
	this->_vaulthunterDamagePoints = src._vaulthunterDamagePoints;
}

FragTrap::FragTrap( std::string name)
{
	std::cout << "Allow me to introduce myself - I am FG4P-TP, but friends call me " << name << "!" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamagePoints = 30;
	this->_rangedAttackDamagePoints = 20;
	this->_armourDamageReductionPoints = 5;
	this->_vaulthunterDamagePoints = 50;
}

FragTrap::~FragTrap()
{
	std::cout << this->_name << " say: Crap happens."<< std::endl;
}

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
{
	std::cout << "I'm copy myself!" << std::endl;

	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_maxHitPoints = rhs._maxHitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_maxEnergyPoints = rhs._maxEnergyPoints;
	this->_level = rhs._level;
	this->_meleeAttackDamagePoints = rhs._meleeAttackDamagePoints;
	this->_rangedAttackDamagePoints = rhs._rangedAttackDamagePoints;
	this->_armourDamageReductionPoints = rhs._armourDamageReductionPoints;
	this->_vaulthunterDamagePoints = rhs._vaulthunterDamagePoints;
	return *this;
}

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout <<"FR4G-TP " << this->_name << " attacks " << target << " at range. It deals " << this->_rangedAttackDamagePoints << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout <<"FR4G-TP " << this->_name << " attacks " << target << " at melee. It deals " << this->_meleeAttackDamagePoints << " points of damage!" << std::endl;
}

void			FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->_energyPoints < 25) {
		std::cout << "Hey, I don't have enough energy!" << std::endl;
	} else {
		this->_energyPoints -= 25;
		std::cout << "This time it'll be awesome, I promise!" << std::endl;
		switch (rand() % 5) {
			case 0 :
				this->fatAssAttack(target);
				break;
			case 1 :
				this->hotCatAttack(target);
				break;
			case 2 :
				this->iceBeeAttack(target);
				break;
			case 3 :
				this->pizzaAttack(target);
				break;
			case 4 :
				this->poopAttack(target);
				break;
		}
	}
}

void			FragTrap::fatAssAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " using fat ass. It deals " << this->_vaulthunterDamagePoints << " points of damage!" << std::endl;
}

void			FragTrap::iceBeeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " using ice bees. It deals " << this->_vaulthunterDamagePoints << " points of damage!" << std::endl;
}

void			FragTrap::hotCatAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " using hot cats. It deals " << this->_vaulthunterDamagePoints << " points of damage!" << std::endl;
}

void			FragTrap::poopAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " using poop. It deals " << this->_vaulthunterDamagePoints << " points of damage!" << std::endl;
}

void			FragTrap::pizzaAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " using pizza. It deals " << this->_vaulthunterDamagePoints << " points of damage!" << std::endl;
}