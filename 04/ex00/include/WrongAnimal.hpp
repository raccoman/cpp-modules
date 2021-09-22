#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &other);
	virtual ~WrongAnimal();
	WrongAnimal &operator=(WrongAnimal const &other);
	void makeSound() const;
	std::string getType() const;
};

#endif
