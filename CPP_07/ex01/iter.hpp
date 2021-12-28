#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T>
void iter(T *array, size_t arraySize, void(*f)(T const &))
{
	for (size_t i = 0; i < arraySize; i++)
		(*f)(array[i]);
}

template <typename T>
void print(T const & x)
{
	std::cout << x;
	return;
}

template <typename T>
void print_multiply2(T const & x)
{
	std::cout <<  x * 2;
	return;
}

#endif
