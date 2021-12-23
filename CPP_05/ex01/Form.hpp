#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	const int			_mark_sign;
	const int			_mark_do;
	bool				_sign;
public:
	Form(std::string name, int mark_sign, int mark_do);
	~Form();
	Form& operator=(const Form& origin);
	Form(const Form& origin);

	std::string const getName() const;
	bool 		getSign() const;
	void 		setSign();
	int const	getMarkSign() const;
	int const	getMarkDo() const;
	void		isSign(const Bureaucrat &bur);

	class GradeTooHighException: public std::exception
	{
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		virtual const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream &out, Form const &origin);

#endif
