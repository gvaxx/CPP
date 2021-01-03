/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 21:35:25 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/03 23:42:00 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class Human
{
private:
	Brain _brain;
public:
	Human();
	~Human();

	Brain	&getBrain(void);
	std::string	identify(void) const;
};

#endif