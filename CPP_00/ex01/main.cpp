#include "PhoneBook.hpp"

int main()
{
	std::string command;
	std::string input;	
	PhoneBook	phonebook;

	while (1)
	{
		std::cout << "Input your command: ";
		std::cin >> input;
		if (input == "EXIT")
			break ;
		else if (input == "ADD")
			phonebook.add_contact();
		else if (input == "SEARCH")
			phonebook.print_phonebook();		
		else
			std::cout << "Wrong input. Please enter: EXIT/ADD/SEARCH" << std::endl;		
	}
	return (0);
}