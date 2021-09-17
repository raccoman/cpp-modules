#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
public:
	Zombie();
	~Zombie();
	Zombie(const std::string& name);
	void announce();
	void setName(const std::string& name);
private:
	std::string name;
};

Zombie *zombieHorde(int N, std::string name);

#endif
