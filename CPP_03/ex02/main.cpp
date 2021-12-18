#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap a("marine");
	ScavTrap b("allien");

	std::cout << "============" << std::endl;	
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	std::cout << "=== hitpoints <" << b.getName() << "> = <" << b.getHitpoints() << ">" << std::endl;
	b.beRepaired(20);
	std::cout << "=== hitpoints <" << b.getName() << "> = <" << b.getHitpoints() << ">" << std::endl;	
	a.highFivesGuys();

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
	FragTrap c("clon");
	FragTrap d(c);
	d.setName("copy clon");
	d.setAttackDamage(100);
	std::cout << "=== attack <" << d.getName() << "> = <" << d.getAttackDamage() << ">" << std::endl;

	return (0);
}
