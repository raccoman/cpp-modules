#include <Convertable.hpp>
#include <iostream>

int main(int argc, char **argv) {

	if (argc != 2) {
		std::cout << "Wrong syntax." << std::endl;
		return 0;
	}

	Convertable value(argv[1]);
	value.convert();
}