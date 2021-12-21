#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

# include <string>
# include <iostream>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

# define MATERIASOURCE_SIZE 4

class MateriaSource: public IMateriaSource
{
private:
	AMateria *materia_types[MATERIASOURCE_SIZE];
public:
	MateriaSource( void );
	MateriaSource( const MateriaSource& origin );
	MateriaSource& operator =(const MateriaSource& origin);

	virtual ~MateriaSource();
	virtual void learnMateria(AMateria* origin);
	virtual AMateria* createMateria(std::string const & type);
};

#endif
