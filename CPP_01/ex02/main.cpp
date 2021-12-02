#include <iostream>
#include <string>

int main()
{
	std::string stringValue;
	stringValue = "HI THIS IS BRAIN";

	std::string *stringPTR = &stringValue;
	std::string &stringREF = stringValue;

	std::cout << "pointer to the string" << std::endl;
	std::cout << "stringPTR = " << stringPTR << std::endl;
	std::cout << "*stringPTR = " << *stringPTR << std::endl;

	std::cout << std::endl << "reference to the string" << std::endl;
	std::cout << "&stringREF = " << &stringREF << std::endl;
	std::cout << "stringREF = " << stringREF << std::endl;
	return (0);
}