#include "Zombie.hpp"

Zombie * newZombie(std::string name)
{
	Zombie *tmp_zombie = new Zombie(name);
	tmp_zombie->announce();
	return (tmp_zombie);
}
