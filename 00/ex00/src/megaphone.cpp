#include <iostream>

int	main(int argc, char **argv) {

	std::string	msg;

	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}

	for (int i = 1; i < argc; i++)
		msg.append(argv[i]);
	for (char c : msg)
		std::cout << (char)toupper(c);
	std::cout << std::endl;
}