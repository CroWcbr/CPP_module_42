#include "WrongCat.hpp"

WrongCat::WrongCat( void ) 
{
	type = "WrongCat";
	std::cout << "WrongCat default constractor called for " << this << std::endl;
}

WrongCat::~WrongCat( void ) 
{
	std::cout << "WrongCat destructor called for " << this << std::endl;
}

WrongCat::WrongCat( const WrongCat& origin) 
{
	type = origin.type;
	std::cout << "WrongCat copy constructor" << std::endl;
}

void WrongCat::makeSound() const 
{
	std::cout << "WrongCat mmmeeeooowww" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& origin) 
{
	type = origin.type;
	std::cout << "WrongCat assignation constructor" << std::endl;
	return *this;
}
