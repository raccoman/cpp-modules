#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <stdlib.h>
#include <iostream>

template<class T> void	print(T& element) {
	std::cout << element << std::endl;
}

template<class T> void	iter(T* ptr, size_t length, void(*function)(T& element)) {
	for (size_t i = 0; i < length; ++i)
		function(ptr[i]);
}

#endif
