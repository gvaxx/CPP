#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
public:

						Fixed();
						Fixed( Fixed const & src );
						Fixed( const int value );
						Fixed( const float value );
						~Fixed();

	Fixed &				operator=( Fixed const & rhs );
	int					getRawBits( void ) const;
	void				setRawBits( int const raw );
	int					toInt(void) const;
	float				toFloat(void) const;
private:
	int					fix_value;
	static const int	frac_bits = 8;
};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif