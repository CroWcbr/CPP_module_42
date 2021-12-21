#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>
# include "Brain.hpp"

class Animal
{
protected:
	std::string	type;
public:
	Animal( void );
	Animal( const Animal& origin );
	
	virtual Animal& operator=( const Animal& origin );
	virtual ~Animal( void );

	std::string		getType() const;

	virtual void	makeSound() const;
	virtual void	printAllIdea( void ) const = 0;
	virtual void	addIdea( std::string new_idea ) const = 0;
	virtual void	chooseIdea ( void ) const = 0;
	virtual Brain	*getBrain( void ) const = 0;
};

#endif
