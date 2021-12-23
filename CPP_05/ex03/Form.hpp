#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	const int			_grade_sign;
	const int			_grade_exec;
	bool				_sign;
	Form();
public:

	Form(std::string name, int grade_sign, int grade_exec);
	virtual ~Form();

	Form& operator=(const Form& origin);
	Form(const Form& origin);

	std::string const getName() const;
	bool 		getSign() const;
	int const	getGradeSign() const;
	int const	getGradeExec() const;
	void		isSign(const Bureaucrat &bur);
	void 		setSign();
	void 		copySign(bool cpSign);	

	virtual std::string const getTarget() const = 0;
	virtual void execute(Bureaucrat const & executor) const = 0;

	class notSigned: public std::exception
	{
		virtual const char* what() const throw();
	};
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
