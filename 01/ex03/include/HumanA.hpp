#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <Weapon.hpp>
#include <iostream>

class HumanA {
public:
	explicit HumanA(std::string name, const Weapon &weapon);
	~HumanA();
	void attack();
private:
	std::string name;
	Weapon weapon;
};

#endif
