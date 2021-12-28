#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class EndOfContainer: public std::exception 
{
	virtual const char* what() const throw()
	{
		return ("Nothing in Container");
	}
};

template<typename T>
typename T::iterator	easyfind( T &container, int n )
{
	typename T::iterator	tmp;
	
	tmp = find(container.begin(), container.end(), n);
	if (tmp == container.end())
		throw EndOfContainer();
	return tmp;
}

#endif
