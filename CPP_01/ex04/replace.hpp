#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <string>
# include <iostream>
# include <fstream>

class Replace
{
private:
	std::ifstream	_input;
	std::ofstream	_output;
	std::string		_s1;	
	std::string		_s2;
public:
	Replace( void );
	~Replace( void );

	bool		setAll( std::string file, std::string s1, std::string s2 );
	std::string	my_replace( std::string str );
	void		replace( void );
};

#endif
