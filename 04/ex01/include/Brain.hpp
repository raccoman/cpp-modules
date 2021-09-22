#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
public:
	Brain();
	Brain(Brain const &other);
	~Brain();
	Brain &operator=(Brain const &other);
private:
	std::string ideas[100];
};

#endif
