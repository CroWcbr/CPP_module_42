#include "Character.hpp"

Character::Character(std::string const & name):	_name(name)
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
		_inventory[i] = NULL;
	std::cout << "Character name constructor for " << this << std::endl;
}

Character::Character(const Character& origin)
{
	_name = origin._name;
	for (int i = 0; i < INVENTORY_SIZE; i++)
		if (_inventory[i])
			delete _inventory[i];
	for (int i = 0; i < INVENTORY_SIZE; i++)
		if (origin._inventory[i])
			_inventory[i] = origin._inventory[i]->clone();
	std::cout << "Character copy constructor for " << this << std::endl;	
}

Character::~Character()
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
		if (_inventory[i])
			delete _inventory[i];
	std::cout << "Character destructor for " << this << std::endl;	
}

Character & Character::operator=(const Character& origin)
{
	if (this == &origin)
		return (*this);

	_name = origin._name;
	for (int i = 0; i < INVENTORY_SIZE; i++)
		if (origin._inventory[i])
			_inventory[i] = origin._inventory[i];
		else
			_inventory[i] = NULL;
	std::cout << "Character assignation for " << this << std::endl;	
	return (*this);
}

std::string const &	Character::getName(void) const 
{ 
	return _name; 
}

void	Character::equip(AMateria* m)
{
	int i = 0;

	for (i = 0; i < INVENTORY_SIZE && _inventory[i] != NULL; i++)
		;
	if (i < INVENTORY_SIZE)
		_inventory[i] = m;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < INVENTORY_SIZE && _inventory[idx])
	{
		std::cout << "\x1b[32m\tCharacter <" << getName() <<"> unequip <" << _inventory[idx]->getType() << ">\x1b[0m" << std::endl;
		_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	inBag();
	if (idx >= 0 && idx < INVENTORY_SIZE && _inventory[idx])
	{
		std::cout << "\x1b[32m\tCharacter <" << getName() <<"> use <" << _inventory[idx]->getType() << ">\x1b[0m"<< std::endl;	
		this->_inventory[idx]->use(target);
		delete _inventory[idx];
		this->unequip(idx);
	}
}

void	Character::inBag()
{
	int flag = 0;

	std::cout << "\x1b[32m\tinBag:\x1b[0m"<< std::endl;	
	for (int i = 0; i < INVENTORY_SIZE; i++)
		if (_inventory[i])
		{
			std::cout << "\x1b[32m\t\t" << _inventory[i]->getType() << "\x1b[0m" << std::endl;	
			flag = 1;
		}
	if (flag == 0)
		std::cout << "\x1b[32m\t\tNone\x1b[0m" << std::endl;	
}

