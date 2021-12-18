#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << " " << this << std::endl;
	this->_value = 0;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << " " << this << std::endl;
	this->_value = value << this->_nb_bits;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << " " << this << std::endl;
	this->_value = (int)roundf(value * (1 << this->_nb_bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << " " << this << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;	
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &fixed)
		return (*this);
	_value = fixed.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

int Fixed::toInt(void) const
{
	if (_value < 0)
		return -((int)-this->_value >> this->_nb_bits);
	return ((int)this->_value >> this->_nb_bits);
}

float Fixed::toFloat(void) const
{
	return ((float)this->_value / (float)(1 << this->_nb_bits));
}

std::ostream& operator<<(std::ostream &out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}

Fixed& Fixed::operator++( void )
{
	this->_value++;
	return (*this);
}

Fixed Fixed::operator++( int )
{
	Fixed temp;
	temp.setRawBits(this->_value++);
	return (temp);
}

Fixed& Fixed::operator--( void )
{
	this->_value--;
	return (*this);
}

Fixed Fixed::operator--( int )
{
	Fixed temp;
	temp.setRawBits(this->_value--);
	return (temp);
}

bool Fixed::operator>( Fixed const &fixed ) const
{
	return(this->_value > fixed.getRawBits());
}

bool Fixed::operator<( Fixed const &fixed ) const
{
	return(this->_value < fixed.getRawBits());
}

bool Fixed::operator>=( Fixed const &fixed ) const
{
	return(this->_value >= fixed.getRawBits());
}

bool Fixed::operator<=( Fixed const &fixed ) const
{
	return(this->_value <= fixed.getRawBits());
}

bool Fixed::operator==( Fixed const &fixed ) const
{
	return(this->_value == fixed.getRawBits());
}

bool Fixed::operator!=( Fixed const &fixed ) const
{
	return(this->_value != fixed.getRawBits());
}

Fixed Fixed::operator+( Fixed const &fixed ) const
{
	return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed Fixed::operator-( Fixed const &fixed ) const
{ 
	return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed Fixed::operator*( Fixed const &fixed ) const
{
	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed Fixed::operator/( Fixed const &fixed ) const
{
	return (Fixed(this->toFloat() / fixed.toFloat()));
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a <= b)
		return(a);
	return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a >= b)
		return(a);
	return (b);
}

const Fixed& Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a <= b)
		return(a);
	return (b);
}

const Fixed& Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a >= b)
		return(a);
	return (b);
}
