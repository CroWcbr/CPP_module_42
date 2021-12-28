#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <time.h>

class Span
{
private:

	std::vector<int>	_sp;
	unsigned int		_N;

public:
	Span(unsigned int N = 0);
	~Span();
	Span(const Span&);
	Span &operator=(const Span& op);

	void	addNumber(int n);
	long	shortestSpan(void);
	long	longestSpan(void);
	void	RandomInit( void );

	class SpIsFull: public std::exception
	{
		virtual const char* what() const throw() 
		{
			return ("Span has not enough memory"); 
		}
	};
	class SpIsTooSmall: public std::exception
	{
		virtual const char* what() const throw() 
		{
			return ("Span has not enough element"); 
		}
	};
};

#endif
