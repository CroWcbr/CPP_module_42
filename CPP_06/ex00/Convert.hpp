#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <string>
# include <iostream>
# include <math.h>
# include <climits>

class Convert
{
private:
	std::string _input;
	Convert();
	bool	chekType( std::string str );
	Convert( const Convert& origin);
	Convert& operator=(const Convert& origin);	
public:
	Convert( char *argv );
	~Convert();

	char	toChar( void ) const;
	float	toFloat( void ) const;
	int		toInt( void ) const;
	double	toDouble( void ) const;

	void	print_all( void );
	void	print_char( void );	
	void	print_int( void );
	void	print_float( void );
	void	print_double( void );

	class WrongInput: public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};

#endif
