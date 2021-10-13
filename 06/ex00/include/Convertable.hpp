#ifndef CONVERTABLE_HPP
#define CONVERTABLE_HPP

#include <iostream>
#include <cmath>

class Convertable {

private:
	const std::string	_value;

	int		toInt();
	char	toChar();
	float	toFloat();
	double	toDouble();
public:
	Convertable();
	~Convertable();
	Convertable(const std::string& value);
	Convertable(const Convertable& convertable);
	Convertable& operator=(const Convertable& other);

	void	convert();
};

#endif
