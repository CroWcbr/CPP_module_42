#include "Cat.hpp"

Cat::Cat( void ) 
{
	type = "Cat";
	std::cout << "Cat default constractor called for " << this << std::endl;
}

Cat::~Cat( void ) 
{
	std::cout << "Cat destructor called for " << this << std::endl;
}

Cat::Cat( const Cat& origin) 
{
	type = origin.type;
	std::cout << "Cat copy constructor" << std::endl;
}

void Cat::makeSound() const 
{
	std::cout << "Cat mmmeeeooowww" << std::endl;
}

Cat& Cat::operator=(const Cat& origin) 
{
	type = origin.type;
	std::cout << "Cat assignation constructor" << std::endl;
	return *this;
}
