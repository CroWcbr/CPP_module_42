#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("marine");
	ScavTrap b("allien");

	std::cout << "============" << std::endl;	
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	std::cout << "=== hitpoints <" << b.getName() << "> = <" << b.getHitpoints() << ">" << std::endl;
	b.beRepaired(20);
	std::cout << "=== hitpoints <" << b.getName() << "> = <" << b.getHitpoints() << ">" << std::endl;	
	a.guardGate();
	
	std::cout << "============" << std::endl;		
	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());
	std::cout << "=== hitpoints <" << a.getName() << "> = <" << a.getHitpoints() << ">" << std::endl;	
	a.beRepaired(2);
	std::cout << "=== hitpoints <" << a.getName() << "> = <" << a.getHitpoints() << ">" << std::endl;	
	
	std::cout << "============" << std::endl;	
	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());
	std::cout << "=== hitpoints <" << a.getName() << "> = <" << a.getHitpoints() << ">" << std::endl;	

	std::cout << "============" << std::endl;	
	ScavTrap c("clon");
	ScavTrap d(c);
	d.setName("copy clon");
	d.setAttackDamage(100);
	std::cout << "=== attack <" << d.getName() << "> = <" << d.getAttackDamage() << ">" << std::endl;

	return (0);
}
