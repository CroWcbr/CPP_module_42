#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdlib.h>

template<typename T>
class Array
{
private:
	T		*_array;	
	int		_sizeArray;
public:
	Array<T>( void ): 
			_array(NULL),
			_sizeArray(0)
	{
		std::cout << "Default constructor called for " << this << std::endl;
	}

	~Array<T>( void )
	{
		if (_sizeArray > 0)
			delete [] _array;
		std::cout << "Default destructor called for " << this << std::endl;
	}

	Array<T>( const unsigned int size ): _sizeArray(size)
	{
		std::cout << "Size constructor called for " << this << std::endl;
		if (size < 0)
			throw std::overflow_error("Index out of bounds");
		_array = new T[_sizeArray];
	}

	Array<T>( const Array<T> &origin ):
		_array(NULL),
		_sizeArray(0)
	{
		std::cout << "Copy constructor called for " << this << std::endl;
		*this = origin;
	}

	T	&operator[](const int index) const
	{
		if (index >= _sizeArray || index < 0)
			throw std::overflow_error("Index out of bounds");
		return _array[index];
	}

	Array<T>	&operator=( const Array<T> &origin )
	{
		std::cout << "Assignation overload called for " << this << std::endl;
		if (this == &origin)
			return *this;
		if (this->_sizeArray > 0)
			delete [] this->_array;
		_sizeArray = origin.size();
		_array = new T[_sizeArray];
		for (int i = 0; i < _sizeArray; i++)
			_array[i] = origin[i];
		return *this;
	}

	int	size( void ) const
	{
		return this->_sizeArray;
	}

	void	print_array( void ) const
	{
		std::cout << "Print array for " << this << std::endl << "\t";
		for (int i = 0; i < _sizeArray; i++)
			std::cout << _array[i] << " ";
		if (_sizeArray == 0)
			std::cout << "Array is empty!!!";
		std::cout << std::endl;
	}	
};

#endif
