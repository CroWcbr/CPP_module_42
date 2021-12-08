#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void )
{
	this->_this_contact = 0;
}

PhoneBook::~PhoneBook( void )
{
}

void	PhoneBook::add_contact( void )
{
	_contact[_this_contact].fill_contact();
	_this_contact++;
	if (_this_contact == MAX)
		_this_contact = 0;
	std::cout << std::endl;	
}

void	PhoneBook::print_phonebook( void )
{
	int i = -1;

	while( ++i < MAX)
	{
		if (this->_contact[i].getCreated() == false)
			break ;
		if (i == 0)
		{
			std::cout << "|     index|first name| last name|  nickname|";
			std::cout << std::endl;
			std::cout << "---------------------------------------------";
			std::cout << std::endl;
		}
		this->_contact[i].print_contact(i);
	}
	if (i == 0)
	{
		std::cout << "No contact in phonebook" << std::endl;
		return ;
	}
	else
	{
		std::cout << "---------------------------------------------";
		std::cout << std::endl;
	}
	this->print_phonebook_index( i );
}

void	PhoneBook::print_phonebook_index( const int i_max )
{
	int input;	

	while (1)
	{	
		std::cout << "Input index ( 0 to exit ): ";
		std::cin >> input;

        if (std::cin.fail())
        {
			std::cout << "Wrong input: ( not int )" << std::endl;
            std::cin.clear();
            std::cin.ignore(32767,'\n');
        }
		else if (input > 0 && input <= i_max)
		{
			this->_contact[input - 1].print_contact();
			std::cout << std::endl;
			break ;
		}
		else if (input == 0)
		{
			std::cout << std::endl;
			break ;
		}			
		else
			std::cout << "Wrong index: ( no index )" << std::endl;
	}
}