#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

# define ANIMAL 2

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
			std::cout << animal[i]->getType() << std::endl;
		}
		std::cout << std::endl << "========" << std::endl;

		std::cout << animal[0]->getType() << " " << animal[0] << std::endl;
		animal[0]->addIdea("Sleep");
		animal[0]->addIdea("Eat");
		animal[0]->addIdea("Play");
		animal[0]->addIdea("Bite");	
		animal[0]->addIdea("Run");	
		animal[0]->addIdea("Cute");	
		animal[0]->printAllIdea();
		animal[0]->chooseIdea();

 		std::cout << "========" << std::endl;
		*(animal[1]) = *(animal[0]);
		std::cout << animal[1]->getType() << " " << animal[1] << std::endl;
 		animal[1]->printAllIdea();
 		animal[1]->chooseIdea();
		
 		animal[1]->chooseIdea();
 		animal[1]->chooseIdea();
 		animal[1]->chooseIdea();
 		animal[1]->chooseIdea();
 		animal[1]->chooseIdea();
		std::cout << "========" << std::endl << std::endl;
		for (int i = 0; i < ANIMAL; i++)
			delete animal[i];
	}
	return (0);
}
