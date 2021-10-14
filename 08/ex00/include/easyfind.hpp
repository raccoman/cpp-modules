#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

template<typename T> typename T::iterator easyfind(T& container, int query) {

	typename T::iterator result = std::find(container.begin(), container.end(), query);
	if (result == container.end())
		throw std::exception();

	return result;
}

#endif
