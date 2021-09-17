#include <iostream>
#include <string>

int main() {
	std::string	oString = "HI THIS IS BRAIN";
	std::string *stringPTR = &oString;
	std::string	&stringREF = oString;

	std::cout << "Original string address: " << &oString << std::endl;
	std::cout << "using stringPTR: " << &(*stringPTR) << std::endl;
	std::cout << "using stringREF: " << &stringREF << std::endl;

	std::cout << "Original string: " << oString << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;
}