#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):
	Form(target, 72, 45), _target(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const & bur) const
{
	if (bur.getGrade() > getGradeExec())
	{
		std::cout << "<" << bur.getName() << "> cannot execve <" << getName() << "> because ";
		throw Bureaucrat::GradeTooLowException();
	}
	else
	{
		std::srand(time(0));
		std::cout << "br br br .. " << std::endl;
		if (rand() % 2)
			std::cout << "<" << _target << "> has been robotomized successfully" << std::endl;
		else
			std::cout << "<" << _target << "> robotomized abort" << std::endl;
	}
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& origin):
	Form(origin.getName(), 72, 45),
	_target(origin.getTarget())
{
	*this = origin;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &origin)
{
	if (this == &origin)
		return *this;
	_target = origin.getTarget();
	copySign(origin.getSign());	
	return *this;
}

std::string const RobotomyRequestForm::getTarget() const
{
	return _target;
}
