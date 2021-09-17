#include <Zombie.hpp>

Zombie *newZombie(const std::string& name) {
	Zombie *zombie = new Zombie(name);
	return zombie;
}