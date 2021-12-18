#include "DiamondTrap.hpp"

int main()
{

	{
		std::cout << "============ ClapTrap" << std::endl;	
		ClapTrap a("marine");
		ClapTrap b("allien");

		a.attack(b.getName());
		b.takeDamage(a.getAttackDamage());
		std::cout << "=== hitpoints <" << b.getName() << "> = <" << b.getHitpoints() << ">" << std::endl;
		b.beRepaired(20);
		std::cout << "=== hitpoints <" << b.getName() << "> = <" << b.getHitpoints() << ">" << std::endl;	\
	}

	{
		std::cout << std::endl << "============ ScavTrap" << std::endl;		
		ScavTrap a("marine");
		ScavTrap b("allien");

		b.attack(a.getName());
		a.takeDamage(b.getAttackDamage());
		std::cout << "=== hitpoints <" << a.getName() << "> = <" << a.getHitpoints() << ">" << std::endl;	
		a.beRepaired(100);
		std::cout << "=== hitpoints <" << a.getName() << "> = <" << a.getHitpoints() << ">" << std::endl;	
		a.guardGate();
	}

	{
		std::cout << std::endl << "============ FragTrap" << std::endl;		
		FragTrap a("marine");
		ScavTrap b("allien");

		b.attack(a.getName());
		a.takeDamage(b.getAttackDamage());
		std::cout << "=== hitpoints <" << a.getName() << "> = <" << a.getHitpoints() << ">" << std::endl;	
		a.beRepaired(100);
		std::cout << "=== hitpoints <" << a.getName() << "> = <" << a.getHitpoints() << ">" << std::endl;	
		a.highFivesGuys();
		b.guardGate();
	}

	{
		std::cout << std::endl << "============ DiamondTrap" << std::endl;		
		DiamondTrap a("marine");
		DiamondTrap b("allien");

		std::cout << "============" << std::endl;	

		b.attack(a.getName());
		a.takeDamage(b.getAttackDamage());
		std::cout << "=== hitpoints <" << a.getName() << "> = <" << a.getHitpoints() << ">" << std::endl;	
		a.beRepaired(100);
		std::cout << "=== hitpoints <" << a.getName() << "> = <" << a.getHitpoints() << ">" << std::endl;	
		a.whoAmI();
		a.guardGate();
		a.highFivesGuys();
		std::cout << "============" << std::endl;		
	}

	return (0);
}
