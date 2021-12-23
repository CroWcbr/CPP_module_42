#include "Form.hpp"

Form::Form(): 
	_name("noname"), 
	_grade_sign(150), 
	_grade_exec(150), 
	_sign(false)
{
}

Form::Form(std::string name, int grade_sign, int grade_exec):
	_name(name),
	_grade_sign(grade_sign),
	_grade_exec(grade_exec),
	_sign(false)
{
	if (_grade_sign > 150 || _grade_exec > 150)
		throw Form::GradeTooLowException();
	if (_grade_sign < 1 || _grade_exec < 1)
		throw Form::GradeTooHighException();
}

Form::~Form()
{
}

std::string const Form::getName() const
{
	return _name;
}

bool	Form::getSign() const
{
	return _sign;
}

void	Form::setSign()
{
	_sign = true;
}
void	Form::copySign(bool cpSign)
{
	_sign = cpSign;
}

int const Form::getGradeSign() const
{
	return _grade_sign;
}

int const Form::getGradeExec() const
{
	return _grade_exec;
}

Form::Form(const Form& origin):
	_name(origin.getName()), 
	_grade_sign(origin.getGradeSign()), 
	_grade_exec(origin.getGradeExec()),
	_sign(false)
{
	*this = origin;
}

const char *Form::notSigned::what() const throw()
{
	return ("Form isn't signed");
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

Form& Form::operator=(const Form &origin)
{
	if (this == &origin)
		return *this;
	_sign = origin.getSign();
	return *this;
}

std::ostream& operator<<(std::ostream &out, Form const &origin)
{
	out << "target: \"" << origin.getTarget() << "\""
		<< " form: \"" << origin.getName() << "\""
		<< " sign: " << origin.getSign() 
		<< " mark_sign: " << origin.getGradeSign() 
		<< " mark_do: " << origin.getGradeExec();
	return out;
}

void	Form::isSign(const Bureaucrat& bur)
{
	bur.signForm(*this);
	if (getSign())
		;
	else if (bur.getGrade() > getGradeSign())
		throw Bureaucrat::GradeTooLowException();
	else
		setSign();
}
