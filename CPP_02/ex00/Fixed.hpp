#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
private:
	int	_value;
	static const int _nb_bits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &fixed);
	Fixed& operator=(Fixed const &value);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif
