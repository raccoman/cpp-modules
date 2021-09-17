#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
public:
	~Zombie();
	explicit Zombie(const std::string& name);
	void announce();
private:
	std::string name;
};

Zombie *newZombie(const std::string& name);
void randomChump(const std::string& name);

#endif
