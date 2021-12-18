#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("marine");
	ClapTrap b("allien");

	std::cout << "============" << std::endl;	
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	std::cout << "=== hitpoints <" << b.getName() << "> = <" << b.getHitpoints() << ">" << std::endl;
	b.beRepaired(20);
	std::cout << "=== hitpoints <" << b.getName() << "> = <" << b.getHitpoints() << ">" << std::endl;	
	
	std::cout << "============" << std::endl;		
	b.setAttackDamage(3);
	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());
	std::cout << "=== hitpoints <" << a.getName() << "> = <" << a.getHitpoints() << ">" << std::endl;	
	a.beRepaired(2);
	std::cout << "=== hitpoints <" << a.getName() << "> = <" << a.getHitpoints() << ">" << std::endl;	
	
	std::cout << "============" << std::endl;	
	b.setAttackDamage(33);	
	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());
	std::cout << "=== hitpoints <" << a.getName() << "> = <" << a.getHitpoints() << ">" << std::endl;	

	std::cout << "============" << std::endl;	
	ClapTrap c("clon");
	ClapTrap d(c);
	d.setName("copy_clon");
	d.setAttackDamage(10);
	std::cout << "=== attack <" << d.getName() << "> = <" << d.getAttackDamage() << ">" << std::endl;

	return (0);
}
