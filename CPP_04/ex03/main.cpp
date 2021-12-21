#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	std::cout << "=== MateriaSource ===" << std::endl;
	IMateriaSource *src = new MateriaSource();

	std::cout << std::endl << "=== learnMateria ===" << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << std::endl << "=== Character me ===" << std::endl;
	ICharacter* me = new Character("me");

	std::cout << std::endl << "=== AMateria ===" << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	std::cout << "\x1b[32m\tICE = " << tmp->getType() << "\x1b[0m" << std::endl;
	me->equip(tmp);
	tmp = src->createMateria("cure");
	std::cout << "\x1b[32m\tCURE = " << tmp->getType() << "\x1b[0m" << std::endl;
	me->equip(tmp);

	std::cout << std::endl << "=== Character Bob ===" << std::endl;
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(3, *bob);	
	me->use(0, *bob);

	std::cout << std::endl << "=== Delete all ===" << std::endl;	
	delete bob;
	delete me;
	delete src;

	return 0;
}
