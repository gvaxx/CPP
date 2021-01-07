/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 17:16:48 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/06 17:16:49 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	std::cout << "Who i am? I'm super!" << std::endl;
}

SuperTrap::SuperTrap( const SuperTrap & src )
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

SuperTrap::SuperTrap(std::string name)
{
	std::cout << "Ha ha ha i'm like brick, but super! My name is " << name << "!" << std::endl;

	this->_name = name;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamagePoints = 60;
	this->_rangedAttackDamagePoints = 20;
	this->_armourDamageReductionPoints = 5;
	return ;
}

void			SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void			SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}

SuperTrap::~SuperTrap()
{
	std::cout << "Even super can die" << std::endl;
}


SuperTrap &				SuperTrap::operator=( SuperTrap const & rhs )
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

	return *this;
}
