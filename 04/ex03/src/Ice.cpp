#include <Ice.hpp>

Ice::Ice() : AMateria("ice") {
}

Ice::~Ice() {
}

AMateria *Ice::clone() const {
	return new Ice();
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}