#include "Zombie.hpp"

int	main(void)
{
	int N = 5;

	Zombie	*first_zombie = zombieHorde(N, "test");
	for (int i = 0; i < N; i++)
		first_zombie[i].announce();
	delete [] first_zombie;

	return (0);
}
