/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 11:59:48 by jaleman           #+#    #+#             */
/*   Updated: 2021/01/18 15:18:36 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base *generate(void)
{
	int r = rand() % 3;

	if (r == 0)
	{
		std::cout << "A" << std::endl;
		return (new A);
	}
	if (r == 1)
	{
		std::cout << "B" << std::endl;
		return (new B);
	}
	std::cout << "C" << std::endl;
	return (new C);
}

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "C" << std::endl;
    else
	    std::cout << "Undefined type" << std::endl;
}

void identify_from_reference(Base &p)
{
	identify_from_pointer(&p);
}

int
main(void)
{
    srand(time(NULL));
    Base    *ptr = generate();

    identify_from_pointer(ptr);
    identify_from_reference(*ptr);

    return (0);
}
