#ifndef CURE_HPP
#define CURE_HPP

#include <AMateria.hpp>

class Cure : public AMateria {
public:
	Cure();
	~Cure();
	Cure &operator=(const Cure &cure);
	Cure* clone() const;
	void use(ICharacter& target);
};

#endif //CURE_HPP
