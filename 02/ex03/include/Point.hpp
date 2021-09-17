#ifndef POINT_HPP
#define POINT_HPP

#include <Fixed.hpp>

class Point {
public:
	Point();
	~Point();
	Point(Point const &other);
	Point(Fixed const &x, Fixed const &y);
	Point &operator=(Point const &other);
	Fixed getX() const;
	Fixed getY() const;
private:
	Fixed const x;
	Fixed const y;
};

float area(Point const a, Point const b, Point const c);
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
