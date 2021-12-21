#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include <string>
# include "AMateria.hpp"
# define INVENTORY_SIZE 4

class AMateria;

class Character: public ICharacter
{
private:
	std::string _name;
	AMateria*	_inventory[INVENTORY_SIZE];
public:
	Character( void );
	Character( std::string const &name );

	Character( const Character& origin );
	Character& operator =( const Character& origin );

	virtual ~Character( void );

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int index);
	virtual void use(int idx, ICharacter& target);

	void	inBag();
};

#endif
