#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap: public ClapTrap
{
private:
	FragTrap(void);
public:
	FragTrap(const std::string name);
	FragTrap(const FragTrap& copy);
	~FragTrap(void);

	void	attack(const std::string& target);
	void	highFivesGuys( void );
};

#endif
