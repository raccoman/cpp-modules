#include <Dog.hpp>

Dog::Dog() {
	this->type = "Dog";
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(const Dog &other) {
	*this = other;
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
	this->type = other.type;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woff!! Woff!!" << std::endl;
}