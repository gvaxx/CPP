/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 21:35:36 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/03 21:37:28 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <sstream>
# include <iomanip>
# include <string>

class Brain
{
public:
	Brain();
	~Brain();

	std::string identify(void) const;
	void		setAddress(void);
private:
	std::string _address;
};

#endif