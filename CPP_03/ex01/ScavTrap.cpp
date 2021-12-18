#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->_name = "Default";
	this->_hitpoints = 100;
	this->_hp_max = this->_hitpoints;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap default constractor called for <" + _name + ">" << this << std::endl;
}

ScavTrap::ScavTrap( std::string name )
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_hp_max = this->_hitpoints;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap name constructor called for <" + this->getName() + "> " << this << std::endl;
};

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap destructor called for <" + this->getName() + "> " << this << std::endl;
};

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	*this = copy;
	std::cout << "ScavTrap copy constractor called for <" + this->getName() + ">" << std::endl;
}

void ScavTrap::attack( std::string const & target )
{
	std::cout << "ScavTrap <" << this->getName() << "> attack <" << target << \
		"> causing <" << this->getAttackDamage() << "> points of damage!" << std::endl;
};

void	ScavTrap::guardGate(){
	std::cout << "ScavTrap <" + this->getName() + "> has entered in Gate keeper mode! Be carefull!" << std::endl;
}
