#include "span.hpp"

Span::Span(unsigned int N):_N(N)
{
}

Span::~Span()
{
}

Span::Span(const Span& origin):
	_sp(origin._sp),
	_N(origin._N)
{}

Span & Span::operator=(const Span& origin)
{
	if (this == &origin)
		return (*this);
	this->_N = origin._N;
	this->_sp = origin._sp;
	return (*this);
}

void	Span::addNumber(int n)
{
	if (_sp.size() < _N)
		_sp.push_back(n);
	else
		throw Span::SpIsFull();
}

long Span::shortestSpan()
{
	if(_sp.size() <= 1)
		throw Span::SpIsTooSmall();

	std::sort(_sp.begin(), _sp.end());
	long shortest = static_cast<long>(_sp[1]) - static_cast<long>(_sp[0]);
	for (size_t i = 1; i < _sp.size() - 1; i++)
		if (static_cast<long>(_sp[i + 1]) - static_cast<long>(_sp[i]) < shortest)
			shortest = static_cast<long>(_sp[i + 1]) - static_cast<long>(_sp[i]);
	return (shortest);
}

long Span::longestSpan()
{
	if(this->_sp.size() <= 1)
		throw Span::SpIsTooSmall();

    long min_sp = *std::min_element(_sp.begin(), _sp.end());
    long max_sp = *std::max_element(_sp.begin(), _sp.end()); 
	return (static_cast<long>(max_sp) - min_sp);
}

void	Span::RandomInit()
{
	srand(time(NULL));
	for (unsigned int i = 0; i < _N; i++)
		 _sp.push_back(rand());
}
