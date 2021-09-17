#include <Zombie.hpp>

Zombie::Zombie(const std::string& name): name(name) {
}

Zombie::~Zombie() {
	std::cout << "<" << name << "> died." << std::endl;
}

void Zombie::announce() {
	std::cout << "<" << name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}