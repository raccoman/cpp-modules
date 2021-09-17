#include <Replace.hpp>
#include <sstream>

Replace::Replace() {
}

Replace::~Replace() {
}

bool Replace::setFile(const std::string &name) {

	if (name.empty() || !isFile(name)) {
		std::cerr << "Please specify a valid inputStream." << std::endl;
		return false;
	}
	this->name = name;
	return true;
}

bool Replace::run(const std::string &s1, const std::string &s2) {

	std::string output;
	std::ofstream outputStream;
	std::ifstream inputStream;
	std::ostringstream buffer;

	if (s1.empty() || s2.empty()) {
		std::cerr << "Replacement cannot be empty." << std::endl;
		return false;
	}

	inputStream.open(name);
	buffer << inputStream.rdbuf();
	output = buffer.str();

	for (size_t i = 0; i < output.length(); i++) {
		i = output.find(s1, i);
		if (i == std::string::npos) break;
		output.erase(i, s1.length());
		output.insert(i, s2);
	}

	inputStream.close();

	std::transform(name.begin(), name.end(), name.begin(), ::toupper);
	outputStream.open(name + ".replace");
	outputStream << output;
	outputStream.close();

	std::cout << "Successfully replaced content to file '" << name << ".replace'." << std::endl;
	return true;
}

bool isFile(const std::string &name) {
	struct stat buffer = {};
	return (stat(name.c_str(), &buffer) == 0);
}