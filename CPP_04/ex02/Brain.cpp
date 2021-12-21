#include "Brain.hpp"
#include <unistd.h>

Brain::Brain( void ) 
{
	num_ideas = 0;
	std::cout << "Brain default constractor called for " << this << std::endl;
}

Brain::~Brain( void ) 
{
	std::cout << "Brain destructor called for " << this << std::endl;
}

void Brain::printBrainIdea( void )
{
	std::cout << "Brain: " << this << std::endl;
	for (int i = 0; i < SIZE_BRAIN; i++)
	{
		if (this->_ideas[i].empty())
			break ;
		std::cout << "    " << this->_ideas[i] << std::endl;
	}
}

void Brain::addBrainIdea( std::string new_idea )
{
	this->_ideas[num_ideas] = new_idea;
	num_ideas ++;
	if (num_ideas == SIZE_BRAIN)
		num_ideas = 0;
}

std::string	Brain::chooseBrainIdea( void)
{
	std::srand(std::time(NULL));
	int i;
	
	usleep(800000);
	i = -1;
	while (++i < SIZE_BRAIN)
		if (this->_ideas[i].empty())
			break ;
	if (i == 0)
		return ("no idia, just relax");
	return(this->_ideas[std::rand() % i]);
}

Brain::Brain( const Brain& origin) 
{
	*this = origin;
	std::cout << "Brain copy constructor " << this  << std::endl;
}

Brain& Brain::operator=(const Brain& origin) 
{
	if (this == &origin)
		return (*this);
	for (int i = 0; i < SIZE_BRAIN; i++)
		this->_ideas[i] = origin._ideas[i];
	std::cout << "Brain assignation constructor " << this << std::endl;
	return (*this);
}