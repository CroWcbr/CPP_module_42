#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main ()
{
	Intern someRandomIntern;
	Form * scf;
	Form * rrf;
	Form * ppf;
	std::cout <<"====Test_Wrong_Form====" << std::endl;
	try
	{
		scf = someRandomIntern.makeForm("shrubbery creation", "SCF");
		rrf = someRandomIntern.makeForm("robotomy request", "RRF");
		ppf = someRandomIntern.makeForm("11111", "PPF");

	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl <<"====Test_ShrubberyCreationForm_sign====" << std::endl;
	try
	{
		Bureaucrat bur("Bill",1);
		scf = someRandomIntern.makeForm("shrubbery creation", "SCF");
		rrf = someRandomIntern.makeForm("robotomy request", "RRF");
		ppf = someRandomIntern.makeForm("presidential pardon", "PPF");
		
		std::cout << std::endl;

		std::cout << bur << std::endl;
		std::cout << *scf << std::endl;
		std::cout << *rrf << std::endl;
		std::cout << *ppf << std::endl;

		std::cout << std::endl;

		scf->isSign(bur);
		std::cout << *scf << std::endl;		
		scf->execute(bur);

		std::cout << std::endl;

		rrf->isSign(bur);
		std::cout << *rrf << std::endl;
		rrf->execute(bur);

		std::cout << std::endl;

		ppf->isSign(bur);
		std::cout << *ppf << std::endl;
		ppf->execute(bur);

		delete scf;
		delete rrf;
		delete ppf;

	std::cout << std::endl <<"====Test_Wrong_Form====" << std::endl;	
		Bureaucrat bur1("Bill1",1);
		scf = someRandomIntern.makeForm("111", "SCF");
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
