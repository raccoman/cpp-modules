#include <Dog.hpp>

Dog::Dog() {
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(const Dog &other) {
	*this = other;
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog::~Dog() {
	delete brain;
	std::cout << "Dog destructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
	this->type = other.type;
	this->brain = other.brain;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woff!! Woff!!" << std::endl;
}