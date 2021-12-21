#include "Dog.hpp"

Dog::Dog( void ) 
{
	type = "Dog";
	std::cout << "Dog default constractor called for " << this << std::endl;
}

Dog::~Dog( void ) 
{
	std::cout << "Dog destructor called for " << this << std::endl;
}

Dog::Dog( const Dog& origin) 
{
	type = origin.type;
	std::cout << "Dog copy constructor" << std::endl;
}

void Dog::makeSound() const 
{
	std::cout << "Dog wwwaaawww" << std::endl;
}

Dog& Dog::operator=(const Dog& origin) 
{
	type = origin.type;
	std::cout << "Dog assignation constructor" << std::endl;
	return *this;
}
