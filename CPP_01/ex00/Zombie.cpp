#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name)
{
}

Zombie::~Zombie()
{
	std::cout << "<" << getName() << "> died" << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << "<" << getName() << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::getName( void ) const
{
	return (this->_name);
}
