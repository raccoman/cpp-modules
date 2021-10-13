#include <Whatever.hpp>
#include <iostream>

int main( void ) {

	int array[] = {1, 2, 3, 4};
	::iter<int>(array, 4, ::print);

	std::string str = "Hello, World!";
	iter<const char>(str.c_str(), str.length(), ::print);

}