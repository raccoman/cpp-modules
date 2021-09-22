#include <Character.hpp>

Character::Character(const std::string &name) {
	this->name = name;
}

Character::Character(const Character &other) {
	*this = other;
}

Character::~Character() {
}

Character &Character::operator=(const Character &other) {
	this->name = other.name;
	for (int i = 0; i < 4; ++i) {
		materials[i] = other.materials[i];
	}
	return *this;
}

const std::string &Character::getName() const {
	return name;
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < 4; ++i) {
		if (materials[i] == nullptr) {
			materials[i] = m;
			return;
		}
	}
	std::cout << "Can't equip another material!" << std::endl;
}

void Character::unequip(int idx) {
	materials[idx] = nullptr;
}

void Character::use(int idx, ICharacter &target) {
	materials[idx]->use(target);
}
