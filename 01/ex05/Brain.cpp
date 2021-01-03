/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 21:35:41 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/03 23:41:28 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
# include <iostream>

Brain::Brain()
{
}

Brain::~Brain()
{
}

std::string Brain::identify(void) const
{
	std::stringstream buffer;
	buffer << this;
	return (buffer.str());
}