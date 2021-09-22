#include <Cat.hpp>

Cat::Cat() {
	this->type = "Cat";
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(const Cat &other) {
	*this = other;
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called." << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
	this->type = other.type;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Miao Miao!" << std::endl;
}
