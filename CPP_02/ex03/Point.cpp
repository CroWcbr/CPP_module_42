#include "Point.hpp"

Point::Point(): _x(0), _y(0)
{
	std::cout << "Point constructor called" << " " << this << std::endl;
}

Point::~Point()
{
	std::cout << "Point destructor called" << " " << this << std::endl;
}

Point::Point(Fixed x, Fixed y): _x(x), _y(y)
{
	std::cout << "Point constructor called" << " " << this << std::endl;
}

Fixed Point::getX() const
{
	return (this->_x);
}

Fixed Point::getY() const
{
	return (this->_y);
}

Point::Point(const Point &point): _x(point._x), _y(point._y)
{
	std::cout << "Copy constructor called" << " " << this <<  std::endl;
}

Point& Point::operator=(const Point& point)
{
	if (this == &point)
	 	return (*this);	
	new (this) Point(point);
	return (*this);
}
