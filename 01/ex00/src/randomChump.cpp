#include <Zombie.hpp>

void randomChump(const std::string& name) {
	Zombie random = Zombie(name);
	random.announce();
}