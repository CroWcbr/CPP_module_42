#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	std::cout << "====Test_form===="<< std::endl;
	for (int i = -4; i < 155; i++)
	{
		std::cout << "i = " << i << std::endl;
		try
		{
			Form form("\tForm1", i, 1);
			std::cout << form << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			Form form("\tForm2", 1, i);
			std::cout << form << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		if (i == 5)
			i = 145;
	}

	std::cout << std::endl << "====Test_sign===="<< std::endl;
	try
	{
		Bureaucrat b("Bill", 1);
		std::cout << b << std::endl;
		Form f("Form", 1, 20);
		std::cout << f << std::endl;
		f.isSign(b);
		std::cout << f << std::endl;
		f.isSign(b);
		f.isSign(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << "====Test_sign_cannot write===="<< std::endl;
	try
	{
		Bureaucrat b("Bill");
		std::cout << b << std::endl;
		Form f("Form", 1, 20);
		std::cout << f << std::endl;
		f.isSign(b);		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << std::endl << "====Test_copy====" << std::endl;
		{
			Bureaucrat bur("Bill",1);
			Form scf("SCF Form", 1, 1);
			std::cout << scf << std::endl;
			Form scf2("SCF Form2", 2, 2);
			scf2.isSign(bur);
			std::cout << scf2 << std::endl;
			scf = scf2;
			std::cout << scf << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
