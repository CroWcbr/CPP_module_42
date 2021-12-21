#include "Animal.hpp"

Animal::Animal( void ) 
{
	type = "unknown type";
	std::cout << "Animal default constractor called for " << this << std::endl;
}

Animal::~Animal( void ) 
{
	std::cout << "Animal destructor called for " << this << std::endl;
}

Animal::Animal( const Animal& origin) 
{
	type = origin.type;
	std::cout << "Animal copy constructor" << std::endl;
}

std::string Animal:: getType() const 
{
	return type;
}

void Animal::makeSound() const 
{
	std::cout << "Animal cannot talk" << std::endl;
}

Animal& Animal::operator=(const Animal& origin) {
	type = origin.type;
	std::cout << "Animal assignation constructor" <<std::endl;
	return *this;
}