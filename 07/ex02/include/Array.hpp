#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <array>

template<class T> class Array {
private:
	T*				_head;
	unsigned int	_size;
public:

	Array() {
		_head = nullptr;
		_size = 0;
	}

	Array(unsigned int size) {
		_size = size;
		_head = new T[_size];
		for (unsigned int i = 0; i < _size; ++i)
			_head[i] = 0;
	}

	Array(Array& array) {
		_size = array.size();
		_head = new T[_size];
		for (unsigned int i = 0; i < _size; ++i)
			_head[i] = array[i];
	}

	~Array() {
		if (_size)
			delete [] _head;
	}


	Array &operator=(const Array& other) {
		if (_size)
			delete [] _head;

		_size = other.size();
		_head = new T[_size];
		for (unsigned int i = 0; i < _size; ++i)
			_head[i] = other[i];
	}

	T &operator[](unsigned int index) {
		if (index >= _size)
			throw ArrayOutOfBoundsException();
		return _head[index];
	}

	size_t	size() {
		return _size;
	}

	class ArrayOutOfBoundsException: public std::exception {
		virtual const char *what() const throw() {
			return ("Array out of bounds exception.");
		}
	};
};

#endif
