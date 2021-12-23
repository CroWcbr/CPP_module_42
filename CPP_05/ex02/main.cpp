#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main ()
{
	std::cout << std::endl << "====Test_ShrubberyCreationForm_sign====" << std::endl;
	try
	{
		ShrubberyCreationForm scf("SCF Form");
		Bureaucrat bur("Bill",150);
		scf.isSign(bur);
		bur.executeForm(scf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "====Test_ShrubberyCreationForm_execve====" << std::endl;
	try
	{
		ShrubberyCreationForm scf("SCF Form");
		Bureaucrat bur("Bill",140);
		scf.isSign(bur);
		bur.executeForm(scf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "====Test_ShrubberyCreationForm_correct====" << std::endl;
	try
	{
		ShrubberyCreationForm scf("SCF Form");
		Bureaucrat bur("Bill",1);
		scf.isSign(bur);
		bur.executeForm(scf);	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "====Test_RobotomyRequestForm_correct====" << std::endl;
	try
	{
		RobotomyRequestForm rrf("RRF Form");
		Bureaucrat bur("Bill",1);
		rrf.isSign(bur);
		bur.executeForm(rrf);	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}


	std::cout << std::endl << "====Test_PresidentialPardonForm_correct====" << std::endl;
	try
	{
		PresidentialPardonForm ppf("PPF Form");
		Bureaucrat bur("Bill",1);
		ppf.isSign(bur);
		bur.executeForm(ppf);	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "====Test_copy====" << std::endl;
	{
		Bureaucrat bur("Bill",138);
		ShrubberyCreationForm scf("SCF Form");
		std::cout << scf << std::endl;
		ShrubberyCreationForm scf2("SCF Form2");
		scf2.isSign(bur);
		std::cout << scf2 << std::endl;
		scf = scf2;
		std::cout << scf << std::endl;
	}

	return 0;
}
