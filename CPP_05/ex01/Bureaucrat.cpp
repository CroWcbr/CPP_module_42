#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void )
{
}

Bureaucrat::Bureaucrat(std::string const name): _name(name), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();	
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
}

Bureaucrat::~Bureaucrat( void )
{
}

std::string	Bureaucrat::getName( void ) const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incrGrade()
{
	if (_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrGrade()
{
	if (_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &origin)
{
	if (this == &origin)
		return *this;
	_grade = origin._grade;
	return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat &origin): _name(origin.getName())
{
	*this = origin;
}

std::ostream& operator<<(std::ostream &out, Bureaucrat const &origin)
{
	out << origin.getName();
	out << ", bureaucrat grade ";
	out << origin.getGrade();
	return out;
}

void	Bureaucrat::signForm(const Form& form) const
{
	if (form.getSign())
	{
		std::cout << "<" << getName() << "> cannot sign <" << form.getName() << "> because <The form is already sign>" << std::endl;
	}
	else if (getGrade() > form.getMarkSign())
	{
		std::cout << "<" << getName() << "> cannot sign <" << form.getName() << "> because <The grade is low>" << std::endl;
	}
	else
	{
		std::cout << "<" << getName() << "> signs <" << form.getName() << ">" << std::endl;
	}
}
