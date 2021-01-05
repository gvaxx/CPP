#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fix_value = 0;
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy constructor called" << std::endl;
	this->fix_value = src.getRawBits();
}

Fixed::Fixed(const int value)
{
    this->fix_value = value << frac_bits;
    std::cout << "Int constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const float value)
{
    this->fix_value = roundf(value * (1 << frac_bits));
    std::cout << "Float constructor called" << std::endl;
    return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &			Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	this->fix_value = (rhs.getRawBits());

	return *this;
}

int				Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->fix_value);
}

void			Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fix_value = raw;
}

int				Fixed::toInt(void) const
{
	return this->fix_value >> this->frac_bits;
}

float			Fixed::toFloat(void) const
{
	return (float)this->fix_value / (1 << this->frac_bits);
}

std::ostream &	operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return o;
}