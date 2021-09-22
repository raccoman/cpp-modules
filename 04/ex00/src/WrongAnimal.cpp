#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal() : type("Unknown") {
	std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
	this->type = other.type;
	return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << "Undefined noises..." << std::endl;
}

std::string WrongAnimal::getType() const {
	return this->type;
}
