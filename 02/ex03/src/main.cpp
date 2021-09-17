#include <Point.hpp>
#include <iostream>

int main() {

	Point a(0, 0);
	Point b(20, 0);
	Point c(10, 30);
	Point point(10, 15);

	/* Let us check whether the point P(10, 15) lies inside the triangle
	   formed by A(0, 0), B(20, 0) and C(10, 30) */
	if (bsp(a, b, c, point))
		std::cout << "Inside" << std::endl;
	else
		std::cout << "Not inside" << std::endl;

	return 0;
}