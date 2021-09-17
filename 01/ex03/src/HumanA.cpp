#include <HumanA.hpp>

HumanA::HumanA(std::string name, const Weapon &weapon) : name(name), weapon(weapon) {
}

HumanA::~HumanA() {
}

void HumanA::attack() {
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}