#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->_name = "Default";
	this->_hitpoints = 100;
	this->_hp_max = this->_hitpoints;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "\x1b[32mScavTrap\x1b[0m default constractor called for <" + _name + ">" << this << std::endl;
}

ScavTrap::ScavTrap( std::string name )
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_hp_max = this->_hitpoints;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "\x1b[32mScavTrap\x1b[0m name constructor called for <" + this->getName() + "> " << this << std::endl;
};

ScavTrap::~ScavTrap( void )
{
	std::cout << "\x1b[32mScavTrap\x1b[0m destructor called for <" + this->getName() + "> " << this << std::endl;
};

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	*this = copy;
	std::cout << "\x1b[32mScavTrap\x1b[0m copy constractor called for <" + this->getName() + ">" << std::endl;
}

void ScavTrap::attack( std::string const & target )
{
	std::cout << "\x1b[32mScavTrap\x1b[0m <" << this->getName() << "> attack <" << target << \
		"> causing <" << this->getAttackDamage() << "> points of damage!" << std::endl;
};

void	ScavTrap::guardGate( void )
{
	std::cout << "\x1b[32mScavTrap\x1b[0m <" + this->getName() + "> has enterred in Gate keeper mode" << std::endl;
}
