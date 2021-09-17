#include <Point.hpp>

Point::Point() : x(0), y(0) {
}

Point::~Point() {
}

Point::Point(const Point &other) : x(other.x), y(other.y) {
}

Point::Point(Fixed const &x, Fixed const &y) : x(x), y(y) {
}

Point &Point::operator=(const Point &other) {
	std::cerr << "Cannot call assignation operator." << std::endl;
	(void)other;
	return (*this);
}

Fixed Point::getX() const {
	return x;
}

Fixed Point::getY() const {
	return y;
}


