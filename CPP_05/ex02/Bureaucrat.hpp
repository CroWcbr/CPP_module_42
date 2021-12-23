#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	std::string	const	_name;
	int					_grade;
	Bureaucrat();
public:
	Bureaucrat(std::string const name);
	Bureaucrat(std::string const name, int grade);
	~Bureaucrat();

	Bureaucrat& operator=(const Bureaucrat& origin);
	Bureaucrat(const Bureaucrat& origin);

	std::string	getName( void ) const;
	int			getGrade( void ) const;

	void		incrGrade();
	void		decrGrade();
	void		signForm(const Form& form) const;

	void executeForm(Form const & form);

	class GradeTooHighException: public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream &out, Bureaucrat const &origin);

#endif
