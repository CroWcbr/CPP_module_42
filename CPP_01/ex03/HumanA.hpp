#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA
{
private:
	std::string _name;
	Weapon		*_weapon;
	HumanA();
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	
	void	attack(void);
	Weapon&	getWeapon(void) const;
};

#endif
