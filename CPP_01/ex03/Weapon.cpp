#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon(void)
{
	std::cout << getType() << " destroy" << std::endl;
}

std::string const	&Weapon::getType(void) const
{
	return (this->_type);
}

void	Weapon::setType( std::string type)
{
	this->_type = type;
}