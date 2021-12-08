#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string _phone_number;
	std::string	_darkest_secret;
	bool		_created;
public:
	Contact();
	~Contact();
	void	fill_contact(void);
	bool	getCreated( void );
	void	print_contact( int i );
	void	print_pole( std::string pole );
	void	print_contact( void );
};


#endif