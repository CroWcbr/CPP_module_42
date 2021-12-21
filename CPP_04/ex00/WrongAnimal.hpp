#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal
{
protected:
	std::string	type;
public:
	WrongAnimal( void );
	WrongAnimal( const WrongAnimal& origin);
	WrongAnimal& operator=(const WrongAnimal& origin);

	~WrongAnimal( void );

	std::string getType() const;
	void makeSound() const;
};

#endif