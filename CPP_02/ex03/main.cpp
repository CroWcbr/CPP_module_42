#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
	std::cout << "=== Make point test1 ===" << std::endl;
	Point test1(0, 0);

	std::cout << std::endl << "=== Make point test2 ===" << std::endl;
	Point test2(10.10f, 10.10f);	
	
	std::cout << std::endl << "=== Make point a, b, c ===" << std::endl;
	Point a(0, 0);
	Point b(30, 0);
	Point c(0, 40);	

	{
		Point dddd(c);
		std::cout << "dddd X = " << dddd.getX() << " dddd Y = " << dddd.getY() << std::endl;
	}

	{
		Point dddd = c;
		std::cout << "dddd X = " << dddd.getX() << " dddd Y = " << dddd.getY() << std::endl;
	}

	std::cout << std::endl << "=== result 1 ===" << std::endl;
	if (bsp(a, b, c, test1))
		std::cout << std::endl << "Point is inside the triangle!" << std::endl;
	else		
		std::cout << std::endl << "Point is outside the triangle!" << std::endl;

	std::cout << std::endl << "=== result 2 ===" << std::endl;	
	if (bsp(a, b, c, test2))
		std::cout << std::endl << "Point is inside the triangle!" << std::endl;
	else		
		std::cout << std::endl << "Point is outside the triangle!" << std::endl;

	std::cout << std::endl << "=== END ===" << std::endl;	
	return 0;
}
