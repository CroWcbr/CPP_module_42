#include "Form.hpp"

Form::Form(std::string name, int mark_sign, int mark_do):
	_name(name),
	_mark_sign(mark_sign),
	_mark_do(mark_do),
	_sign(false)
{
	if (_mark_sign > 150 || _mark_do > 150)
		throw Form::GradeTooLowException();
	if (_mark_sign < 1 || _mark_do < 1)
		throw Form::GradeTooHighException();
}

Form::~Form()
{
}

std::string const Form::getName() const
{
	return _name;
}

bool Form::getSign() const
{
	return _sign;
}

void Form::setSign()
{
	_sign = true;
}

int Form::getMarkSign() const
{
	return _mark_sign;
}

int Form::getMarkDo() const
{
	return _mark_do;
}

Form::Form(const Form& origin):
	_name(origin.getName()), 
	_mark_sign(origin.getMarkSign()), 
	_mark_do(origin.getMarkDo()),
	_sign(false)
{
	*this = origin;
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
	else
		_sign = origin.getSign();
	return *this;
}

std::ostream& operator<<(std::ostream &out, Form const &origin)
{
	out << "form: \"" << origin.getName() 
		<< "\" sign: " << origin.getSign() 
		<< " mark_sign: " << origin.getMarkSign() 
		<< " mark_do: " << origin.getMarkDo();
	return out;
}


void	Form::isSign(const Bureaucrat& bur)
{
	if (getSign())
	{
		bur.signForm(*this);
	}
	else if (bur.getGrade() > getMarkSign())
	{
		bur.signForm(*this);
		throw Form::GradeTooLowException();
	}
	else
	{
		bur.signForm(*this);
		setSign();
	}
}
