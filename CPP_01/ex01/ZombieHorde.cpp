#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *tmp_zombie = new Zombie[N];
	for (int i = 0; i < N; i++)
		tmp_zombie[i].setName(name);
	return (tmp_zombie);
}
