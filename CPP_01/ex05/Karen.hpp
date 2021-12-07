#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>
# include <iostream>

class Karen
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

public:
	Karen();
	~Karen();
	void	complain(std::string level);
};

#endif