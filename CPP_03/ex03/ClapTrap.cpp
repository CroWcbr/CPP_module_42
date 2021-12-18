#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->_name = "Default";
	this->_hitpoints = 10;
	this->_hp_max = this->_hitpoints;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	std::cout << "\x1b[35mClapTrap\x1b[0m default constractor called for <" + _name + ">" << this << std::endl;
}

ClapTrap::ClapTrap( std::string name )
{
	this->_name = name;
	this->_hitpoints = 10;
	this->_hp_max = this->_hitpoints;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	std::cout << "\x1b[35mClapTrap\x1b[0m name constructor called for <" + this->getName() + "> " << this << std::endl;
};

ClapTrap::~ClapTrap( void )
{
	std::cout << "\x1b[35mClapTrap\x1b[0m destructor called for <" + this->getName() + "> " << this << std::endl;
};

void ClapTrap::attack( std::string const & target )
{
	std::cout << "\x1b[35mClapTrap\x1b[0m <" << this->getName() << "> attack <" << target << \
		"> causing <" << this->getAttackDamage() << "> points of damage!" << std::endl;
};

void ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << "<" << this->getName() << "> takeDamage <" << \
		amount << "> points of damage!" << std::endl;
	if ( this->_hitpoints > amount )
		this->_hitpoints -= amount;
	else
		this->_hitpoints = 0;
};

void ClapTrap::beRepaired( unsigned int amount )
{
	std::cout << "<" << this->getName() << "> beRepaired <" << \
		amount << ">" << std::endl;
	if ( this->_hitpoints + amount < this->_hp_max )
		this->_hitpoints += amount;
	else
		this->_hitpoints = this->_hp_max;	
};

std::string	ClapTrap::getName( void ) const
{
	return ( this->_name );
}

void	ClapTrap::setAttackDamage(unsigned int amount)
{
	this->_attack_damage = amount;
}

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

unsigned int	ClapTrap::getHitpoints( void ) const
{
	return ( this->_hitpoints );
}

unsigned int	ClapTrap::getEnergyPoints( void ) const
{
	return ( this->_energy_points );
}

unsigned int	ClapTrap::getAttackDamage( void ) const
{
	return ( this->_attack_damage );
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	*this = copy;
	std::cout << "\x1b[35mClapTrap\x1b[0m copy constractor called for <" + this->getName() + ">" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& copy)
{
	if (this == &copy)
		return (*this);
	this->_name = copy.getName();
	this->_hitpoints = copy.getHitpoints();
	this->_hp_max = this->_hitpoints;
	this->_energy_points = copy.getEnergyPoints();
	this->_attack_damage = copy.getAttackDamage();
	std::cout << "\x1b[35mClapTrap\x1b[0m assignation called for <" + this->getName() + ">" << std::endl;
	return (*this);
}
