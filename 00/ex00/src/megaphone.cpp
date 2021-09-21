#include <iostream>

int	main(int argc, char **argv) {

	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}

	std::string	msg;
	for (int i = 1; i < argc; i++)
		msg.append(argv[i]);

	std::transform(msg.begin(), msg.end(), msg.begin(), ::toupper);
	std::cout << msg << std::endl;
}