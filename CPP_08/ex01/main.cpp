#include "span.hpp"

int main()
{
	std::cout << "=== Test Default ===" << std::endl;
	{
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	}

	std::cout << std::endl << "=== Test big===" << std::endl;
	{
	Span sp = Span(10000);
	sp.RandomInit();

	std::cout << "sp: " << &sp << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span sp2(sp);
	std::cout << "sp2: " << &sp2 << std::endl;
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	Span sp3;
	sp3 = sp;
	std::cout << "sp3: " << &sp3 << std::endl;
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;
	}

	return 0;
}
