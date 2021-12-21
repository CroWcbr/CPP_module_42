#include "Cure.hpp"

Cure::Cure( void ): AMateria::AMateria("cure")
{
	std::cout << "Cure deafult constructor for " << this << std::endl;
}

Cure::Cure( Cure const & origin ): AMateria::AMateria(origin)
{
	std::cout << "Cure copy constructor for " << this << std::endl;
	*this = origin;
	return;
}

Cure::~Cure( void )
{
	std::cout << "Cure destructor " << this << std::endl;
}

Cure	&Cure::operator=( const Cure &other )
{
	this->_type = other._type;
	std::cout << "Cure assignation for " << this << std::endl;
	return *this;
}

AMateria	*Cure::clone( void ) const
{
	return (new Cure(*this));
}

void		Cure::use(ICharacter& target)
{
	std::cout << "\x1b[32m\t* heals " << target.getName() << " wounds *\x1b[0m" << std::endl;
}
