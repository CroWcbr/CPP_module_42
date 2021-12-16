#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
private:
	std::string _name;
	Weapon		*_weapon;
	HumanB();
public:
	HumanB(std::string name);
	~HumanB(void);
	
	void	attack(void);
	void 	setWeapon(Weapon& weapon);
	Weapon&	getWeapon(void) const;
};

#endif
