#include "Karen.hpp"

Karen::Karen()
{
}

Karen::~Karen()
{
}

void Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double" <<
				"-cheese-triple-pickle-special-ketchup burger. " <<
				"I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more " << 
				"money. You don’t put enough! If you did I would " << 
				"not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for " <<
				"free. I’ve been coming here for years and you " <<
				"just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the " <<
				"manager now." << std::endl;
}

void Karen::no_parameter(void)
{
	std::cout << "[ Probably complaining about insignificant " <<
				"problems ]" << std::endl<< std::endl;
}

void Karen::filter(std::string level)
{
	int	i;

	std::string filtr_level[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (i = 0; i < sizeof(filtr_level); i++)
		if (filtr_level[i] == level)
			break;
    switch(i)
    {
        case 0: 
            Karen::debug();
			std::cout << std::endl;
        case 1:
        	Karen::info();
			std::cout << std::endl;
        case 2:
            Karen::warning();
			std::cout << std::endl;			
        case 3:
            Karen::error();
			std::cout << std::endl;
			break;
		default:
			Karen::no_parameter();
    }	
}
