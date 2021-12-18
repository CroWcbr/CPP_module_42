#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->_name = "Default";
	this->_hitpoints = 100;
	this->_hp_max = this->_hitpoints;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "\x1b[36mFragTrap\x1b[0m default constractor called for <" + _name + ">" << this << std::endl;
}

FragTrap::FragTrap( std::string name )
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_hp_max = this->_hitpoints;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "\x1b[36mFragTrap\x1b[0m name constructor called for <" + this->getName() + "> " << this << std::endl;
};

FragTrap::~FragTrap( void )
{
	std::cout << "\x1b[36mFragTrap\x1b[0m destructor called for <" + this->getName() + "> " << this << std::endl;
};

FragTrap::FragTrap(const FragTrap& copy)
{
	*this = copy;
	std::cout << "\x1b[36mFragTrap\x1b[0m copy constractor called for <" + this->getName() + ">" << std::endl;
}

void FragTrap::attack( std::string const & target )
{
	std::cout << "\x1b[36mFragTrap\x1b[0m <" << this->getName() << "> attack <" << target << \
		"> causing <" << this->getAttackDamage() << "> points of damage!" << std::endl;
};

void	FragTrap::highFivesGuys( void )
{
	std::cout << "\x1b[36mFragTrap\x1b[0m <" + this->getName() + "> request high fives!" << std::endl;
}
