#ifndef KAREN_HPP
#define KAREN_HPP

#include <string>
#include <fstream>
#include <iostream>
#include <sys/stat.h>

class Karen {
public:
	Karen();
	~Karen();
	bool setFile(const std::string &name);
	bool run(const std::string &s1, const std::string &s2);
private:
	std::string name;
};

bool isFile(const std::string &name);

#endif
