#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{
private:
	std::string _type;
	Weapon();
public:
	Weapon(std::string type);
	~Weapon();
	
	std::string const 	&getType(void) const;
	void				setType( std::string type);
};

#endif
