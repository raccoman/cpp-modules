#include <HumanB.hpp>

HumanB::HumanB(std::string name) : name(name), weapon(nullptr) {
}

HumanB::~HumanB() {
}

void HumanB::attack() {
	if (weapon == nullptr) {
		std::cout << name << " can't attack because he don't have a weapon. " << weapon->getType() << std::endl;
		return;
	}
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	if (weapon.getType().empty()) {
		std::cerr << "New weapon can't be nothing" << std::endl;
		return ;
	}
	this->weapon = &weapon;
}