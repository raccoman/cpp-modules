#include <Convertable.hpp>

Convertable::Convertable() {
}

Convertable::Convertable(const std::string &value) : _value(value) {
}

Convertable::~Convertable() {
}

Convertable::Convertable(const Convertable& convertable) {
	*this = convertable;
}

Convertable& Convertable::operator=(const Convertable& convertable) {
	(void)convertable;
	return *this;
}


void Convertable::convert() {

	const char cValue = toChar();
	const int iValue = toInt();
	const float fValue = toFloat();
	const double dValue = toDouble();

	if (fValue < CHAR_MIN || fValue > CHAR_MAX || isnan(fValue)) {
		std::cout << "char: impossible" << std::endl;
	} else if (isprint(cValue)) {
		std::cout << "char: '" << cValue << "'" << std::endl;
	} else {
		std::cout << "char: non displayable" << std::endl;
	}

	if (iValue < INT_MIN || iValue > INT_MAX || isnan(fValue)) {
		std::cout << "int: impossible" << std::endl;
	} else {
		std::cout << "int: " << iValue << std::endl;
	}

	if (fValue - iValue == 0) {
		std::cout << "float: " << fValue << ".0f" << std::endl;
		std::cout << "double: " << dValue << ".0" << std::endl;
	} else {
		std::cout << "float: " << fValue << "f" << std::endl;
		std::cout << "double: " << dValue << std::endl;
	}
}

char Convertable::toChar() {
	return static_cast<char>(toFloat());
}

int Convertable::toInt() {
	return static_cast<int>(toFloat());
}

float Convertable::toFloat() {
	return atof(_value.c_str());
}

double Convertable::toDouble() {
	return static_cast<double>(toFloat());
}