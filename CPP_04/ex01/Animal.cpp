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

std::string Animal:: getType() const 
{
	return this->type;
}

void Animal::makeSound() const 
{
	std::cout << "Animal cannot talk" << std::endl;
}

Animal::Animal( const Animal& origin) 
{
	type = origin.type;
	std::cout << "Animal copy constructor" << std::endl;
}

Animal& Animal::operator=(Animal const & origin) {
	this->type = origin.type;
	std::cout << "Animal assignation constructor" <<std::endl;
	return *this;
}
