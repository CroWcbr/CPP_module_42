#include "easyfind.hpp"

int main()
{
	std::vector<int>			vect;
	std::vector<int>::iterator	tmp;

	for (int i = 0; i < 100; i += 2)
		vect.push_back(i);
	for (int i = 0; i < 11; i++)
	{
		try
		{
			std::cout << "Search: " << i * i << std::endl;
			easyfind(vect, i * i);
			std::cout << "Sucsess!" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
			std::cout << "Failure!" << std::endl;
		}
		std::cout << std::endl;
	}
	return 0;
}
