#include "Cat.hpp"

Cat::Cat( void ) 
{
	type = "Cat";
	p_brain = new Brain;
	std::cout << "Cat default constractor called for " << this << std::endl;
}

Cat::~Cat( void ) 
{
	delete p_brain;
	std::cout << "Cat destructor called for " << this << std::endl;
}

void Cat::makeSound() const 
{
	std::cout << "Cat mmmeeeooowww" << std::endl;
}

void Cat::printAllIdea( void ) const
{
	p_brain->printBrainIdea();
}

void Cat::addIdea( std::string new_idea ) const
{
	p_brain->addBrainIdea(new_idea);
}

void Cat::chooseIdea ( void ) const
{
	std::cout << this->getType() << " idea: " << p_brain->chooseBrainIdea() << std::endl;
}

Brain	*Cat::getBrain( void ) const
{
	return (this->p_brain);
}

Cat::Cat( const Cat& origin ) 
{
	type = origin.type;
	std::cout << "Cat copy constructor " << this << std::endl;
}

Cat& Cat::operator=(const Cat& origin) 
{
	if (this == &origin)
		return (*this);
	std::cout << "Cat assignation constructor " << this << std::endl;
	return *this;
}

Animal& Cat::operator=(const Animal& origin) 
{
	if (this == &origin)
		return (*this);
	this->type = origin.getType();
	*(this->p_brain) = *(origin.getBrain());
	std::cout << "Animal/Cat assignation constructor" << this << std::endl;
	return *this;
}
