/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 23:47:45 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/03 23:47:46 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
public:
						Weapon(std::string type);
						~Weapon(void);
	void				setType(std::string type);
	const std::string&	getType(void);

private:
	std::string			_type;
};

#endif
