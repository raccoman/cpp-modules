#include <Cat.hpp>

Cat::Cat() {
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(const Cat &other) {
	*this = other;
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat::~Cat() {
	delete brain;
	std::cout << "Cat destructor called." << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
	this->type = other.type;
	this->brain = other.brain;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Miao Miao!" << std::endl;
}
