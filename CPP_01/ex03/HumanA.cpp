#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->_name = name;
	this->_weapon = &weapon;
}

HumanA::~HumanA()
{
	std::cout << this->_name << " destroy" << std::endl;
}

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}
