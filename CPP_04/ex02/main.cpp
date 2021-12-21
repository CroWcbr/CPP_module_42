#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

# define ANIMAL 4

int main()
{
	{
		Animal	*animal[ANIMAL];

		for (int i = 0; i < ANIMAL; i++)
		{
			if (i < ANIMAL / 2)
				animal[i] = new Cat();
			else
				animal[i] = new Dog();
			std::cout << animal[i]->getType() << " " << animal[i] << std::endl;
		}
		std::cout << std::endl << "========" << std::endl;

		for(int i = 0; i < ANIMAL; i++)
			animal[i]->makeSound();

		std::cout << "========" << std::endl << std::endl;
		for (int i = 0; i < ANIMAL; i++)
			delete animal[i];
	}
	return (0);
}
