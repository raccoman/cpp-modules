#include <WrongCat.hpp>

WrongCat::WrongCat() {
	this->type = "Cat";
	std::cout << "WrongCat default constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) {
	*this = other;
	std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
	this->type = other.type;
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "Miao Miao!" << std::endl;
}
