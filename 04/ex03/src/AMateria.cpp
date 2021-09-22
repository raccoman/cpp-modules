#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) {
	this->type = type;
}

AMateria::AMateria(const AMateria &amateria) {
	*this = amateria;
}

AMateria &AMateria::operator=(const AMateria &amateria) {
	this->type = amateria.type;
	return *this;
}

std::string const &AMateria::getType() const {
	return type;
}

AMateria::~AMateria() {
}

void AMateria::use(ICharacter &target) {
	(void) target;
	std::cout << "You shouldn't be able to call this" << std::endl;
}