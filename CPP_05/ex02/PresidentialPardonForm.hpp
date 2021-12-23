#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <fstream>
# include "Form.hpp"

class PresidentialPardonForm: public Form
{
private:
	std::string _target;
public:
	PresidentialPardonForm(std::string const target);
	~PresidentialPardonForm();

	PresidentialPardonForm(const PresidentialPardonForm& origin);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& origin);

	std::string const getTarget() const;
	void execute(Bureaucrat const & executor) const;
};

#endif