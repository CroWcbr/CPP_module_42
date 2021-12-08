# include "Contact.hpp"

Contact::Contact( void )
{
	_created = false;
}

Contact::~Contact( void )
{

}

void	Contact::fill_contact(void)
{
	std::cout << "Input contact's first name       : ";
	std::cin >> _first_name;
	std::cout << "Input contact's last name        : ";
	std::cin >> _last_name;
	std::cout << "Input contact's nickname         : ";
	std::cin >> _nickname;
	std::cout << "Input contact's phone number     : ";
	std::cin >> _phone_number;
	std::cout << "Input contact's darkest secret   : ";
	std::cin >> _darkest_secret;
	_created = true;
}

bool	Contact::getCreated( void )
{
	return (this->_created);
}

void	Contact::print_pole( std::string pole )
{
	if (pole.length() > 10)
		std::cout << std::setw(10) << pole.substr(0, 9).append(".") << "|";
	else
		std::cout << std::setw(10) << pole << "|";
	return ;
}

void	Contact::print_contact( int i )
{
	std::cout << "|         " << i + 1 << "|";
	print_pole( _first_name );
	print_pole( _last_name );
	print_pole( _nickname );
	std::cout << std::endl;
}

void	Contact::print_contact( void )
{
	std::cout << "First Name      :" << this->_first_name << std::endl;
	std::cout << "Last Name       :" << this->_last_name << std::endl;
	std::cout << "Nickname        :" << this->_nickname << std::endl;
	std::cout << "Phone number    :" << this->_phone_number << std::endl;
	std::cout << "Darkest secret  :" << this->_darkest_secret << std::endl;	
}