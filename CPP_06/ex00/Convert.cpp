#include "Convert.hpp"

Convert::Convert( void )
{ 
}

Convert::Convert( const Convert& origin)
{
	*this = origin;
}

Convert& Convert::operator=(const Convert& origin)
{
	this->_input = origin._input;
	return *this;
}	

Convert::Convert( char *argv )
{ 
	if (!chekType(argv))
		throw Convert::WrongInput();
	_input = argv;
}

bool	Convert::chekType( std::string str )
{
	char *p;
	double tmp;

	if (str.length() == 1 && isascii(str[0]))
		return true;
	tmp = strtod(str.c_str(), &p);
	if (*p == 0 || (*p == 'f' && *(p + 1) == 0))
		return true;
	return false;
}

const char*	Convert::WrongInput::what() const throw()
{
	return "Need char, int, float or double";
}

Convert::~Convert( void )
{ 
}

char	Convert::toChar() const
{
	return static_cast<char>(toDouble());
}

float	Convert::toFloat() const
{
	return static_cast<float>(toDouble());
}

int	Convert::toInt() const
{
	return static_cast<int>(toDouble());
}

double	Convert::toDouble() const
{
	if(_input.length() == 1 && !isdigit(_input[0]))
		return static_cast<double>(_input[0]);
	else
		return atof(_input.c_str());
}

void	Convert::print_char( void )
{
	if (!isnan(toFloat()) && !isprint(toChar()) && !isinf(toFloat()) && isascii(toFloat()))
		std::cout << "char\t: Non displayable" << std::endl;
	else if (isprint(toChar()))
		std::cout << "char\t: '" << toChar() << "'" << std::endl;
	else
		std::cout << "char\t: impossible" << std::endl;
}

void	Convert::print_int( void )
{
	if (isnan(toFloat()) || toDouble() >= INT_MAX || toDouble() <= INT_MIN)
		std::cout << "int\t: impossible" << std::endl;
	else
		std::cout << "int\t: " << toInt() << std::endl;	
}

void	Convert::print_float( void )
{
	if (toFloat() - toInt() == 0)
		std::cout << "Float\t: " << toFloat() << ".0f" << std::endl;
	else
		std::cout << "Float\t: " << toFloat() << "f" << std::endl;
}

void	Convert::print_double( void )
{
	if (toFloat() - toInt() == 0)
		std::cout << "Double\t: " << toDouble() << ".0" << std::endl;
	else
		std::cout << "Double\t: " << toDouble() << std::endl;
}

void	Convert::print_all( void )
{
	print_char();
	print_int();
	print_float();
	print_double();
}
