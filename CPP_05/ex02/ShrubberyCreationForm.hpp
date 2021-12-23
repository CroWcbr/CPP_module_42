#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
private:
	std::string _target;
public:
	ShrubberyCreationForm(std::string const target);
	~ShrubberyCreationForm();

	ShrubberyCreationForm(const ShrubberyCreationForm& origin);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& origin);

	std::string const getTarget() const;
	void execute(Bureaucrat const & executor) const;
};

#endif
