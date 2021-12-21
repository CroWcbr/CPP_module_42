#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
private:
	Brain *p_brain;
public:
	Cat( void );
	~Cat( void );

	Cat( const Cat& origin);
	Cat& operator=(const Cat& origin);
	virtual Animal	&operator=( const Animal & origin );

	void makeSound() const;
	void printAllIdea( void ) const;
	void addIdea( std::string new_idea ) const;
	void chooseIdea ( void ) const;
	virtual Brain	*getBrain( void ) const;	
};

#endif
