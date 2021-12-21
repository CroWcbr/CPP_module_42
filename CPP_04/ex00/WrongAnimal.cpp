#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) 
{
	type = "unknown type";
	std::cout << "WrongAnimal default constractor called for " << this << std::endl;
}

WrongAnimal::~WrongAnimal( void ) 
{
	std::cout << "WrongAnimal destructor called for " << this << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& origin) 
{
	type = origin.type;
	std::cout << "WrongAnimal copy constructor" << std::endl;
}

std::string WrongAnimal::getType() const 
{
	return type;
}

void WrongAnimal::makeSound() const 
{
	std::cout << "WrongAnimal cannot talk" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& origin) {
	type = origin.type;
	std::cout << "WrongAnimal assignation constructor" <<std::endl;
	return *this;
}