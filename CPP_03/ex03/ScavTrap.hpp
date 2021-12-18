#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap: virtual public ClapTrap
{
protected:
	ScavTrap(void);
public:
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap& copy);
	~ScavTrap(void);

	void	attack(const std::string& target);
	void	guardGate( void );
};

#endif
