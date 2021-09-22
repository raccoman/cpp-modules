#include <Animal.hpp>

Animal::Animal() : type("Unknown") {
	std::cout << "Animal constructor called." << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called." << std::endl;
}

Animal::Animal(const Animal &other) {
	*this = other;
}

Animal &Animal::operator=(const Animal &other) {
	this->type = other.type;
	return *this;
}

void Animal::makeSound() const {
	std::cout << "Undefined noises..." << std::endl;
}

std::string Animal::getType() const {
	return this->type;
}
