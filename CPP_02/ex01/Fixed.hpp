#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <math.h>

class Fixed
{
private:
	int					_value;
	static const int	_nb_bits = 8;
public:
	Fixed();
	Fixed( int const value );
	Fixed(float const value);
	~Fixed();
	Fixed(const Fixed &fixed);
	Fixed& operator=( Fixed const &fixed );
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat ( void ) const;
	int toInt( void ) const;
};

std::ostream& operator<<(std::ostream &out, const Fixed& fixed);

#endif
