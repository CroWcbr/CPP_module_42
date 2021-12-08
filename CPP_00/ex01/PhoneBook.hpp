#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>
# define MAX 8

class PhoneBook
{
private:
	Contact		_contact[MAX];
	int			_this_contact;
public:
	PhoneBook();
	~PhoneBook();
	void	add_contact( void );
	void	print_phonebook(void);
	void	print_phonebook_index( const int i_max );
};

#endif
