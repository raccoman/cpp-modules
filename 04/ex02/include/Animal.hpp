#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
protected:
	Animal();
	Animal(Animal const &other);
	std::string type;
public:
	virtual ~Animal();
	Animal &operator=(Animal const &other);
	virtual void makeSound() const = 0;
	std::string getType() const;
};

#endif
