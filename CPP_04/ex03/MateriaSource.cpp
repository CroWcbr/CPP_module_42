# include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) 
{
	for (int i = 0; i < MATERIASOURCE_SIZE; i++)
		this->materia_types[i] = NULL;
	std::cout << "MateriaSource deafult constructor for " << this << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource& origin )
{
	for (int i = 0; i < MATERIASOURCE_SIZE; i++)
		if (origin.materia_types[i] != NULL)
			materia_types[i] = origin.materia_types[i]->clone();
	std::cout << "MateriaSource copy constructor for " << this << std::endl;
}

MateriaSource& MateriaSource::operator =(const MateriaSource& origin)
{
	if (this == &origin)
		return (*this);
	for (int i = 0; i < MATERIASOURCE_SIZE; i++) 
	{
		if (origin.materia_types[i] != NULL) 
		{
			delete materia_types[i];
			materia_types[i] = origin.materia_types[i]->clone();
		}
	}
	std::cout << "MateriaSource assignation for" << this << std::endl;
	return (*this);
}

MateriaSource::~MateriaSource( void ) 
{
	for (int i = 0; i < MATERIASOURCE_SIZE; i++) 
		if (materia_types[i] != NULL)
			delete materia_types[i];
	std::cout << "MateriaSource destructor for " << this << std::endl;
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < MATERIASOURCE_SIZE; i++)
	{
		if (!this->materia_types[i])
		{
			this->materia_types[i] = m;
			break ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < MATERIASOURCE_SIZE; i++)
	{
		if (materia_types[i] && materia_types[i]->getType() == type)
		{
			std::cout << "\x1b[32m\tcreateMateria: " << this->materia_types[i]->getType() << "\x1b[0m" << std::endl;
			return (materia_types[i]->clone());
		}
	}
	return (0);
}
