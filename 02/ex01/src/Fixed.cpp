#include <Fixed.hpp>

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(Fixed const &other) {
	std::cout << "Copy constructor called" << std::endl;
	this->value = other.value;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->value = (value << Fixed::bits);
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * (1 << Fixed::bits));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &other) {
	std::cout << "Assignation operator called" << std::endl;
	this->value = other.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Fixed const &value) {
	out << value.toFloat();
	return (out);
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

float Fixed::toFloat(void) const {
	return ((float)this->value / (float)(1 << Fixed::bits));
}

int Fixed::toInt(void) const {
	return (this->value >> Fixed::bits);
}