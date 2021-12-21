#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal
{
public:
	Cat( void );
	Cat( const Cat& origin);
	Cat& operator=(const Cat& origin);

	~Cat( void );

	void makeSound() const;
};

#endif
