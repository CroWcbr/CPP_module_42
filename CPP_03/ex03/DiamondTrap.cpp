#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string name )
{
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	_hitpoints = FragTrap::_hitpoints;
	_hp_max = this->_hitpoints;	
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
	std::cout << "\x1b[31mDiamondTrap\x1b[0m name constructor called for <" + this->getName() + "> " << this << std::endl;
};

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "\x1b[31mDiamondTrap\x1b[0m destructor called for <" + this->getName() + "> " << this << std::endl;
};

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
	*this = copy;
	std::cout << "\x1b[31mDiamondTrap\x1b[0m copy constractor called for <" + this->getName() + ">" << std::endl;
}

void	DiamondTrap::attack( std::string const & target )
{
	ScavTrap::attack(target);
};

void	DiamondTrap::whoAmI( void )
{
	std::cout << "\x1b[31mDiamondTrap\x1b[0m <" + this->getName() + "> what am i? : <" + ClapTrap::getName() << ">" << std::endl;
}

std::string	DiamondTrap::getName(void) const
{
	return (this->_name);
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& copy)
{
	if (this == &copy)
		return (*this);
	this->_name = copy.getName();
	this->_hitpoints = copy.getHitpoints();
	this->_hp_max = this->_hitpoints;
	this->_energy_points = copy.getEnergyPoints();
	this->_attack_damage = copy.getAttackDamage();
	std::cout << "\x1b[31mDiamondTrap\x1b[0m assignation called for <" + this->getName() + ">" << std::endl;
	return (*this);
}
