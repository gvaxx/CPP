/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 17:16:34 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/06 17:16:35 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	std::cout << "Ninja in leafs... " << std::endl;
}

NinjaTrap::NinjaTrap( std::string name )
{
	std::cout << "Shhhh, i'm i'm ninja. My name is " << name << "...." << std::endl;

	this->_name = name;
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamagePoints = 60;
	this->_rangedAttackDamagePoints = 5;
	this->_armourDamageReductionPoints = 0;
	return ;
}

NinjaTrap::NinjaTrap( const NinjaTrap & src )
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

NinjaTrap::~NinjaTrap()
{
	std::cout << "Even ninja can die..." << std::endl;
}

NinjaTrap &				NinjaTrap::operator=( NinjaTrap const & rhs )
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


void			NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << "NinjaTrap " << this->_name << " attacks " << target << " at range. It deals " << this->_rangedAttackDamagePoints << " points of damage!" << std::endl;

}

void			NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << "NinjaTrap " << this->_name << " attacks " << target << " at melee. It deals " << this->_meleeAttackDamagePoints << " points of damage!" << std::endl;
}

void			NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
	(void) trap;

	std::cout << "Arrigato brother..." << std::endl;
}

void			NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
	(void) trap;
	std::cout << "Clap, clap? Is that all you can do??" << std::endl;
}

void			NinjaTrap::ninjaShoebox(FragTrap &trap)
{
	std::cout << "Show me the power of random!!!" << std::endl;
	trap.vaulthunter_dot_exe("anybody");
}

void			NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
	std::cout << "We have a newcomer!" << std::endl;
	trap.challengeNewcomer();
}