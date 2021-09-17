#include <Point.hpp>

static int ft_abs(float const value) {
	return value >= 0 ? value : -value;
}

float area(Point const a, Point const b, Point const c) {
	return ft_abs(((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())).toFloat() / 2.0));
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	float A = area(a, b, c);

	/* Calculate area of triangle PBC */
	float A1 = area(point, b, c);

	/* Calculate area of triangle PAC */
	float A2 = area(a, point, c);

	/* Calculate area of triangle PAB */
	float A3 = area(a, b, point);

	/* Check if sum of A1, A2 and A3 is same as A */
	return (A == A1 + A2 + A3);
}