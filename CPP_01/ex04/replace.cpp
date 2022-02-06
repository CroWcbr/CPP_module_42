#include "replace.hpp"

Replace::Replace( void )
{
}

Replace::~Replace( void )
{
}

bool	Replace::setAll( std::string file, std::string s1, std::string s2 )
{
	_input.open(file.c_str());
	if (!_input.is_open())
		return (false);		
	_output.open((file + ".replace").c_str(), std::ios::trunc);
	if (!_output.is_open())
		return (false);		
	_s1 = s1;
	_s2 = s2;
	return (true);		
}

std::string	Replace::my_replace( std::string str )
{
	std::string result;
	int start = 0;
	unsigned long n;

	while ((n = str.find(_s1, start)) != std::string::npos)
	{
		str.erase(n, _s1.length());
		str.insert(n, _s2);
		start = n + _s2.length();
	}
	return (str);
}

void	Replace::replace( void )
{
	std::string line;

	while (true)
	{
		std::getline(_input, line);
		_output << my_replace( line );
		if (_input.eof())
			break ;
		_output << std::endl;
    }
	_output.close();
	_input.close();
}
