#include "Dog.hpp"

Dog::Dog( void ) 
{
	type = "Dog";
	p_brain = new Brain;
	std::cout << "Cat default constractor called for " << this << std::endl;
}

Dog::~Dog( void ) 
{
	delete p_brain;
	std::cout << "Dog destructor called for " << this << std::endl;
}

void Dog::makeSound() const 
{
	std::cout << "Dog wwwaaawww" << std::endl;
}

void Dog::printAllIdea( void ) const
{
	p_brain->printBrainIdea();
}

void Dog::addIdea( std::string new_idea ) const
{
	p_brain->addBrainIdea(new_idea);
}

void Dog::chooseIdea ( void ) const
{
	std::cout << this->getType() << " idea: " << p_brain->chooseBrainIdea() << std::endl;
}

Brain	*Dog::getBrain( void ) const
{
	return (this->p_brain);
}

Dog::Dog( const Dog& origin ) 
{
	type = origin.type;
	std::cout << "Dog copy constructor " << this << std::endl;
}

Dog& Dog::operator=(const Dog& origin) 
{
	if (this == &origin)
		return (*this);
	std::cout << "Dog assignation constructor " << this << std::endl;
	return *this;
}

Animal& Dog::operator=(const Animal& origin) 
{
	if (this == &origin)
		return (*this);
	this->type = origin.getType();
	*(this->p_brain) = *(origin.getBrain());
	std::cout << "Animal/Dog assignation constructor" << this << std::endl;
	return *this;
}