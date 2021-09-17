#include <iostream>
#include <Replace.hpp>

int main(int argc, char **argv) {

	Replace replace;

	if (argc != 4) {
		std::cerr << "Wrong syntax. Usage: ./replace <inputStream> <s1> <s2>" << std::endl;
		return 1;
	}

	if (!replace.setFile(argv[1])) return 1;
	if (!replace.run(argv[2], argv[3])) return 1;

	return 0;
}