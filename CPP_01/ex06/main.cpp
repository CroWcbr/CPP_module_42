#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen karen;
	
	if (argc == 2)
		karen.filter(argv[1]);
	else
		karen.no_parameter();
	return (0);
}
