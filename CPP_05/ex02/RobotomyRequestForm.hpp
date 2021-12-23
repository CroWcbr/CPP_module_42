#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <fstream>
# include "Form.hpp"
# include <stdlib.h>

class RobotomyRequestForm: public Form
{
private:
	std::string _target;
public:
	RobotomyRequestForm(std::string const target);
	~RobotomyRequestForm();

	RobotomyRequestForm(const RobotomyRequestForm& origin);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& origin);

	std::string const getTarget() const;
	void execute(Bureaucrat const & executor) const;
};

#endif
