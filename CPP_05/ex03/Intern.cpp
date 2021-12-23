#include "Intern.hpp"

Form* Intern::makeForm(std::string form, const std::string& target)
{
	Form *(Intern::*forms[3])( std::string const & ) const = \
		{&Intern::makeRRF, \
		&Intern::makePPF, \
		&Intern::makeSCF};
	std::string form_string[3] = \
		{"robotomy request", \
		"presidential pardon", \
		"shrubbery creation"};
	int i = 0;
	while(form != form_string[i] && i < 3)
		i++;
	if (i < 3)
	{
		std::cout << "Intern creates " << target << std::endl;
		return (this->*forms[i])(target);
	}
	throw Intern::InternException();
	return (NULL);
}

Form *Intern::makeRRF(std::string const & target) const
{
	Form *new_form = new RobotomyRequestForm(target);
	return (new_form);
}

Form *Intern::makePPF(std::string const & target) const
{
	Form *new_form = new PresidentialPardonForm(target);
	return (new_form);
}

Form *Intern::makeSCF(std::string const & target) const
{
	Form *new_form = new ShrubberyCreationForm(target);
	return (new_form);
}

Intern &Intern::operator=(const Intern &origin)
{
	if (this == &origin)
		return *this;
	return *this;
}

Intern::Intern(const Intern &origin)
{
	*this = origin;
}


const char *Intern::InternException::what() const throw()
{
	return ("Unknown form");
}
