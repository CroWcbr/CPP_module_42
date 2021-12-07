#include "replace.hpp"

int main(int argc, char **argv)
{
	Replace	my;

	if (argc != 4)
	{
		std::cout << "Error: not enough argument" << std::endl;
		return (1);
	}
	else if (argv[1][0] == '\0')
	{
		std::cout << "Error: search string is empty" << std::endl;
		return (1);
	}
	else if (argv[2][0] == '\0')
	{
		std::cout << "Error: replace string is empty" << std::endl;
		return (1);
	}
	if (!my.setAll(argv[1], argv[2], argv[3]))
	{
		std::cout << "Error: cannot open file" << std::endl;
		return (1);
	}
	my.replace();
	return (0);
}
