#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern() {};
	~Intern() {};
	Intern(const Intern& origin);
	Intern& operator=(const Intern& origin);
	Form* makeForm(std::string form, const std::string& target);
	class InternException: public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
private:
	Form *makeRRF(std::string const & target) const;
	Form *makePPF(std::string const & target) const;
	Form *makeSCF(std::string const & target) const;
};

#endif
