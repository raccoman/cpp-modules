#include <Weapon.hpp>

Weapon::Weapon(const std::string& type) : type(type) {
}

Weapon::~Weapon() {
}

const std::string &Weapon::getType() const {
	return (this->type);
}

bool Weapon::setType(const std::string &type) {
	if (type.empty()) {
		std::cout << "new type can't be empty string" << std::endl;
		return (false);
	}
	this->type = type;
	return (true);
}
