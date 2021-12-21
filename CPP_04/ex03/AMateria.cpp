#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): _type(type)
{
	std::cout << "AMateria type constructor for " << this << std::endl;
}

AMateria::AMateria( const AMateria& origin ): _type(origin._type)
{
	std::cout << "AMateria copy constructor for " << this << std::endl;
}

AMateria::~AMateria( void )
{
	std::cout << "AMateria destructor for " << this << std::endl;
}

AMateria& AMateria::operator =(const AMateria& origin)
{
	if (this == &origin)
		return (*this);
	_type = origin._type;
	std::cout << "AMateria assignation for " << this << std::endl;
	return (*this);
}

std::string const & AMateria::getType() const 
{
	return _type;
}

void AMateria::use(ICharacter& target) 
{
//	std::cout << "AMateria use " << std::endl;
	std::cout << "AMateria use " << target.getName() << std::endl;
}
