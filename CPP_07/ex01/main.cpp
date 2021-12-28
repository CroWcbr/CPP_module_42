#include "iter.hpp"

int main( void )
{
	int tab[] = {0, 1, 2, 3, 4};
	iter(tab, sizeof(tab)/sizeof(tab[0]), print);
	std::cout << "Print origin int_array: ";
	std::cout << std::endl;
	std::cout << "Print multiply2 int_array: ";
	iter(tab, sizeof(tab)/sizeof(tab[0]), print_multiply2);
	std::cout << std::endl;

	std::string st = "test iter!";
	std::cout << "Print origin string: ";
	iter(st.c_str(), st.length(), print);
	std::cout << std::endl;

	return 0;
}