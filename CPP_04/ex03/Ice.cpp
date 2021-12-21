#include "Ice.hpp"

Ice::Ice( void ): AMateria::AMateria("ice")
{
	std::cout << "Ice deafult constructor for " << this << std::endl;
}

Ice::Ice( Ice const & origin ): AMateria::AMateria(origin)
{
	std::cout << "Ice copy constructor for " << this << std::endl;
	*this = origin;
	return;
}

Ice::~Ice( void )
{
	std::cout << "Ice destructor " << this << std::endl;
}

Ice	&Ice::operator=( const Ice &other )
{
	this->_type = other._type;
	std::cout << "Ice assignation for " << this << std::endl;
	return *this;
}

AMateria	*Ice::clone( void ) const
{
	return (new Ice(*this));
}

void		Ice::use(ICharacter& target)
{
	std::cout << "\x1b[32m\t* shoots an ice bolt at " << target.getName() << " *\x1b[0m" << std::endl;
}
