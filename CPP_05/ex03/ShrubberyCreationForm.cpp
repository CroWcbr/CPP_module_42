#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	Form(target, 145, 137), _target(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const & bur) const
{
	if (bur.getGrade() > getGradeExec())
	{
		std::cout << "<" << bur.getName() << "> cannot execve <" << getName() << "> because ";
		throw Bureaucrat::GradeTooLowException();
	}
	else
	{
		std::string tree;
		tree = 	"_________________ ¶¶¶¶\n"
				"________________ ¶¶¶¶¶¶¶¶\n"
				"_______________ ¶¶¶¶\n"
				"___¶¶¶¶¶¶¶¶¶__ ¶¶¶____¶¶¶\n"
				"_ ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n"
				"¶¶¶¶¶ ______¶¶¶¶¶¶¶¶____¶¶¶¶¶\n"
				"_______ ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_____¶¶\n"
				"______ ¶¶¶¶__¶¶¶_¶¶¶¶¶¶¶¶¶\n"
				"____ ¶¶¶¶___¶¶¶___¶¶¶_¶¶¶¶¶\n"
				"___ ¶¶¶¶¶__¶¶¶¶_¶¶_¶¶¶_¶¶¶¶¶\n"
				"___ ¶¶¶___¶¶¶¶¶_¶¶__¶¶¶__¶¶¶\n"
				"__ ¶¶____¶¶¶¶¶___¶¶_¶¶¶¶_¶¶¶\n"
				"________ ¶¶¶_____¶¶___¶¶__¶\n"
				"_________ ¶¶¶____¶¶¶__¶¶__¶\n"
				"_________ ¶¶¶_____¶¶___¶\n"
				"_________ ¶¶______¶¶\n"
				"_________________ ¶¶¶\n"
				"_________________ ¶¶¶\n"
				"_________________ ¶¶¶\n"
				"_________________ ¶¶¶\n"
				"_________________ ¶¶¶\n"
				"_________________ ¶¶¶\n"
				"_________________ ¶¶¶\n"
				"________________ ¶¶¶¶\n"
				"________________ ¶¶¶¶\n"
				"________________ ¶¶¶¶\n"
				"________________ ¶¶¶\n"
				"____________ ¶¶¶_¶¶¶\n"
				"______________ ¶¶¶¶¶¶¶¶";

		std::ofstream file((_target + "_shrubbery").c_str());
		file << tree;
		file.close();
	}
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& origin):
	Form(origin.getName(), 145, 137),
	_target(origin.getTarget())
{
	*this = origin;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &origin)
{
	if (this == &origin)
		return *this;
	_target = origin.getTarget();
	copySign(origin.getSign());	
	return *this;
}

std::string const ShrubberyCreationForm::getTarget() const
{
	return _target;
}
