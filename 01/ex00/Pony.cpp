/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 20:47:30 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/03 20:47:31 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Pony.hpp"

Pony::Pony(void)
{
	this->name = "default";
	this->color = "default";
	this->age = 1;

	std::cout << "Your pony " << this->name << " was born" << std::endl;
	return ;
}

Pony::~Pony(void)
{
	std::cout << "Your pony " << this->name << " destroyed" << std::endl;
	return ;
}

void	Pony::setPonyName(std::string name)
{
	this->name = name;
}

void	Pony::setPonyColor(std::string color)
{
	this->color = color;
}

void	Pony::setPonyAge(int age)
{
	this->age = age;
}