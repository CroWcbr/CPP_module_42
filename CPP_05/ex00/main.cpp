#include "Bureaucrat.hpp"

int main ()
{
	std::cout << "====Test_grade===="<< std::endl;
	{
		
		for (int i = -4; i < 155; i++)
		{
			std::cout << "i = " << i << "\t\t";
			try
			{
				Bureaucrat b1("Bureaucrat", i);
				std::cout << b1 << std::endl;
			}
			catch (std::exception &e)
			{
				std::cerr << e.what() << std::endl;
			}
			if (i == 5)
				i = 145;
		}
	}
	std::cout << std::endl << "====Test_incr/decr===="<< std::endl;
	try
	{
		Bureaucrat incr_decr("incr_decr", 50);
		std::cout << incr_decr << std::endl;
		incr_decr.incrGrade();
		std::cout << incr_decr << std::endl;
		incr_decr.decrGrade();
		std::cout << incr_decr << std::endl;		
		incr_decr.decrGrade();
		std::cout << incr_decr << std::endl;		
		incr_decr.decrGrade();
		std::cout << incr_decr << std::endl;		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << "====Test_highGrade===="<< std::endl;
	try
	{
		Bureaucrat high("highGrade", 1);
		std::cout << high << std::endl;
		high.incrGrade();
		std::cout << high << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << "====Test_LowGrade===="<< std::endl;
	try
	{
		Bureaucrat low("lowGrade", 1);
		std::cout << low << std::endl;
		low.decrGrade();
		std::cout << low << std::endl;		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << "====Test_Copy===="<< std::endl;
	Bureaucrat low("lowGrade", 1);
	Bureaucrat tmp3(low);
	std::cout << tmp3 << std::endl;	
	Bureaucrat tmp("test");
	std::cout << low << std::endl;
	tmp = tmp3;
	std::cout << tmp << std::endl;
	Bureaucrat tmp2(tmp);
	std::cout << tmp2 << std::endl;
	return 0;
}
