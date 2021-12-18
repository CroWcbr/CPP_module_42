#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
private:
	std::string		_name;
	unsigned int	_hitpoints;
	unsigned int	_hp_max;
	unsigned int	_energy_points;
	unsigned int	_attack_damage;
	ClapTrap(void);
	
public:
	ClapTrap(std::string name);
	~ClapTrap();

	ClapTrap(const ClapTrap& copy);
	ClapTrap	&operator=(const ClapTrap& assign);

	void			attack(std::string const & target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

	std::string		getName( void ) const;
	unsigned int	getHitpoints( void ) const;
	unsigned int	getEnergyPoints( void ) const;
	unsigned int	getAttackDamage( void ) const;

	void			setName( std::string name );
	void			setAttackDamage(unsigned int amount);
};

#endif
