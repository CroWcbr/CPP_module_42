#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie tmp_zombie = Zombie(name);
	tmp_zombie.announce();
}
