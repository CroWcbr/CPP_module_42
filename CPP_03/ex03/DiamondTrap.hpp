#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	DiamondTrap: public ScavTrap, public FragTrap
{
private:
	std::string _name;
		DiamondTrap();
public:
	DiamondTrap(const std::string name);
	DiamondTrap(const DiamondTrap& copy);
	~DiamondTrap(void);

	std::string	getName(void) const;
	void	attack(const std::string& target);
	void	whoAmI(void);
	DiamondTrap	&operator=(const DiamondTrap& assign);
};

#endif