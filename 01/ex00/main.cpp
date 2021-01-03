/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 20:47:48 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/03 20:47:49 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include "Pony.hpp"

void ponyOnTheHeap(std::string name, std::string color, int age)
{
	Pony *pony = new Pony();
	pony->setPonyName(name);
	pony->setPonyColor(color);
	pony->setPonyAge(age);
	delete pony;
}

void ponyOnTheStack(std::string name, std::string color, int age)
{
	Pony pony = Pony();
	pony.setPonyName(name);
	pony.setPonyColor(color);
	pony.setPonyAge(age);
}

int	main(void)
{
	ponyOnTheHeap("Lavarage", "white", 15);
	ponyOnTheStack("Damage", "black", 13);
	return 0;
}
