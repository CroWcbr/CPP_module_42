#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
private:
	Brain *p_brain;
public:
	Dog( void );
	~Dog( void );

	Dog( const Dog& origin);
	Dog& operator=(const Dog& origin);
	virtual Animal	&operator=( const Animal & origin );

	void makeSound() const;
	void printAllIdea( void ) const;
	void addIdea( std::string new_idea ) const;
	void chooseIdea ( void ) const;
	virtual Brain	*getBrain( void ) const;	
};

#endif
