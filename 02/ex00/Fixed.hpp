/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 15:24:50 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/05 15:24:51 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
public:

						Fixed();
						Fixed( Fixed const & src );
						~Fixed();

	Fixed &				operator=( Fixed const & rhs );
	int					getRawBits( void ) const;
	void				setRawBits( int const raw );
	float				toFloat( void ) const;
	int					toInt( void ) const;
private:
	int					fix_value;
	static const int	frac_bits = 8;
};

#endif