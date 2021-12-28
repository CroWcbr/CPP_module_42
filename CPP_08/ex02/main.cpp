#include "mutantstack.hpp"

int main()
{
    std::cout << "=== MUTANTSTACK default === " << std::endl;

	MutantStack<int>	mstack;
	
	mstack.push(5);
	mstack.push(17);

	std::cout << "mstack.top():\t" << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "mstack.size():\t" << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	std::cout << "mstack print:" << std::endl;
	while (it != ite)
	{
		std::cout << "\t" << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);	

    std::cout << std::endl << "=== MUTANTSTACK reverse === " << std::endl;	
	MutantStack<int>::reverse_iterator it_r = mstack.rbegin();
	MutantStack<int>::reverse_iterator ite_r = mstack.rend();

	std::cout << "mstack.size():\t" << mstack.size() << std::endl;
	it_r++;
	it_r--;
	std::cout << "mstack reverse print:" << std::endl;
	while (it_r != ite_r)
	{
		std::cout << "\t" << *it_r << std::endl;
		++it_r;
	}	

    std::cout << std::endl << "=== MUTANTSTACK copy === " << std::endl;	
	MutantStack<int>	mstack1;
	mstack1 = mstack;

	std::cout << "mstack1.size():\t" << mstack1.size() << std::endl;

	MutantStack<int>::iterator it1 = mstack1.begin();
	MutantStack<int>::iterator ite1 = mstack1.end();

	it1++;
	it1--;
	std::cout << "mstack copy print:" << std::endl;
	while (it1 != ite1)
	{
		std::cout << "\t" << *it1 << std::endl;
		++it1;
	}	


	return 0;
}
