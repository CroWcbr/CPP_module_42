#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	Form(target, 25, 5), _target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(Bureaucrat const & bur) const
{
	if (bur.getGrade() > getGradeExec())
	{
		std::cout << "<" << bur.getName() << "> cannot execve <" << getName() << "> because ";
		throw Bureaucrat::GradeTooLowException();
	}
	else
	{
		std::cout << "<" << _target << "> has been pardoned by Zafod Beeblebrox" << std::endl;
	}
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& origin):
	Form(origin.getName(), 25, 5),
	_target(origin.getTarget())
{
	*this = origin;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &origin)
{
	if (this == &origin)
		return *this;
	_target = origin.getTarget();
	copySign(origin.getSign());	
	return *this;
}

std::string const PresidentialPardonForm::getTarget() const
{
	return _target;
}
