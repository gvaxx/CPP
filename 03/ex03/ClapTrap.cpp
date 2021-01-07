/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 13:58:52 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/06 16:05:40 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Clap, clap, I'm alive!" << std::endl;
}

ClapTrap::ClapTrap( std::string name)
{
	this->_name = name;
	this->_maxHitPoints = 100;
	this->_hitPoints = 100;
	this->_armourDamageReductionPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamagePoints = 100;
	this->_rangedAttackDamagePoints = 100;
	std::cout << "Clap, clap, I'm " << name << "!" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	std::cout << "Clap, clap, I'm copying!" << std::endl;
	
	this->_name = src._name;
	this->_maxHitPoints = src._maxHitPoints;
	this->_hitPoints = src._hitPoints;
	this->_armourDamageReductionPoints = src._armourDamageReductionPoints;
	this->_energyPoints = src._energyPoints;
	this->_maxEnergyPoints = src._maxEnergyPoints;
	this->_level = src._level;
	this->_meleeAttackDamagePoints = src._meleeAttackDamagePoints;
	this->_rangedAttackDamagePoints = src._rangedAttackDamagePoints;
	this->_armourDamageReductionPoints = src._armourDamageReductionPoints;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Clap, clap, I'm dead!" << std::endl;
}

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
	std::cout << "Clap, clap, I'm copying!" << std::endl;
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

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount - this->_armourDamageReductionPoints >= this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints = this->_hitPoints - (amount - this->_armourDamageReductionPoints);
	std::cout << "Holy gears! " << this->_name << " take " << amount - this->_armourDamageReductionPoints << " point of damage. His hp now is " << this->_hitPoints << " points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (amount + this->_hitPoints >= this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	else
		this->_hitPoints = amount + this->_hitPoints;
	std::cout << "Sweet life juice! " << this->_name << " take heal on " << amount << " points. His hp now is " << this->_hitPoints << " points!" << std::endl;
}
