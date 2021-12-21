#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>
# include <ctime>
# include <cstdlib>

# define SIZE_BRAIN 100

class Brain
{
private:
	std::string _ideas[SIZE_BRAIN];
	int			num_ideas;
public:
	Brain();
	~Brain();
	
	void		printBrainIdea( void );	
	void		addBrainIdea( std::string new_idea );
	void		getBrainIdea( void );
	std::string	chooseBrainIdea( void);

	Brain(const Brain& origin);
	Brain& operator=(const Brain& origin);
};

#endif
