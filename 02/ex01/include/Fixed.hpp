#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
public:
	Fixed();
	Fixed(Fixed const &other);
	Fixed(const int value);
	Fixed(float const value);
	virtual ~Fixed();
	Fixed &operator=(Fixed const &other);
	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
private:
	int value;
	static const int bits = 8;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif
