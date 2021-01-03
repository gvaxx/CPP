/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 21:35:30 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/03 23:43:36 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
	return ;
}

Human::~Human()
{
	return ;
}

Brain &Human::getBrain(void)
{
	return (this->_brain);
}

std::string Human::identify(void) const
{
	return (this->_brain.identify());
}