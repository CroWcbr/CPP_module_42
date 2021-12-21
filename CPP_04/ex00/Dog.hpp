#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
public:
	Dog( void );
	Dog( const Dog& origin);
	Dog& operator=(const Dog& origin);

	~Dog( void );

	void makeSound() const;
};

#endif
